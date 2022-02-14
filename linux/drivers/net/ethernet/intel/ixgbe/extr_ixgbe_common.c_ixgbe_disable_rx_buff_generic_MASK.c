
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5)
{

 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 VAR_7 |= VAR_2;
 FUNC_1(VAR_5, VAR_1, VAR_7);
 for (VAR_6 = 0; VAR_6 < 40; VAR_6++) {
  VAR_7 = FUNC_0(VAR_5, VAR_3);
  if (VAR_7 & VAR_4)
   break;
  else

   FUNC_3(1000);
 }


 if (VAR_6 >= 40)
  FUNC_2(VAR_5, "Rx unit being enabled before security path fully disabled. Continuing with init.\n");

 return 0;

}
