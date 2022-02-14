
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_rx_desc {struct vnt_rd_info* rd_info; } ;
struct vnt_rd_info {int skb; int skb_dma; } ;
struct vnt_private {int rx_buf_sz; TYPE_1__* pcid; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vnt_private *VAR_1,
          struct vnt_rx_desc *VAR_2)
{
 struct vnt_rd_info *VAR_3 = VAR_2->rd_info;

 FUNC_1(&VAR_1->pcid->dev, VAR_3->skb_dma,
    VAR_1->rx_buf_sz, VAR_0);
 FUNC_0(VAR_3->skb);
}
