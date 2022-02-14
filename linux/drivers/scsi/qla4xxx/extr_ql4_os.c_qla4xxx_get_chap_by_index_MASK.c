
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flt_chap_size; } ;
struct scsi_qla_host {scalar_t__ chap_list; TYPE_1__ hw; } ;
struct ql4_chap_table {scalar_t__ cookie; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_5,
         int16_t VAR_6,
         struct ql4_chap_table **VAR_7)
{
 int VAR_8 = VAR_3;
 int VAR_9;

 if (!VAR_5->chap_list) {
  FUNC_2(VAR_1, VAR_5, "CHAP table cache is empty!\n");
  VAR_8 = VAR_3;
  goto exit_get_chap;
 }

 if (FUNC_1(VAR_5))
  VAR_9 = (VAR_5->hw.flt_chap_size / 2) /
       sizeof(struct ql4_chap_table);
 else
  VAR_9 = VAR_2;

 if (VAR_6 > VAR_9) {
  FUNC_2(VAR_1, VAR_5, "Invalid Chap index\n");
  VAR_8 = VAR_3;
  goto exit_get_chap;
 }

 *VAR_7 = (struct ql4_chap_table *)VAR_5->chap_list + VAR_6;
 if ((*VAR_7)->cookie !=
      FUNC_0(VAR_0)) {
  VAR_8 = VAR_3;
  *VAR_7 = ((void*)0);
 } else {
  VAR_8 = VAR_4;
 }

exit_get_chap:
 return VAR_8;
}
