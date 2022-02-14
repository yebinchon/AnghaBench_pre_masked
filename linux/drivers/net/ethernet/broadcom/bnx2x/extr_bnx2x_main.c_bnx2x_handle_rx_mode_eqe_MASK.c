
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dev; int sp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,int) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_4)
{
 FUNC_3(VAR_4->dev);

 FUNC_2(VAR_2, &VAR_4->sp_state);


 if (FUNC_5(VAR_3, &VAR_4->sp_state))
  FUNC_1(VAR_4);
 else if (FUNC_5(VAR_0,
        &VAR_4->sp_state))
  FUNC_0(VAR_4, 1);
 else if (FUNC_5(VAR_1,
        &VAR_4->sp_state))
  FUNC_0(VAR_4, 0);

 FUNC_4(VAR_4->dev);
}
