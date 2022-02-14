
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ixgbe_ring {int dev; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int dma; int page_released; } ;
struct TYPE_3__ {int * frags; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ,int ,unsigned long,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_4 (struct ixgbe_ring*) ;
 unsigned long FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct ixgbe_ring *VAR_3,
    struct sk_buff *VAR_4)
{
 if (FUNC_4(VAR_3)) {
  unsigned long VAR_5 = (unsigned long)(VAR_4->data) & ~VAR_2;

  FUNC_1(VAR_3->dev,
           FUNC_0(VAR_4)->dma,
           VAR_5,
           FUNC_7(VAR_4),
           VAR_0);
 } else {
  skb_frag_t *VAR_6 = &FUNC_8(VAR_4)->frags[0];

  FUNC_1(VAR_3->dev,
           FUNC_0(VAR_4)->dma,
           FUNC_5(VAR_6),
           FUNC_6(VAR_6),
           VAR_0);
 }


 if (FUNC_9(FUNC_0(VAR_4)->page_released)) {
  FUNC_2(VAR_3->dev, FUNC_0(VAR_4)->dma,
         FUNC_3(VAR_3),
         VAR_0,
         VAR_1);
 }
}
