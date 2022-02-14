
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int domain; } ;
struct dma_domain {struct dma_map_ops* dma_ops; int domain_nr; } ;
struct dma_map_ops {int dummy; } ;
struct vmd_dev {TYPE_2__ sysdata; struct dma_domain dma_domain; struct dma_map_ops dma_ops; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct dma_map_ops const*,struct dma_map_ops*,int ) ;
 int FUNC_1 (struct dma_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_map_ops* FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_3(struct vmd_dev *VAR_14)
{
 const struct dma_map_ops *VAR_15 = FUNC_2(&VAR_14->dev->dev);
 struct dma_map_ops *VAR_16 = &VAR_14->dma_ops;
 struct dma_domain *VAR_17 = &VAR_14->dma_domain;

 VAR_17->domain_nr = VAR_14->sysdata.domain;
 VAR_17->dma_ops = VAR_16;

 if (!VAR_15)
  return;
 FUNC_0(VAR_15, VAR_16, VAR_0);
 FUNC_0(VAR_15, VAR_16, VAR_2);
 FUNC_0(VAR_15, VAR_16, VAR_7);
 FUNC_0(VAR_15, VAR_16, VAR_4);
 FUNC_0(VAR_15, VAR_16, VAR_5);
 FUNC_0(VAR_15, VAR_16, VAR_12);
 FUNC_0(VAR_15, VAR_16, VAR_6);
 FUNC_0(VAR_15, VAR_16, VAR_13);
 FUNC_0(VAR_15, VAR_16, VAR_10);
 FUNC_0(VAR_15, VAR_16, VAR_11);
 FUNC_0(VAR_15, VAR_16, VAR_8);
 FUNC_0(VAR_15, VAR_16, VAR_9);
 FUNC_0(VAR_15, VAR_16, VAR_1);
 FUNC_0(VAR_15, VAR_16, VAR_3);
 FUNC_1(VAR_17);
}
