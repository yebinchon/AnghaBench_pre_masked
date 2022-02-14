
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_session {scalar_t__ card; int se_sess; int maint_work; int lock; int login_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sbp_session*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sbp_session *VAR_0, bool VAR_1)
{
 FUNC_4(&VAR_0->lock);
 if (!FUNC_3(&VAR_0->login_list)) {
  FUNC_5(&VAR_0->lock);
  return;
 }
 FUNC_5(&VAR_0->lock);

 if (VAR_1)
  FUNC_0(&VAR_0->maint_work);

 FUNC_6(VAR_0->se_sess);

 if (VAR_0->card)
  FUNC_1(VAR_0->card);

 FUNC_2(VAR_0);
}
