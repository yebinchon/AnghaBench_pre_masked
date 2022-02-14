
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int* data; } ;
struct TYPE_4__ {int tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {int tx_irq_disabled; scalar_t__ tx_free_frames; } ;
typedef TYPE_2__ mace_private ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (scalar_t__,int*,int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (char*,int ,long) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_6,
      struct net_device *VAR_7)
{
  mace_private *VAR_8 = FUNC_1(VAR_7);
  unsigned int VAR_9 = VAR_7->base_addr;

  FUNC_3(VAR_7);

  FUNC_7("%s: mace_start_xmit(length = %ld) called.\n",
 VAR_7->name, (long)VAR_6->len);



  FUNC_4(VAR_3 | VAR_4,
    VAR_9 + VAR_0 + VAR_2);
  VAR_8->tx_irq_disabled=1;


  {






    VAR_7->stats.tx_bytes += VAR_6->len;
    VAR_8->tx_free_frames--;



    FUNC_6(VAR_6->len, VAR_9 + VAR_1);

    FUNC_5(VAR_9 + VAR_1, VAR_6->data, VAR_6->len >> 1);
    if (VAR_6->len & 1) {

      FUNC_4(VAR_6->data[VAR_6->len-1], VAR_9 + VAR_1);
    }





  }



  VAR_8->tx_irq_disabled=0;
  FUNC_4(VAR_3, VAR_9 + VAR_0 + VAR_2);


  FUNC_0(VAR_6);

  return VAR_5;
}
