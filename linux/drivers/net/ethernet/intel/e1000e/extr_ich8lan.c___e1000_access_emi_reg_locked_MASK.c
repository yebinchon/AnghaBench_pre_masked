
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2, u16 VAR_3,
      u16 *VAR_4, bool VAR_5)
{
 s32 VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_3);
 if (VAR_6)
  return VAR_6;

 if (VAR_5)
  VAR_6 = FUNC_0(VAR_2, VAR_1, VAR_4);
 else
  VAR_6 = FUNC_1(VAR_2, VAR_1, *VAR_4);

 return VAR_6;
}
