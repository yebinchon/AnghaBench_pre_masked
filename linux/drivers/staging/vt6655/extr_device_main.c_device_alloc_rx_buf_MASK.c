
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* req_count; } ;
struct TYPE_5__ {int owner; void* res_count; } ;
struct vnt_rx_desc {int buff_addr; TYPE_3__ rd1; TYPE_2__ rd0; struct vnt_rd_info* rd_info; } ;
struct vnt_rd_info {int skb_dma; int * skb; } ;
struct vnt_private {scalar_t__ rx_buf_sz; TYPE_1__* pcid; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool FUNC_8(struct vnt_private *VAR_2,
    struct vnt_rx_desc *VAR_3)
{
 struct vnt_rd_info *VAR_4 = VAR_3->rd_info;

 VAR_4->skb = FUNC_2((int)VAR_2->rx_buf_sz);
 if (!VAR_4->skb)
  return 0;

 VAR_4->skb_dma =
  FUNC_4(&VAR_2->pcid->dev,
          FUNC_6(VAR_4->skb, FUNC_7(VAR_4->skb)),
          VAR_2->rx_buf_sz, VAR_0);
 if (FUNC_5(&VAR_2->pcid->dev, VAR_4->skb_dma)) {
  FUNC_3(VAR_4->skb);
  VAR_4->skb = ((void*)0);
  return 0;
 }

 *((unsigned int *)&VAR_3->rd0) = 0;

 VAR_3->rd0.res_count = FUNC_0(VAR_2->rx_buf_sz);
 VAR_3->rd0.owner = VAR_1;
 VAR_3->rd1.req_count = FUNC_0(VAR_2->rx_buf_sz);
 VAR_3->buff_addr = FUNC_1(VAR_4->skb_dma);

 return 1;
}
