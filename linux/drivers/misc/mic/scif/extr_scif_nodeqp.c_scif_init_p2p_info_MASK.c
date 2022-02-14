
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct scif_p2p_info {int* sg_nentries; int* ppi_len; void** ppi_sg; int ppi_peer_id; void** ppi_da; } ;
struct scif_hw_dev {int dev; TYPE_2__* aper; TYPE_1__* mmio; } ;
struct scif_dev {int node; struct scif_hw_dev* sdev; } ;
struct TYPE_4__ {int len; int pa; } ;
struct TYPE_3__ {int len; int pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,void*,int,int ) ;
 int FUNC_1 (int *,void*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scif_p2p_info*) ;
 struct scif_p2p_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ,int,int) ;
 void* FUNC_8 (void*) ;

__attribute__((used)) static struct scif_p2p_info *
FUNC_9(struct scif_dev *VAR_7, struct scif_dev *VAR_8)
{
 struct scif_p2p_info *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct scif_hw_dev *VAR_15 = VAR_8->sdev;
 struct scif_hw_dev *VAR_16 = VAR_7->sdev;

 VAR_10 = VAR_15->mmio->len >> VAR_2;
 VAR_11 = VAR_15->aper->len >> VAR_2;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return ((void*)0);
 VAR_9->ppi_sg[VAR_6] = FUNC_7(VAR_15->mmio->pa,
          VAR_3, VAR_10);
 if (!VAR_9->ppi_sg[VAR_6])
  goto free_p2p;
 VAR_9->sg_nentries[VAR_6] = VAR_10;
 VAR_12 = FUNC_2(FUNC_5(VAR_15->aper->len, (u64)(1 << 30)));
 VAR_14 = VAR_11 >> (VAR_12 - VAR_2);
 VAR_9->ppi_sg[VAR_5] = FUNC_7(VAR_15->aper->pa,
          1 << VAR_12,
          VAR_14);
 VAR_9->sg_nentries[VAR_5] = VAR_14;
 VAR_13 = FUNC_0(&VAR_16->dev, VAR_9->ppi_sg[VAR_6],
    VAR_10, VAR_4);
 if (VAR_13 != VAR_10)
  goto scif_p2p_free;
 VAR_13 = FUNC_0(&VAR_16->dev, VAR_9->ppi_sg[VAR_5],
    VAR_14, VAR_4);
 if (VAR_13 != VAR_14)
  goto dma_unmap;
 VAR_9->ppi_da[VAR_6] = FUNC_8(VAR_9->ppi_sg[VAR_6]);
 VAR_9->ppi_da[VAR_5] = FUNC_8(VAR_9->ppi_sg[VAR_5]);
 VAR_9->ppi_len[VAR_6] = VAR_10;
 VAR_9->ppi_len[VAR_5] = VAR_11;
 VAR_9->ppi_peer_id = VAR_8->node;
 return VAR_9;
dma_unmap:
 FUNC_1(&VAR_16->dev, VAR_9->ppi_sg[VAR_6],
       VAR_9->sg_nentries[VAR_6], VAR_0);
scif_p2p_free:
 FUNC_6(VAR_9->ppi_sg[VAR_6]);
 FUNC_6(VAR_9->ppi_sg[VAR_5]);
free_p2p:
 FUNC_3(VAR_9);
 return ((void*)0);
}
