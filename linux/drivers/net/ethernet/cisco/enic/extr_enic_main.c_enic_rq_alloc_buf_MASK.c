
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_rq_buf {unsigned int len; int dma_addr; struct sk_buff* os_buf; } ;
struct vnic_rq {struct vnic_rq_buf* to_use; int vdev; } ;
struct sk_buff {int data; } ;
struct net_device {unsigned int mtu; } ;
struct enic {int pdev; struct net_device* netdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct enic*,int ) ;
 int FUNC_2 (struct vnic_rq*,struct sk_buff*,unsigned int,int ,unsigned int) ;
 struct sk_buff* FUNC_3 (struct net_device*,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct enic* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct vnic_rq *VAR_3)
{
 struct enic *VAR_4 = FUNC_6(VAR_3->vdev);
 struct net_device *VAR_5 = VAR_4->netdev;
 struct sk_buff *VAR_6;
 unsigned int VAR_7 = VAR_5->mtu + VAR_2;
 unsigned int VAR_8 = 0;
 dma_addr_t VAR_9;
 struct vnic_rq_buf *VAR_10 = VAR_3->to_use;

 if (VAR_10->os_buf) {
  FUNC_2(VAR_3, VAR_10->os_buf, VAR_8, VAR_10->dma_addr,
       VAR_10->len);

  return 0;
 }
 VAR_6 = FUNC_3(VAR_5, VAR_7);
 if (!VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_4->pdev, VAR_6->data, VAR_7,
      VAR_1);
 if (FUNC_5(FUNC_1(VAR_4, VAR_9))) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 FUNC_2(VAR_3, VAR_6, VAR_8,
  VAR_9, VAR_7);

 return 0;
}
