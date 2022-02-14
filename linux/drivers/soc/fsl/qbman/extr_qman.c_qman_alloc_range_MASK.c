
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct gen_pool {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct gen_pool*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct gen_pool *VAR_3, u32 *VAR_4, u32 VAR_5)
{
 unsigned long VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6)
  return -VAR_2;

 *VAR_4 = VAR_6 & ~VAR_0;

 return 0;
}
