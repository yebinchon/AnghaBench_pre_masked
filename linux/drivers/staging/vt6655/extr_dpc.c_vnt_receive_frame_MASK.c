
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int res_count; } ;
struct TYPE_4__ {int req_count; } ;
struct vnt_rx_desc {TYPE_2__ rd0; TYPE_1__ rd1; struct vnt_rd_info* rd_info; } ;
struct vnt_rd_info {int skb_dma; struct sk_buff* skb; } ;
struct vnt_private {TYPE_3__* pcid; int rx_buf_sz; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vnt_private*,struct sk_buff*,int) ;

bool FUNC_5(struct vnt_private *VAR_1, struct vnt_rx_desc *VAR_2)
{
 struct vnt_rd_info *VAR_3 = VAR_2->rd_info;
 struct sk_buff *VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_3->skb;

 FUNC_2(&VAR_1->pcid->dev, VAR_3->skb_dma,
    VAR_1->rx_buf_sz, VAR_0);

 VAR_5 = FUNC_3(VAR_2->rd1.req_count)
   - FUNC_3(VAR_2->rd0.res_count);

 if ((VAR_5 > 2364) || (VAR_5 < 33)) {

  FUNC_0(&VAR_1->pcid->dev, "Wrong frame size %d\n", VAR_5);
  FUNC_1(VAR_4);
  return 1;
 }

 if (FUNC_4(VAR_1, VAR_4, VAR_5))
  return 1;

 FUNC_1(VAR_4);

 return 1;
}
