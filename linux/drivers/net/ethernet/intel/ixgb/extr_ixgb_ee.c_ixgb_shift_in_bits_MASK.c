
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgb_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgb_hw*,int ) ;
 int FUNC_1 (struct ixgb_hw*,int*) ;
 int FUNC_2 (struct ixgb_hw*,int*) ;

__attribute__((used)) static u16
FUNC_3(struct ixgb_hw *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 VAR_4 = FUNC_0(VAR_3, VAR_0);

 VAR_4 &= ~(VAR_2 | VAR_1);
 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  VAR_6 = VAR_6 << 1;
  FUNC_2(VAR_3, &VAR_4);

  VAR_4 = FUNC_0(VAR_3, VAR_0);

  VAR_4 &= ~(VAR_1);
  if (VAR_4 & VAR_2)
   VAR_6 |= 1;

  FUNC_1(VAR_3, &VAR_4);
 }

 return VAR_6;
}
