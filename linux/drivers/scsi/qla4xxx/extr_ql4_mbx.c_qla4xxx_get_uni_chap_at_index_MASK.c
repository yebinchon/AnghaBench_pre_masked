
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
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

int FUNC_6(struct scsi_qla_host *VAR_8, char *VAR_9,
      char *VAR_10, uint16_t VAR_11)
{
 int VAR_12 = VAR_6;
 struct ql4_chap_table *VAR_13 = ((void*)0);
 int VAR_14;

 if (!VAR_8->chap_list) {
  FUNC_4(VAR_2, VAR_8, "Do not have CHAP table cache\n");
  VAR_12 = VAR_6;
  goto exit_uni_chap;
 }

 if (!VAR_9 || !VAR_10) {
  FUNC_4(VAR_2, VAR_8, "No memory for username & secret\n");
  VAR_12 = VAR_6;
  goto exit_uni_chap;
 }

 if (FUNC_1(VAR_8))
  VAR_14 = (VAR_8->hw.flt_chap_size / 2) /
       sizeof(struct ql4_chap_table);
 else
  VAR_14 = VAR_3;

 if (VAR_11 > VAR_14) {
  FUNC_4(VAR_2, VAR_8, "Invalid Chap index\n");
  VAR_12 = VAR_6;
  goto exit_uni_chap;
 }

 FUNC_2(&VAR_8->chap_sem);
 VAR_13 = (struct ql4_chap_table *)VAR_8->chap_list + VAR_11;
 if (VAR_13->cookie != FUNC_0(VAR_1)) {
  VAR_12 = VAR_6;
  goto exit_unlock_uni_chap;
 }

 if (!(VAR_13->flags & VAR_0)) {
  FUNC_4(VAR_2, VAR_8, "Unidirectional entry not set\n");
  VAR_12 = VAR_6;
  goto exit_unlock_uni_chap;
 }

 FUNC_5(VAR_10, VAR_13->secret, VAR_5);
 FUNC_5(VAR_9, VAR_13->name, VAR_4);

 VAR_12 = VAR_7;

exit_unlock_uni_chap:
 FUNC_3(&VAR_8->chap_sem);
exit_uni_chap:
 return VAR_12;
}
