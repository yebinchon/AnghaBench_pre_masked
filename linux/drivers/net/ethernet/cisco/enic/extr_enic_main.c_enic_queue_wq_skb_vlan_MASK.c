
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {int dummy; } ;
struct sk_buff {unsigned int len; int data; } ;
struct enic {int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enic*,int ) ;
 int FUNC_1 (struct vnic_wq*,struct sk_buff*,int ,unsigned int,int,unsigned int,int,int) ;
 int FUNC_2 (struct enic*,struct vnic_wq*,struct sk_buff*,unsigned int,int) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct enic *VAR_2, struct vnic_wq *VAR_3,
      struct sk_buff *VAR_4, int VAR_5,
      unsigned int VAR_6, int VAR_7)
{
 unsigned int VAR_8 = FUNC_4(VAR_4);
 unsigned int VAR_9 = VAR_4->len - VAR_8;
 int VAR_10 = (VAR_9 == 0);
 dma_addr_t VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_3(VAR_2->pdev, VAR_4->data, VAR_8,
      VAR_1);
 if (FUNC_5(FUNC_0(VAR_2, VAR_11)))
  return -VAR_0;






 FUNC_1(VAR_3, VAR_4, VAR_11, VAR_8, VAR_5,
      VAR_6, VAR_10, VAR_7);

 if (!VAR_10)
  VAR_12 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_9, VAR_7);

 return VAR_12;
}
