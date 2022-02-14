
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct smsc9420_pdata {int tx_ring_tail; int tx_ring_head; TYPE_2__* tx_ring; TYPE_1__* tx_buffers; int pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {int status; int length; scalar_t__ buffer1; } ;
struct TYPE_4__ {TYPE_3__* skb; scalar_t__ mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 struct smsc9420_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct net_device*,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_2(VAR_3);

 while (VAR_4->tx_ring_tail != VAR_4->tx_ring_head) {
  int VAR_5 = VAR_4->tx_ring_tail;
  u32 VAR_6, VAR_7;

  FUNC_4();
  VAR_6 = VAR_4->tx_ring[VAR_5].status;
  VAR_7 = VAR_4->tx_ring[VAR_5].length;


  if (FUNC_6(VAR_1 & VAR_6))
   break;

  FUNC_5(VAR_3, VAR_6, VAR_7);

  FUNC_0(!VAR_4->tx_buffers[VAR_5].skb);
  FUNC_0(!VAR_4->tx_buffers[VAR_5].mapping);

  FUNC_3(VAR_4->pdev, VAR_4->tx_buffers[VAR_5].mapping,
   VAR_4->tx_buffers[VAR_5].skb->len, VAR_0);
  VAR_4->tx_buffers[VAR_5].mapping = 0;

  FUNC_1(VAR_4->tx_buffers[VAR_5].skb);
  VAR_4->tx_buffers[VAR_5].skb = ((void*)0);

  VAR_4->tx_ring[VAR_5].buffer1 = 0;
  FUNC_7();

  VAR_4->tx_ring_tail = (VAR_4->tx_ring_tail + 1) % VAR_2;
 }
}
