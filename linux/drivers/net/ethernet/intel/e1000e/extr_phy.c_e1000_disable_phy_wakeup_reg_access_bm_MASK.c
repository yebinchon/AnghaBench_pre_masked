
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (char*,...) ;

s32 FUNC_3(struct e1000_hw *VAR_3, u16 *VAR_4)
{
 s32 VAR_5;


 VAR_5 = FUNC_0(VAR_3, (VAR_0 << VAR_2));
 if (VAR_5) {
  FUNC_2("Could not set Port Control page\n");
  return VAR_5;
 }


 VAR_5 = FUNC_1(VAR_3, VAR_1, *VAR_4);
 if (VAR_5)
  FUNC_2("Could not restore PHY register %d.%d\n",
        VAR_0, VAR_1);

 return VAR_5;
}
