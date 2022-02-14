
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_desc {int dummy; } ;
struct xgbe_ring_data {int dummy; } ;
struct xgbe_ring {unsigned int rdesc_count; int node; int rdata; int rdesc_dma; int rdesc; } ;
struct xgbe_prv_data {int netdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*,int ,int *,int ,int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_2,
     struct xgbe_ring *VAR_3, unsigned int VAR_4)
{
 size_t VAR_5;

 if (!VAR_3)
  return 0;


 VAR_5 = VAR_4 * sizeof(struct xgbe_ring_desc);

 VAR_3->rdesc_count = VAR_4;
 VAR_3->rdesc = FUNC_2(VAR_2->dev, VAR_5, &VAR_3->rdesc_dma,
       VAR_3->node);
 if (!VAR_3->rdesc)
  return -VAR_0;


 VAR_5 = VAR_4 * sizeof(struct xgbe_ring_data);

 VAR_3->rdata = FUNC_1(VAR_5, VAR_3->node);
 if (!VAR_3->rdata)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_1, VAR_2->netdev,
    "rdesc=%p, rdesc_dma=%pad, rdata=%p, node=%d\n",
    VAR_3->rdesc, &VAR_3->rdesc_dma, VAR_3->rdata, VAR_3->node);

 return 0;
}
