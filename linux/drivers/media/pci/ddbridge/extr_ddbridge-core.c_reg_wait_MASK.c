
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ddb {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ddb*,int) ;

__attribute__((used)) static int FUNC_2(struct ddb *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;

 while (FUNC_1(VAR_0, VAR_1) & VAR_2) {
  FUNC_0(10);
  if (++VAR_3 == 100)
   return -1;
 }
 return 0;
}
