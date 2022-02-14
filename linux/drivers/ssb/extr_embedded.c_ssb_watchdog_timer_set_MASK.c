
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_bus {int extif; int chipco; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct ssb_bus *VAR_1, u32 VAR_2)
{
 if (FUNC_0(&VAR_1->chipco)) {
  FUNC_1(&VAR_1->chipco, VAR_2);
  return 0;
 }
 if (FUNC_2(&VAR_1->extif)) {
  FUNC_3(&VAR_1->extif, VAR_2);
  return 0;
 }
 return -VAR_0;
}
