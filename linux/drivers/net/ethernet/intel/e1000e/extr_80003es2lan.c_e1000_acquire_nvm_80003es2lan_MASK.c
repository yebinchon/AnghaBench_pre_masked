
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ) ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1)
{
 s32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2)
  FUNC_1(VAR_1, VAR_0);

 return VAR_2;
}
