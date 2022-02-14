
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_dev {TYPE_2__* persist; } ;
struct TYPE_6__ {int map; int buf; } ;
struct mlx4_buf {int nbufs; int npages; int page_shift; TYPE_3__ direct; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_3, int VAR_4,
     struct mlx4_buf *VAR_5)
{
 dma_addr_t VAR_6;

 VAR_5->nbufs = 1;
 VAR_5->npages = 1;
 VAR_5->page_shift = FUNC_1(VAR_4) + VAR_2;
 VAR_5->direct.buf =
  FUNC_0(&VAR_3->persist->pdev->dev, VAR_4, &VAR_6,
       VAR_1);
 if (!VAR_5->direct.buf)
  return -VAR_0;

 VAR_5->direct.map = VAR_6;

 while (VAR_6 & ((1 << VAR_5->page_shift) - 1)) {
  --VAR_5->page_shift;
  VAR_5->npages *= 2;
 }

 return 0;
}
