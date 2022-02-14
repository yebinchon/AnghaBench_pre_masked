
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_2);
 do {
  VAR_5 |= VAR_1;
  FUNC_3(VAR_2, VAR_5);
  VAR_5 = FUNC_2(VAR_2);

  if (VAR_5 & VAR_1)
   break;

  FUNC_4(2000, 4000);
  VAR_6++;
 } while (VAR_6 < VAR_3);

 if (VAR_6 == VAR_3) {

  FUNC_0(VAR_4);
  FUNC_1("Driver can't access the PHY\n");
  return -VAR_0;
 }

 return 0;
}
