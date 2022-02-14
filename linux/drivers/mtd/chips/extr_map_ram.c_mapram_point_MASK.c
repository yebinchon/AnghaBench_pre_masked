
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {int phys; void* virt; } ;
typedef int resource_size_t ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
   size_t *VAR_4, void **VAR_5, resource_size_t *VAR_6)
{
 struct map_info *VAR_7 = VAR_1->priv;

 if (!VAR_7->virt)
  return -VAR_0;
 *VAR_5 = VAR_7->virt + VAR_2;
 if (VAR_6)
  *VAR_6 = VAR_7->phys + VAR_2;
 *VAR_4 = VAR_3;
 return 0;
}
