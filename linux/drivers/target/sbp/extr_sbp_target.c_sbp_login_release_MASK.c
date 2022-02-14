
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_session {int lock; } ;
struct sbp_login_descriptor {int link; int tgt_agt; struct sbp_session* sess; } ;


 int FUNC_0 (struct sbp_login_descriptor*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sbp_session*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sbp_login_descriptor *VAR_0,
 bool VAR_1)
{
 struct sbp_session *VAR_2 = VAR_0->sess;



 FUNC_3(VAR_0->tgt_agt);

 if (VAR_2) {
  FUNC_4(&VAR_2->lock);
  FUNC_1(&VAR_0->link);
  FUNC_5(&VAR_2->lock);

  FUNC_2(VAR_2, VAR_1);
 }

 FUNC_0(VAR_0);
}
