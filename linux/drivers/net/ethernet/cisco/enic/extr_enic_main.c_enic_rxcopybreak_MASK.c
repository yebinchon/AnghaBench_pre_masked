
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vnic_rq_buf {int dma_addr; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct enic {scalar_t__ rx_copybreak; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_1 (struct net_device*,scalar_t__) ;
 struct enic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_4(struct net_device *VAR_1, struct sk_buff **VAR_2,
        struct vnic_rq_buf *VAR_3, u16 VAR_4)
{
 struct enic *VAR_5 = FUNC_2(VAR_1);
 struct sk_buff *VAR_6;

 if (VAR_4 > VAR_5->rx_copybreak)
  return 0;
 VAR_6 = FUNC_1(VAR_1, VAR_4);
 if (!VAR_6)
  return 0;
 FUNC_3(VAR_5->pdev, VAR_3->dma_addr, VAR_4,
        VAR_0);
 FUNC_0(VAR_6->data, (*VAR_2)->data, VAR_4);
 *VAR_2 = VAR_6;

 return 1;
}
