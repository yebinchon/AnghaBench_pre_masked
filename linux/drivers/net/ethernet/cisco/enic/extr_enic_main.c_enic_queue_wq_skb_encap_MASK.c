
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
 int VAR_2 ;
 int FUNC_0 (struct enic*,int ) ;
 int FUNC_1 (struct vnic_wq*,struct sk_buff*,int ,unsigned int,unsigned int,int ,int,unsigned int,int ,int,int,int,int) ;
 int FUNC_2 (struct enic*,struct vnic_wq*,struct sk_buff*,unsigned int,int) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct enic *VAR_3, struct vnic_wq *VAR_4,
       struct sk_buff *VAR_5,
       int VAR_6,
       unsigned int VAR_7, int VAR_8)
{
 unsigned int VAR_9 = FUNC_4(VAR_5);
 unsigned int VAR_10 = VAR_5->len - VAR_9;





 unsigned int VAR_11 = 7;
 int VAR_12 = (VAR_10 == 0);
 dma_addr_t VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_3(VAR_3->pdev, VAR_5->data, VAR_9,
      VAR_1);
 if (FUNC_5(FUNC_0(VAR_3, VAR_13)))
  return -VAR_0;

 FUNC_1(VAR_4, VAR_5, VAR_13, VAR_9, VAR_11, 0,
         VAR_6, VAR_7,
         VAR_2, VAR_12, 1 , VAR_12,
         VAR_8);
 if (!VAR_12)
  VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_10, VAR_8);

 return VAR_14;
}
