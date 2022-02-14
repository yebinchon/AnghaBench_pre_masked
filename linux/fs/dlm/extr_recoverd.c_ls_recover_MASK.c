
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_recover {scalar_t__ seq; } ;
struct dlm_ls {unsigned long long ls_recover_dir_sent_res; int ls_recover_dir_sent_msg; int ls_recoverd_active; int ls_generation; scalar_t__ ls_recover_locks_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*) ;
 int FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 (struct dlm_ls*) ;
 int FUNC_6 (struct dlm_ls*) ;
 scalar_t__ FUNC_7 (struct dlm_ls*) ;
 int FUNC_8 (struct dlm_ls*) ;
 int FUNC_9 (struct dlm_ls*) ;
 int FUNC_10 (struct dlm_ls*) ;
 int FUNC_11 (struct dlm_ls*) ;
 int FUNC_12 (struct dlm_ls*) ;
 int FUNC_13 (struct dlm_ls*) ;
 int FUNC_14 (struct dlm_ls*) ;
 int FUNC_15 (struct dlm_ls*) ;
 int FUNC_16 (struct dlm_ls*) ;
 int FUNC_17 (struct dlm_ls*) ;
 int FUNC_18 (struct dlm_ls*,struct dlm_recover*,int*) ;
 int FUNC_19 (struct dlm_ls*) ;
 int FUNC_20 (struct dlm_ls*) ;
 int FUNC_21 (struct dlm_ls*) ;
 int FUNC_22 (struct dlm_ls*) ;
 int FUNC_23 (struct dlm_ls*) ;
 int FUNC_24 (struct dlm_ls*) ;
 int FUNC_25 (struct dlm_ls*) ;
 int FUNC_26 (struct dlm_ls*,int ) ;
 int FUNC_27 (struct dlm_ls*,scalar_t__) ;
 unsigned long VAR_4 ;
 int FUNC_28 (unsigned long) ;
 int FUNC_29 (struct dlm_ls*,char*,unsigned long long,...) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;

__attribute__((used)) static int FUNC_32(struct dlm_ls *VAR_5, struct dlm_recover *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_29(VAR_5, "dlm_recover %llu", (unsigned long long)VAR_6->seq);

 FUNC_30(&VAR_5->ls_recoverd_active);

 FUNC_2(VAR_5);

 FUNC_4(VAR_5);






 FUNC_5(VAR_5);





 VAR_8 = FUNC_18(VAR_5, VAR_6, &VAR_9);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_recover_members error %d", VAR_8);
  goto fail;
 }

 FUNC_10(VAR_5);

 VAR_5->ls_recover_dir_sent_res = 0;
 VAR_5->ls_recover_dir_sent_msg = 0;
 VAR_5->ls_recover_locks_in = 0;

 FUNC_26(VAR_5, VAR_3);

 VAR_8 = FUNC_19(VAR_5);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_recover_members_wait error %d", VAR_8);
  goto fail;
 }

 VAR_7 = VAR_4;






 VAR_8 = FUNC_11(VAR_5);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_recover_directory error %d", VAR_8);
  goto fail;
 }

 FUNC_26(VAR_5, VAR_0);

 VAR_8 = FUNC_12(VAR_5);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_recover_directory_wait error %d", VAR_8);
  goto fail;
 }

 FUNC_29(VAR_5, "dlm_recover_directory %u out %u messages",
    VAR_5->ls_recover_dir_sent_res, VAR_5->ls_recover_dir_sent_msg);







 FUNC_23(VAR_5);

 VAR_8 = FUNC_24(VAR_5);
 if (VAR_8)
  goto fail;

 if (VAR_9 || FUNC_7(VAR_5)) {




  FUNC_20(VAR_5);






  VAR_8 = FUNC_17(VAR_5);
  if (VAR_8) {
   FUNC_29(VAR_5, "dlm_recover_masters error %d", VAR_8);
   goto fail;
  }





  VAR_8 = FUNC_15(VAR_5);
  if (VAR_8) {
   FUNC_29(VAR_5, "dlm_recover_locks error %d", VAR_8);
   goto fail;
  }

  FUNC_26(VAR_5, VAR_2);

  VAR_8 = FUNC_16(VAR_5);
  if (VAR_8) {
   FUNC_29(VAR_5, "dlm_recover_locks_wait error %d", VAR_8);
   goto fail;
  }

  FUNC_29(VAR_5, "dlm_recover_locks %u in",
     VAR_5->ls_recover_locks_in);







  FUNC_21(VAR_5);
 } else {





  FUNC_26(VAR_5, VAR_2);

  VAR_8 = FUNC_16(VAR_5);
  if (VAR_8) {
   FUNC_29(VAR_5, "dlm_recover_locks_wait error %d", VAR_8);
   goto fail;
  }
 }

 FUNC_25(VAR_5);







 FUNC_9(VAR_5);

 FUNC_26(VAR_5, VAR_1);

 VAR_8 = FUNC_13(VAR_5);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_recover_done_wait error %d", VAR_8);
  goto fail;
 }

 FUNC_3(VAR_5);

 FUNC_0(VAR_5);

 FUNC_1(VAR_5);

 VAR_8 = FUNC_27(VAR_5, VAR_6->seq);
 if (VAR_8) {
  FUNC_29(VAR_5, "enable_locking error %d", VAR_8);
  goto fail;
 }

 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_process_requestqueue error %d", VAR_8);
  goto fail;
 }

 VAR_8 = FUNC_22(VAR_5);
 if (VAR_8) {
  FUNC_29(VAR_5, "dlm_recover_waiters_post error %d", VAR_8);
  goto fail;
 }

 FUNC_14(VAR_5);

 FUNC_29(VAR_5, "dlm_recover %llu generation %u done: %u ms",
    (unsigned long long)VAR_6->seq, VAR_5->ls_generation,
    FUNC_28(VAR_4 - VAR_7));
 FUNC_31(&VAR_5->ls_recoverd_active);

 FUNC_6(VAR_5);
 return 0;

 fail:
 FUNC_25(VAR_5);
 FUNC_29(VAR_5, "dlm_recover %llu error %d",
    (unsigned long long)VAR_6->seq, VAR_8);
 FUNC_31(&VAR_5->ls_recoverd_active);
 return VAR_8;
}
