
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_10, u16 *VAR_11,
         u16 *VAR_12)
{
 s32 VAR_13;

 VAR_13 = FUNC_0(VAR_9);
 if (VAR_13 & VAR_2)
  *VAR_11 = VAR_8;
 else if (VAR_13 & VAR_1)
  *VAR_11 = VAR_7;
 else
  *VAR_11 = VAR_6;

 if (VAR_13 & VAR_0)
  *VAR_12 = VAR_4;
 else
  *VAR_12 = VAR_5;

 return VAR_3;
}
