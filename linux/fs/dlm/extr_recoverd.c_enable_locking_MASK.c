
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dlm_ls {scalar_t__ ls_recover_seq; int ls_recv_active; int ls_recover_lock; int ls_flags; int ls_in_recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dlm_ls *VAR_3, uint64_t VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_1(&VAR_3->ls_recv_active);

 FUNC_3(&VAR_3->ls_recover_lock);
 if (VAR_3->ls_recover_seq == VAR_4) {
  FUNC_2(VAR_2, &VAR_3->ls_flags);

  FUNC_5(&VAR_3->ls_in_recovery);
  FUNC_0(VAR_1, &VAR_3->ls_flags);
  VAR_5 = 0;
 }
 FUNC_4(&VAR_3->ls_recover_lock);

 FUNC_5(&VAR_3->ls_recv_active);
 return VAR_5;
}
