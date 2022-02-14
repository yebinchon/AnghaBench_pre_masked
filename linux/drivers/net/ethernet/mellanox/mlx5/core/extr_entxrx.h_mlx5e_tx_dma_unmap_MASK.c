
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_sq_dma {int type; int size; int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct device *VAR_1, struct mlx5e_sq_dma *VAR_2)
{
 switch (VAR_2->type) {
 case 128:
  FUNC_2(VAR_1, VAR_2->addr, VAR_2->size, VAR_0);
  break;
 case 129:
  FUNC_1(VAR_1, VAR_2->addr, VAR_2->size, VAR_0);
  break;
 default:
  FUNC_0(1, "mlx5e_tx_dma_unmap unknown DMA type!\n");
 }
}
