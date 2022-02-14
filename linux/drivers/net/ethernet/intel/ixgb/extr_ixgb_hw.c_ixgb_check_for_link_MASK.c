
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int link_up; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ixgb_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (struct ixgb_hw*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct ixgb_hw *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 FUNC_0();

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 VAR_5 = FUNC_1(VAR_4, VAR_2);

 if ((VAR_6 & VAR_1) &&
     (VAR_5 & VAR_0)) {
  VAR_4->link_up = 1;
 } else if (!(VAR_6 & VAR_1) &&
     (VAR_5 & VAR_0)) {
  FUNC_3("XPCSS Not Aligned while Status:LU is set\n");
  VAR_4->link_up = FUNC_2(VAR_4);
 } else {




  VAR_4->link_up = FUNC_2(VAR_4);
 }

}
