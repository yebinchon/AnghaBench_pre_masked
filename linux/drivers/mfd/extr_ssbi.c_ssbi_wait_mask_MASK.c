
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssbi*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ssbi *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_2;
 u32 VAR_7;

 while (VAR_6--) {
  VAR_7 = FUNC_0(VAR_3, VAR_1);
  if (((VAR_7 & VAR_4) == VAR_4) && ((VAR_7 & VAR_5) == 0))
   return 0;
  FUNC_1(1);
 }

 return -VAR_0;
}
