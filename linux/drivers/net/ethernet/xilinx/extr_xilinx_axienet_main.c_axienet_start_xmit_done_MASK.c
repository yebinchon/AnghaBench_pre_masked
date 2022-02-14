
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_2__ stats; TYPE_1__ dev; } ;
struct axienet_local {size_t tx_bd_ci; size_t tx_bd_num; struct axidma_bd* tx_bd_v; } ;
struct axidma_bd {unsigned int status; int cntrl; int * skb; scalar_t__ app4; scalar_t__ app2; scalar_t__ app1; scalar_t__ app0; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int ) ;
 struct axienet_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 struct axienet_local *VAR_7 = FUNC_2(VAR_4);
 struct axidma_bd *VAR_8;
 unsigned int VAR_9 = 0;

 VAR_8 = &VAR_7->tx_bd_v[VAR_7->tx_bd_ci];
 VAR_9 = VAR_8->status;
 while (VAR_9 & VAR_3) {
  FUNC_1(VAR_4->dev.parent, VAR_8->phys,
    (VAR_8->cntrl & VAR_1),
    VAR_0);
  if (VAR_8->skb)
   FUNC_0(VAR_8->skb);

  VAR_8->app0 = 0;
  VAR_8->app1 = 0;
  VAR_8->app2 = 0;
  VAR_8->app4 = 0;
  VAR_8->status = 0;
  VAR_8->skb = ((void*)0);

  VAR_5 += VAR_9 & VAR_2;
  VAR_6++;

  if (++VAR_7->tx_bd_ci >= VAR_7->tx_bd_num)
   VAR_7->tx_bd_ci = 0;
  VAR_8 = &VAR_7->tx_bd_v[VAR_7->tx_bd_ci];
  VAR_9 = VAR_8->status;
 }

 VAR_4->stats.tx_packets += VAR_6;
 VAR_4->stats.tx_bytes += VAR_5;


 FUNC_4();

 FUNC_3(VAR_4);
}
