
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct xdp_umem {size_t npgs; TYPE_2__* pages; } ;
struct mlx5e_priv {TYPE_1__* mdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ dma; } ;
struct TYPE_3__ {struct device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_2,
     struct xdp_umem *VAR_3)
{
 struct device *VAR_4 = VAR_2->mdev->device;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->npgs; VAR_5++) {
  FUNC_0(VAR_4, VAR_3->pages[VAR_5].dma, VAR_1,
          VAR_0);
  VAR_3->pages[VAR_5].dma = 0;
 }
}
