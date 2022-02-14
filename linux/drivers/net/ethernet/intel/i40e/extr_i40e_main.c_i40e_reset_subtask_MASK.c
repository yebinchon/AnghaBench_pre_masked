
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_pf {int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i40e_pf*,int ,int) ;
 int FUNC_3 (struct i40e_pf*,int) ;
 int FUNC_4 (struct i40e_pf*,int,int) ;
 int FUNC_5 (struct i40e_pf*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct i40e_pf *VAR_8)
{
 u32 VAR_9 = 0;

 if (FUNC_6(VAR_6, VAR_8->state)) {
  VAR_9 |= FUNC_0(VAR_6);
  FUNC_1(VAR_6, VAR_8->state);
 }
 if (FUNC_6(VAR_5, VAR_8->state)) {
  VAR_9 |= FUNC_0(VAR_5);
  FUNC_1(VAR_5, VAR_8->state);
 }
 if (FUNC_6(VAR_1, VAR_8->state)) {
  VAR_9 |= FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_8->state);
 }
 if (FUNC_6(VAR_4, VAR_8->state)) {
  VAR_9 |= FUNC_0(VAR_4);
  FUNC_1(VAR_4, VAR_8->state);
 }
 if (FUNC_6(VAR_3, VAR_8->state)) {
  VAR_9 |= FUNC_0(VAR_3);
  FUNC_1(VAR_3, VAR_8->state);
 }




 if (FUNC_6(VAR_7, VAR_8->state)) {
  FUNC_3(VAR_8, 0);
  FUNC_5(VAR_8);
  FUNC_4(VAR_8, 0, 0);
 }


 if (VAR_9 &&
     !FUNC_6(VAR_2, VAR_8->state) &&
     !FUNC_6(VAR_0, VAR_8->state)) {
  FUNC_2(VAR_8, VAR_9, 0);
 }
}
