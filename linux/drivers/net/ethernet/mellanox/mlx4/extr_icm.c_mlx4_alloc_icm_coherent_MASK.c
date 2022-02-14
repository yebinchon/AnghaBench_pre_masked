
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_icm_buf {int size; int dma_addr; int addr; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int,int *,int ) ;
 int FUNC_1 (struct device*,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct mlx4_icm_buf *VAR_3,
       int VAR_4, gfp_t VAR_5)
{
 VAR_3->addr = FUNC_0(VAR_2, VAR_1 << VAR_4,
           &VAR_3->dma_addr, VAR_5);
 if (!VAR_3->addr)
  return -VAR_0;

 if (FUNC_2(VAR_3->addr)) {
  FUNC_1(VAR_2, VAR_1 << VAR_4, VAR_3->addr,
      VAR_3->dma_addr);
  return -VAR_0;
 }

 VAR_3->size = VAR_1 << VAR_4;
 return 0;
}
