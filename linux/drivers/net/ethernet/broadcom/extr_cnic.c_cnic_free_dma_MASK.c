
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_dma {int num_pages; int ** pg_arr; int * pgtbl; int pgtbl_map; int pgtbl_size; int * pg_map_arr; } ;
struct cnic_dev {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_1, struct cnic_dma *VAR_2)
{
 int VAR_3;

 if (!VAR_2->pg_arr)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_pages; VAR_3++) {
  if (VAR_2->pg_arr[VAR_3]) {
   FUNC_0(&VAR_1->pcidev->dev, VAR_0,
       VAR_2->pg_arr[VAR_3], VAR_2->pg_map_arr[VAR_3]);
   VAR_2->pg_arr[VAR_3] = ((void*)0);
  }
 }
 if (VAR_2->pgtbl) {
  FUNC_0(&VAR_1->pcidev->dev, VAR_2->pgtbl_size,
      VAR_2->pgtbl, VAR_2->pgtbl_map);
  VAR_2->pgtbl = ((void*)0);
 }
 FUNC_1(VAR_2->pg_arr);
 VAR_2->pg_arr = ((void*)0);
 VAR_2->num_pages = 0;
}
