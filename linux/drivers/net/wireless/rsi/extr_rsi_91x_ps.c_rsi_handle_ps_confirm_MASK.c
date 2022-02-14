
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rsi_hw {int ps_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct rsi_hw*,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct rsi_hw *VAR_6, u8 *VAR_7)
{
 u16 VAR_8 = FUNC_0(VAR_7 + VAR_1);

 switch (VAR_8) {
 case 129:
  if (VAR_6->ps_state == VAR_4)
   FUNC_2(VAR_6, VAR_3);
  break;
 case 128:
  if (VAR_6->ps_state == VAR_2)
   FUNC_2(VAR_6, VAR_5);
  break;
 default:
  FUNC_1(VAR_0,
   "Invalid PS confirm type %x in state %s\n",
   VAR_8, FUNC_3(VAR_6->ps_state));
  return -1;
 }

 return 0;
}
