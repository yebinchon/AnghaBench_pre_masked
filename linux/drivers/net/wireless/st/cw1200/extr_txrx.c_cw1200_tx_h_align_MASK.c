
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {size_t offset; } ;
struct cw1200_txinfo {size_t hdrlen; TYPE_2__ txpriv; TYPE_3__* skb; } ;
struct cw1200_common {TYPE_1__* hw; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_5__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cw1200_common*) ;
 size_t FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct cw1200_common *VAR_3,
    struct cw1200_txinfo *VAR_4,
    u8 *VAR_5)
{
 size_t VAR_6 = (size_t)VAR_4->skb->data & 3;

 if (!VAR_6)
  return 0;

 if (VAR_6 & 1) {
  FUNC_3(VAR_3->hw->wiphy,
     "Bug: attempt to transmit a frame with wrong alignment: %zu\n",
     VAR_6);
  return -VAR_0;
 }

 if (FUNC_1(VAR_4->skb) < VAR_6) {
  FUNC_3(VAR_3->hw->wiphy,
     "Bug: no space allocated for DMA alignment. headroom: %d\n",
     FUNC_1(VAR_4->skb));
  return -VAR_1;
 }
 FUNC_2(VAR_4->skb, VAR_6);
 VAR_4->hdrlen += VAR_6;
 VAR_4->txpriv.offset += VAR_6;
 *VAR_5 |= VAR_2;
 FUNC_0(VAR_3);
 return 0;
}
