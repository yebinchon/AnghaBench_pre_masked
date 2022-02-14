
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_wq {int dummy; } ;
struct sk_buff {int dummy; } ;
struct enic {TYPE_1__* pdev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int * frags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enic*,int ) ;
 int FUNC_1 (struct vnic_wq*,struct sk_buff*,int ,scalar_t__,int,int) ;
 int FUNC_2 (int *,int const*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int const*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct enic *VAR_2, struct vnic_wq *VAR_3,
      struct sk_buff *VAR_4, unsigned int VAR_5,
      int VAR_6)
{
 const skb_frag_t *VAR_7;
 dma_addr_t VAR_8;


 for (VAR_7 = FUNC_4(VAR_4)->frags; VAR_5; VAR_7++) {
  VAR_5 -= FUNC_3(VAR_7);
  VAR_8 = FUNC_2(&VAR_2->pdev->dev, VAR_7, 0,
         FUNC_3(VAR_7),
         VAR_0);
  if (FUNC_5(FUNC_0(VAR_2, VAR_8)))
   return -VAR_1;
  FUNC_1(VAR_3, VAR_4, VAR_8, FUNC_3(VAR_7),
     (VAR_5 == 0),
     VAR_6);
 }

 return 0;
}
