
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bfad_s {TYPE_1__* pcidev; } ;
struct bfad_buf_info {int phys; int * virt; int size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct bfad_buf_info*) ;

void
FUNC_2(struct bfad_s *VAR_0, struct bfad_buf_info *VAR_1,
     uint32_t VAR_2)
{
 int VAR_3;
 struct bfad_buf_info *VAR_4 = VAR_1;

 if (VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_4++, VAR_3++) {
   if (VAR_4->virt != ((void*)0))
    FUNC_0(&VAR_0->pcidev->dev,
     VAR_4->size, VAR_4->virt,
     VAR_4->phys);
  }
  FUNC_1(VAR_1);
 }
}
