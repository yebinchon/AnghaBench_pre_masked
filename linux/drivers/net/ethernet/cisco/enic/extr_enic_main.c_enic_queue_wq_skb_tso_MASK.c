
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_wq {int dummy; } ;
struct sk_buff {unsigned int len; unsigned int data; scalar_t__ encapsulation; } ;
struct enic {TYPE_2__* pdev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct enic*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct vnic_wq*,struct sk_buff*,int ,unsigned int,int,int) ;
 int FUNC_4 (struct vnic_wq*,struct sk_buff*,int ,unsigned int,unsigned int,unsigned int,int,unsigned int,int,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (TYPE_2__*,unsigned int,unsigned int,int ) ;
 int FUNC_8 (int *,int *,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_9 (int *) ;
 unsigned int FUNC_10 (struct sk_buff*) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 TYPE_1__* FUNC_12 (struct sk_buff*) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct enic *VAR_4, struct vnic_wq *VAR_5,
     struct sk_buff *VAR_6, unsigned int VAR_7,
     int VAR_8, unsigned int VAR_9,
     int VAR_10)
{
 unsigned int VAR_11 = FUNC_10(VAR_6);
 unsigned int VAR_12 = VAR_6->len - VAR_11;
 int VAR_13 = (VAR_12 == 0);
 unsigned int VAR_14 = 0;
 unsigned int VAR_15;
 dma_addr_t VAR_16;
 unsigned int VAR_17;
 skb_frag_t *VAR_18;

 if (VAR_6->encapsulation) {
  VAR_15 = FUNC_11(VAR_6) - VAR_6->data;
  VAR_15 += FUNC_5(VAR_6);
  FUNC_2(VAR_6);
 } else {
  VAR_15 = FUNC_13(VAR_6) + FUNC_14(VAR_6);
  FUNC_1(VAR_6);
 }




 while (VAR_11) {
  VAR_17 = FUNC_6(VAR_11, (unsigned int)VAR_3);
  VAR_16 = FUNC_7(VAR_4->pdev, VAR_6->data + VAR_14, VAR_17,
       VAR_2);
  if (FUNC_15(FUNC_0(VAR_4, VAR_16)))
   return -VAR_1;
  FUNC_4(VAR_5, VAR_6, VAR_16, VAR_17, VAR_7, VAR_15,
           VAR_8, VAR_9,
           VAR_13 && (VAR_17 == VAR_11), VAR_10);
  VAR_11 -= VAR_17;
  VAR_14 += VAR_17;
 }

 if (VAR_13)
  return 0;




 for (VAR_18 = FUNC_12(VAR_6)->frags; VAR_12; VAR_18++) {
  VAR_12 -= FUNC_9(VAR_18);
  VAR_11 = FUNC_9(VAR_18);
  VAR_14 = 0;

  while (VAR_11) {
   VAR_17 = FUNC_6(VAR_11,
    (unsigned int)VAR_3);
   VAR_16 = FUNC_8(&VAR_4->pdev->dev, VAR_18,
          VAR_14, VAR_17,
          VAR_0);
   if (FUNC_15(FUNC_0(VAR_4, VAR_16)))
    return -VAR_1;
   FUNC_3(VAR_5, VAR_6, VAR_16, VAR_17,
      (VAR_12 == 0) &&
       (VAR_17 == VAR_11),
      VAR_10);
   VAR_11 -= VAR_17;
   VAR_14 += VAR_17;
  }
 }

 return 0;
}
