
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct xge_pdata {TYPE_1__* pdev; } ;
struct xge_desc_ring {struct xge_desc_ring* pkt_info; int dma_addr; scalar_t__ desc_addr; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int,scalar_t__,int ) ;
 int FUNC_1 (struct xge_desc_ring*) ;
 struct xge_pdata* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
     struct xge_desc_ring *VAR_3)
{
 struct xge_pdata *VAR_4 = FUNC_2(VAR_2);
 struct device *VAR_5 = &VAR_4->pdev->dev;
 u16 VAR_6;

 if (!VAR_3)
  return;

 VAR_6 = VAR_0 * VAR_1;
 if (VAR_3->desc_addr)
  FUNC_0(VAR_5, VAR_6, VAR_3->desc_addr, VAR_3->dma_addr);

 FUNC_1(VAR_3->pkt_info);
 FUNC_1(VAR_3);
}
