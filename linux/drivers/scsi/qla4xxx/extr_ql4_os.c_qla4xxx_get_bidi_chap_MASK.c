
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flt_chap_size; } ;
struct scsi_qla_host {int chap_sem; scalar_t__ chap_list; TYPE_1__ hw; } ;
struct ql4_chap_table {scalar_t__ cookie; int flags; int name; int secret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_8, char *VAR_9,
       char *VAR_10)
{
 int VAR_11, VAR_12 = -VAR_3;
 int VAR_13 = 0;
 struct ql4_chap_table *VAR_14;

 if (FUNC_1(VAR_8))
  VAR_13 = (VAR_8->hw.flt_chap_size / 2) /
      sizeof(struct ql4_chap_table);
 else
  VAR_13 = VAR_5;

 if (!VAR_8->chap_list) {
  FUNC_4(VAR_4, VAR_8, "Do not have CHAP table cache\n");
  return VAR_12;
 }

 FUNC_2(&VAR_8->chap_sem);
 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
  VAR_14 = (struct ql4_chap_table *)VAR_8->chap_list + VAR_11;
  if (VAR_14->cookie !=
      FUNC_0(VAR_2)) {
   continue;
  }

  if (VAR_14->flags & VAR_1)
   continue;

  if (!(VAR_14->flags & VAR_0))
   continue;

  FUNC_5(VAR_10, VAR_14->secret, VAR_7);
  FUNC_5(VAR_9, VAR_14->name, VAR_6);
  VAR_12 = 0;
  break;
 }
 FUNC_3(&VAR_8->chap_sem);

 return VAR_12;
}
