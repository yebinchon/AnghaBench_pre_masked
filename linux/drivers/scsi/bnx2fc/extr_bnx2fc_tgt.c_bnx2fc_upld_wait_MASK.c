
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_rport {int upld_timer; int flags; int upld_wait; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct bnx2fc_rport *VAR_5)
{
 FUNC_5(&VAR_5->upld_timer, VAR_2, 0);
 FUNC_2(&VAR_5->upld_timer, VAR_4 + VAR_1);
 FUNC_6(VAR_5->upld_wait,
     (FUNC_4(
      VAR_0,
      &VAR_5->flags)));
 if (FUNC_3(VAR_3))
  FUNC_1(VAR_3);
 FUNC_0(&VAR_5->upld_timer);
}
