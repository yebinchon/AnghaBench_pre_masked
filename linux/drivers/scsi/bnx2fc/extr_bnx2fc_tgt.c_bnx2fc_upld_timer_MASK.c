
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct bnx2fc_rport {int upld_wait; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2fc_rport*,char*) ;
 int FUNC_1 (int ,int *) ;
 struct bnx2fc_rport* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int ,int *) ;
 struct bnx2fc_rport* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{

 struct bnx2fc_rport *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);

 FUNC_0(VAR_6, "upld_timer - Upload compl not received!!\n");

 FUNC_1(VAR_1, &VAR_6->flags);
 FUNC_1(VAR_0, &VAR_6->flags);
 FUNC_3(VAR_2, &VAR_6->flags);
 FUNC_4(&VAR_6->upld_wait);
}
