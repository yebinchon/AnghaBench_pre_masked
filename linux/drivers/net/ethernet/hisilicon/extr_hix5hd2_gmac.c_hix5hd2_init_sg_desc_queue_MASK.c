
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_desc {int dummy; } ;
struct TYPE_2__ {int phys_addr; struct sg_desc* desc; } ;
struct hix5hd2_priv {TYPE_1__ tx_ring; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct hix5hd2_priv *VAR_3)
{
 struct sg_desc *VAR_4;
 dma_addr_t VAR_5;

 VAR_4 = (struct sg_desc *)FUNC_0(VAR_3->dev,
    VAR_2 * sizeof(struct sg_desc),
    &VAR_5, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->tx_ring.desc = VAR_4;
 VAR_3->tx_ring.phys_addr = VAR_5;

 return 0;
}
