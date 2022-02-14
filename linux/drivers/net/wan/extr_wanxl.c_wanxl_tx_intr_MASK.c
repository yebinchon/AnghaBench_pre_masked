
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct port {size_t tx_in; TYPE_2__* card; struct sk_buff** tx_skbs; struct net_device* dev; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; int tx_fifo_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_7__ {int stat; int address; } ;
typedef TYPE_3__ desc_t ;
struct TYPE_8__ {TYPE_3__* tx_descs; } ;
struct TYPE_6__ {int pdev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_4__* FUNC_1 (struct port*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct port *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 while (1) {
                desc_t *VAR_4 = &FUNC_1(VAR_2)->tx_descs[VAR_2->tx_in];
  struct sk_buff *VAR_5 = VAR_2->tx_skbs[VAR_2->tx_in];

  switch (VAR_4->stat) {
  case 129:
  case 130:
   FUNC_2(VAR_3);
   return;

  case 128:
   VAR_3->stats.tx_errors++;
   VAR_3->stats.tx_fifo_errors++;
   break;

  default:
   VAR_3->stats.tx_packets++;
   VAR_3->stats.tx_bytes += VAR_5->len;
  }
                VAR_4->stat = 130;
  FUNC_3(VAR_2->card->pdev, VAR_4->address, VAR_5->len,
     VAR_0);
  FUNC_0(VAR_5);
                VAR_2->tx_in = (VAR_2->tx_in + 1) % VAR_1;
        }
}
