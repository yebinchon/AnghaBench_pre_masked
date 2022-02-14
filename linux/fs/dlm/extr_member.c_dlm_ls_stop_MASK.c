
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {scalar_t__ ls_recover_begin; int ls_recover_lock; scalar_t__ ls_recover_status; scalar_t__ ls_slots_size; scalar_t__ ls_num_slots; int * ls_slots; int ls_flags; int ls_recover_lock_wait; int ls_recoverd_task; int ls_recv_active; int ls_recover_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct dlm_ls *VAR_5)
{
 int VAR_6;
 FUNC_3(&VAR_5->ls_recv_active);







 FUNC_6(&VAR_5->ls_recover_lock);
 FUNC_5(VAR_2, &VAR_5->ls_flags);
 VAR_6 = FUNC_8(VAR_3, &VAR_5->ls_flags);
 VAR_5->ls_recover_seq++;
 FUNC_7(&VAR_5->ls_recover_lock);






 FUNC_10(&VAR_5->ls_recv_active);
 if (VAR_6) {
  FUNC_5(VAR_0, &VAR_5->ls_flags);
  FUNC_12(VAR_5->ls_recoverd_task);
  FUNC_11(VAR_5->ls_recover_lock_wait,
      FUNC_9(VAR_1, &VAR_5->ls_flags));
 }







 FUNC_2(VAR_5);

 FUNC_6(&VAR_5->ls_recover_lock);
 FUNC_4(VAR_5->ls_slots);
 VAR_5->ls_slots = ((void*)0);
 VAR_5->ls_num_slots = 0;
 VAR_5->ls_slots_size = 0;
 VAR_5->ls_recover_status = 0;
 FUNC_7(&VAR_5->ls_recover_lock);

 FUNC_1(VAR_5);

 if (!VAR_5->ls_recover_begin)
  VAR_5->ls_recover_begin = VAR_4;

 FUNC_0(VAR_5);
 return 0;
}
