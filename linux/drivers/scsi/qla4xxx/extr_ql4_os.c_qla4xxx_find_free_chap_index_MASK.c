
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int flt_chap_size; } ;
struct scsi_qla_host {scalar_t__ chap_list; TYPE_1__ hw; } ;
struct ql4_chap_table {scalar_t__ cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_6,
     uint16_t *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = -1;
 int VAR_11 = 0;
 struct ql4_chap_table *VAR_12;

 if (FUNC_1(VAR_6))
  VAR_11 = (VAR_6->hw.flt_chap_size / 2) /
      sizeof(struct ql4_chap_table);
 else
  VAR_11 = VAR_2;

 if (!VAR_6->chap_list) {
  FUNC_2(VAR_1, VAR_6, "CHAP table cache is empty!\n");
  VAR_9 = VAR_4;
  goto exit_find_chap;
 }

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  VAR_12 = (struct ql4_chap_table *)VAR_6->chap_list + VAR_8;

  if ((VAR_12->cookie !=
      FUNC_0(VAR_0)) &&
     (VAR_8 > VAR_3)) {
    VAR_10 = VAR_8;
    break;
  }
 }

 if (VAR_10 != -1) {
  *VAR_7 = VAR_10;
  VAR_9 = VAR_5;
 } else {
  VAR_9 = VAR_4;
 }

exit_find_chap:
 return VAR_9;
}
