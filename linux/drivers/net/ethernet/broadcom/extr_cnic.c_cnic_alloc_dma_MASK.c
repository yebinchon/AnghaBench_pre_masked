
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_local {int (* setup_pgtbl ) (struct cnic_dev*,struct cnic_dma*) ;} ;
struct cnic_dma {int num_pages; int pgtbl_size; int * pgtbl; int pgtbl_map; int ** pg_arr; int * pg_map_arr; } ;
struct cnic_dev {TYPE_1__* pcidev; struct cnic_local* cnic_priv; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cnic_dev*,struct cnic_dma*) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int ** FUNC_2 (int,int ) ;
 int FUNC_3 (struct cnic_dev*,struct cnic_dma*) ;

__attribute__((used)) static int FUNC_4(struct cnic_dev *VAR_3, struct cnic_dma *VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct cnic_local *VAR_9 = VAR_3->cnic_priv;

 VAR_8 = VAR_5 * (sizeof(void *) + sizeof(dma_addr_t));
 VAR_4->pg_arr = FUNC_2(VAR_8, VAR_2);
 if (VAR_4->pg_arr == ((void*)0))
  return -VAR_1;

 VAR_4->pg_map_arr = (dma_addr_t *) (VAR_4->pg_arr + VAR_5);
 VAR_4->num_pages = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4->pg_arr[VAR_7] = FUNC_1(&VAR_3->pcidev->dev,
          VAR_0,
          &VAR_4->pg_map_arr[VAR_7],
          VAR_2);
  if (VAR_4->pg_arr[VAR_7] == ((void*)0))
   goto error;
 }
 if (!VAR_6)
  return 0;

 VAR_4->pgtbl_size = ((VAR_5 * 8) + VAR_0 - 1) &
     ~(VAR_0 - 1);
 VAR_4->pgtbl = FUNC_1(&VAR_3->pcidev->dev, VAR_4->pgtbl_size,
     &VAR_4->pgtbl_map, VAR_2);
 if (VAR_4->pgtbl == ((void*)0))
  goto error;

 VAR_9->setup_pgtbl(VAR_3, VAR_4);

 return 0;

error:
 FUNC_0(VAR_3, VAR_4);
 return -VAR_1;
}
