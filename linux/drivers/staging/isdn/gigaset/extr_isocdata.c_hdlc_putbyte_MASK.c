
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* bas; } ;
struct bc_state {scalar_t__ rx_bufsize; TYPE_4__* rx_skb; TYPE_3__ hw; TYPE_1__* cs; int rx_fcs; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_7__ {int giants; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (TYPE_4__*,unsigned char) ;
 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static inline void FUNC_4(unsigned char VAR_0, struct bc_state *VAR_1)
{
 VAR_1->rx_fcs = FUNC_1(VAR_1->rx_fcs, VAR_0);
 if (VAR_1->rx_skb == ((void*)0))

  return;
 if (VAR_1->rx_skb->len >= VAR_1->rx_bufsize) {
  FUNC_3(VAR_1->cs->dev, "received oversized packet discarded\n");
  VAR_1->hw.bas->giants++;
  FUNC_2(VAR_1->rx_skb);
  VAR_1->rx_skb = ((void*)0);
  return;
 }
 FUNC_0(VAR_1->rx_skb, VAR_0);
}
