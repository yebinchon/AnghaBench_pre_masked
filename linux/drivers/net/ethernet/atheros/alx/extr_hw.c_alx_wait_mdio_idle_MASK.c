
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alx_hw*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct alx_hw *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  if (!(VAR_5 & VAR_1))
   return 0;
  FUNC_1(10);
 }

 return -VAR_3;
}
