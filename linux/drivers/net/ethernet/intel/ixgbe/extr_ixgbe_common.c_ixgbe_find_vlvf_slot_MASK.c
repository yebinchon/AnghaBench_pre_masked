
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_3, u32 VAR_4, bool VAR_5)
{
 s32 VAR_6, VAR_7;
 u32 VAR_8;


 if (VAR_4 == 0)
  return 0;





 VAR_7 = VAR_5 ? VAR_0 : 0;


 VAR_4 |= VAR_2;






 for (VAR_6 = VAR_1; --VAR_6;) {
  VAR_8 = FUNC_0(VAR_3, FUNC_1(VAR_6));
  if (VAR_8 == VAR_4)
   return VAR_6;
  if (!VAR_7 && !VAR_8)
   VAR_7 = VAR_6;
 }




 if (!VAR_7)
  FUNC_2(VAR_3, "No space in VLVF.\n");

 return VAR_7 ? : VAR_0;
}
