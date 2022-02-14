
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {scalar_t__ send_addr; } ;
struct net_device {int dummy; } ;
struct hip04_priv {unsigned int tx_tail; TYPE_1__** tx_skb; scalar_t__* tx_phys; int dev; struct tx_desc* tx_desc; int tx_head; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct net_device*,unsigned int,unsigned int) ;
 struct hip04_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 unsigned int FUNC_10 (int ,unsigned int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2, bool VAR_3)
{
 struct hip04_priv *VAR_4 = FUNC_5(VAR_2);
 unsigned VAR_5 = VAR_4->tx_tail;
 struct tx_desc *VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9;

 FUNC_8();
 VAR_9 = FUNC_10(FUNC_0(VAR_4->tx_head), VAR_5);
 if (VAR_9 == 0)
  goto out;

 while (VAR_9) {
  VAR_6 = &VAR_4->tx_desc[VAR_5];
  if (VAR_6->send_addr != 0) {
   if (VAR_3)
    VAR_6->send_addr = 0;
   else
    break;
  }

  if (VAR_4->tx_phys[VAR_5]) {
   FUNC_3(VAR_4->dev, VAR_4->tx_phys[VAR_5],
      VAR_4->tx_skb[VAR_5]->len,
      VAR_0);
   VAR_4->tx_phys[VAR_5] = 0;
  }
  VAR_8++;
  VAR_7 += VAR_4->tx_skb[VAR_5]->len;
  FUNC_2(VAR_4->tx_skb[VAR_5]);
  VAR_4->tx_skb[VAR_5] = ((void*)0);
  VAR_5 = FUNC_1(VAR_5);
  VAR_9--;
 }

 VAR_4->tx_tail = VAR_5;
 FUNC_9();

out:
 if (VAR_8 || VAR_7)
  FUNC_4(VAR_2, VAR_8, VAR_7);

 if (FUNC_11(FUNC_6(VAR_2)) && (VAR_9 < (VAR_1 - 1)))
  FUNC_7(VAR_2);

 return VAR_9;
}
