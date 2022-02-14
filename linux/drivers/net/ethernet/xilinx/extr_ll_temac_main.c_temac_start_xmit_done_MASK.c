
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct temac_local {size_t tx_bd_ci; struct cdmac_bd* tx_bd_v; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {unsigned int tx_bytes; int tx_packets; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_2__ stats; TYPE_1__ dev; } ;
struct cdmac_bd {scalar_t__ app0; scalar_t__ len; scalar_t__ app4; scalar_t__ app3; scalar_t__ app2; scalar_t__ app1; scalar_t__ phys; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int ) ;
 struct temac_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct cdmac_bd*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct temac_local *VAR_4 = FUNC_3(VAR_3);
 struct cdmac_bd *VAR_5;
 unsigned int VAR_6 = 0;
 struct sk_buff *VAR_7;

 VAR_5 = &VAR_4->tx_bd_v[VAR_4->tx_bd_ci];
 VAR_6 = FUNC_0(VAR_5->app0);

 while (VAR_6 & VAR_1) {
  FUNC_2(VAR_3->dev.parent, FUNC_0(VAR_5->phys),
     FUNC_0(VAR_5->len), VAR_0);
  VAR_7 = (struct sk_buff *)FUNC_5(VAR_5);
  if (VAR_7)
   FUNC_1(VAR_7);
  VAR_5->app0 = 0;
  VAR_5->app1 = 0;
  VAR_5->app2 = 0;
  VAR_5->app3 = 0;
  VAR_5->app4 = 0;

  VAR_3->stats.tx_packets++;
  VAR_3->stats.tx_bytes += FUNC_0(VAR_5->len);

  VAR_4->tx_bd_ci++;
  if (VAR_4->tx_bd_ci >= VAR_2)
   VAR_4->tx_bd_ci = 0;

  VAR_5 = &VAR_4->tx_bd_v[VAR_4->tx_bd_ci];
  VAR_6 = FUNC_0(VAR_5->app0);
 }

 FUNC_4(VAR_3);
}
