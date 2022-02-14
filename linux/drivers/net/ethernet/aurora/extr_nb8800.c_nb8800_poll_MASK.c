
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int rx_bytes; int multicast; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {int config; } ;
struct nb8800_rx_desc {int report; TYPE_2__ desc; } ;
struct nb8800_priv {unsigned int rx_eoc; struct nb8800_rx_desc* rx_descs; int rx_itr_irq; } ;
struct napi_struct {struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct napi_struct*,int) ;
 int FUNC_3 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct nb8800_priv*,int ,int ) ;
 struct nb8800_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct napi_struct *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 struct nb8800_priv *VAR_7 = FUNC_8(VAR_6);
 struct nb8800_rx_desc *VAR_8;
 unsigned int VAR_9 = VAR_7->rx_eoc;
 unsigned int VAR_10;
 int VAR_11 = 0;

 FUNC_6(VAR_6);

again:
 do {
  unsigned int VAR_12;

  VAR_10 = (VAR_9 + 1) % VAR_2;

  VAR_8 = &VAR_7->rx_descs[VAR_10];

  if (!VAR_8->report)
   break;

  VAR_12 = FUNC_1(VAR_8->report);

  if (FUNC_0(VAR_8->report))
   FUNC_4(VAR_6, VAR_8->report);
  else
   FUNC_3(VAR_6, VAR_10, VAR_12);

  VAR_6->stats.rx_packets++;
  VAR_6->stats.rx_bytes += VAR_12;

  if (VAR_8->report & VAR_3)
   VAR_6->stats.multicast++;

  VAR_8->report = 0;
  VAR_9 = VAR_10;
  VAR_11++;
 } while (VAR_11 < VAR_5);

 if (VAR_11) {
  VAR_7->rx_descs[VAR_9].desc.config |= VAR_0;
  FUNC_9();
  VAR_7->rx_descs[VAR_7->rx_eoc].desc.config &= ~VAR_0;
  VAR_7->rx_eoc = VAR_9;
  FUNC_5(VAR_6);
 }

 if (VAR_11 < VAR_5) {
  FUNC_7(VAR_7, VAR_1, VAR_7->rx_itr_irq);





  if (VAR_7->rx_descs[VAR_10].report)
   goto again;

  FUNC_2(VAR_4, VAR_11);
 }

 return VAR_11;
}
