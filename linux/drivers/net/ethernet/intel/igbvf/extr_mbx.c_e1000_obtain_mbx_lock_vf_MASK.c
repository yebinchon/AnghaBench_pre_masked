
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_2)
{
 s32 VAR_3 = -VAR_0;
 int VAR_4 = 10;

 do {

  FUNC_2(FUNC_0(0), VAR_1);


  if (FUNC_1(VAR_2) & VAR_1) {
   VAR_3 = 0;
   break;
  }
  FUNC_3(1000);
 } while (VAR_4-- > 0);

 return VAR_3;
}
