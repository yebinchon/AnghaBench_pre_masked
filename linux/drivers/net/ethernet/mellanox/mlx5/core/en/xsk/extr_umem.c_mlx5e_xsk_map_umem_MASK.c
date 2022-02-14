
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct xdp_umem {size_t npgs; TYPE_1__* pages; int * pgs; } ;
struct mlx5e_priv {TYPE_2__* mdev; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {struct device* device; } ;
struct TYPE_3__ {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_3,
         struct xdp_umem *VAR_4)
{
 struct device *VAR_5 = VAR_3->mdev->device;
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->npgs; VAR_6++) {
  dma_addr_t VAR_7 = FUNC_0(VAR_5, VAR_4->pgs[VAR_6], 0, VAR_2,
           VAR_0);

  if (FUNC_3(FUNC_1(VAR_5, VAR_7)))
   goto err_unmap;
  VAR_4->pages[VAR_6].dma = VAR_7;
 }

 return 0;

err_unmap:
 while (VAR_6--) {
  FUNC_2(VAR_5, VAR_4->pages[VAR_6].dma, VAR_2,
          VAR_0);
  VAR_4->pages[VAR_6].dma = 0;
 }

 return -VAR_1;
}
