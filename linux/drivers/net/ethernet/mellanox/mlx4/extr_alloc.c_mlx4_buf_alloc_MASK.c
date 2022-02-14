
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_dev {TYPE_3__* persist; } ;
struct TYPE_5__ {int * buf; } ;
struct mlx4_buf {int nbufs; int npages; TYPE_4__* page_list; int page_shift; TYPE_1__ direct; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int map; int buf; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 TYPE_4__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct mlx4_dev*,int,struct mlx4_buf*) ;
 int FUNC_4 (struct mlx4_dev*,int,struct mlx4_buf*) ;

int FUNC_5(struct mlx4_dev *VAR_4, int VAR_5, int VAR_6,
     struct mlx4_buf *VAR_7)
{
 if (VAR_5 <= VAR_6) {
  return FUNC_3(VAR_4, VAR_5, VAR_7);
 } else {
  dma_addr_t VAR_8;
  int VAR_9;

  VAR_7->direct.buf = ((void*)0);
  VAR_7->nbufs = FUNC_0(VAR_5, VAR_3);
  VAR_7->npages = VAR_7->nbufs;
  VAR_7->page_shift = VAR_2;
  VAR_7->page_list = FUNC_2(VAR_7->nbufs, sizeof(*VAR_7->page_list),
        VAR_1);
  if (!VAR_7->page_list)
   return -VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_7->nbufs; ++VAR_9) {
   VAR_7->page_list[VAR_9].buf =
    FUNC_1(&VAR_4->persist->pdev->dev,
         VAR_3, &VAR_8, VAR_1);
   if (!VAR_7->page_list[VAR_9].buf)
    goto err_free;

   VAR_7->page_list[VAR_9].map = VAR_8;
  }
 }

 return 0;

err_free:
 FUNC_4(VAR_4, VAR_5, VAR_7);

 return -VAR_0;
}
