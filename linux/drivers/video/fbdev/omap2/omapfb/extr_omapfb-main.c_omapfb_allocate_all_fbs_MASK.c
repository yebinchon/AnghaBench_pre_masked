
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vram_sizes ;
typedef int vram_paddrs ;
struct omapfb_info {struct omapfb2_mem_region* region; } ;
struct omapfb2_mem_region {int size; int vaddr; int paddr; } ;
struct omapfb2_device {int num_fbs; int * fbs; int dev; } ;


 int FUNC_0 (char*,int,int ,int ,int ) ;
 struct omapfb_info* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned long**,int ,int) ;
 int FUNC_4 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__,int,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct omapfb2_device *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned long VAR_4[10];
 unsigned long VAR_5[10];

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 if (VAR_0 && FUNC_5(VAR_0, 10,
    VAR_4, VAR_5)) {
  FUNC_2(VAR_1->dev, "failed to parse vram parameter\n");

  FUNC_3(&VAR_4, 0, sizeof(VAR_4));
  FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fbs; VAR_2++) {


  if (VAR_2 == 0 || VAR_4[VAR_2] != 0) {
   VAR_3 = FUNC_4(VAR_1->fbs[VAR_2],
     VAR_4[VAR_2], VAR_5[VAR_2]);

   if (VAR_3)
    return VAR_3;
  }
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fbs; VAR_2++) {
  struct omapfb_info *VAR_6 = FUNC_1(VAR_1->fbs[VAR_2]);
  struct omapfb2_mem_region *VAR_7;
  VAR_7 = VAR_6->region;

  FUNC_0("region%d phys %08x virt %p size=%lu\n",
    VAR_2,
    VAR_7->paddr,
    VAR_7->vaddr,
    VAR_7->size);
 }

 return 0;
}
