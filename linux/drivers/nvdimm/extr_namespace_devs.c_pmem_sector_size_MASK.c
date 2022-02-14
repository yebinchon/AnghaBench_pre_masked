
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_pmem {int lbasize; } ;
struct nd_namespace_common {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct nd_namespace_pmem* FUNC_2 (int *) ;

unsigned int FUNC_3(struct nd_namespace_common *VAR_0)
{
 if (FUNC_1(&VAR_0->dev)) {
  struct nd_namespace_pmem *VAR_1;

  VAR_1 = FUNC_2(&VAR_0->dev);
  if (VAR_1->lbasize == 0 || VAR_1->lbasize == 512)
                ;
  else if (VAR_1->lbasize == 4096)
   return 4096;
  else
   FUNC_0(&VAR_0->dev, "unsupported sector size: %ld\n",
     VAR_1->lbasize);
 }





 return 512;
}
