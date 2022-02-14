
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gntdev_grant_map {TYPE_1__* unmap_ops; int count; int index; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (struct gntdev_grant_map*,int,int) ;
 int FUNC_1 (char*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct gntdev_grant_map *VAR_0, int VAR_1,
        int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_1("unmap %d+%d [%d+%d]\n", VAR_0->index, VAR_0->count, VAR_1, VAR_2);




 while (VAR_2 && !VAR_4) {
  while (VAR_2 && VAR_0->unmap_ops[VAR_1].handle == -1) {
   VAR_1++;
   VAR_2--;
  }
  VAR_3 = 0;
  while (VAR_3 < VAR_2) {
   if (VAR_0->unmap_ops[VAR_1+VAR_3].handle == -1)
    break;
   VAR_3++;
  }
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }

 return VAR_4;
}
