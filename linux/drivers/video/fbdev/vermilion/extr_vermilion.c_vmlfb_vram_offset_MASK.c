
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vml_info {unsigned int num_areas; unsigned long vram_start; TYPE_1__* vram; } ;
struct TYPE_2__ {unsigned long phys; unsigned long size; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vml_info *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_areas; ++VAR_4) {
  VAR_3 = VAR_2 - (VAR_1->vram[VAR_4].phys - VAR_1->vram_start);

  if (VAR_3 < VAR_1->vram[VAR_4].size) {
   return 0;
  }
 }

 return -VAR_0;
}
