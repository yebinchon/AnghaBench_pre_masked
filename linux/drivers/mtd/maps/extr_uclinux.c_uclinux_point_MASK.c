
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {int phys; void* virt; } ;
typedef int resource_size_t ;
typedef int loff_t ;



__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
 size_t *VAR_3, void **VAR_4, resource_size_t *VAR_5)
{
 struct map_info *VAR_6 = VAR_0->priv;
 *VAR_4 = VAR_6->virt + VAR_1;
 if (VAR_5)
  *VAR_5 = VAR_6->phys + VAR_1;
 *VAR_3 = VAR_2;
 return(0);
}
