
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlan_priv {int pci_dev; struct tlan_list* rx_list; struct tlan_list* tx_list; } ;
struct tlan_list {TYPE_1__* buffer; } ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,unsigned int) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 struct sk_buff* FUNC_4 (struct tlan_list*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct tlan_priv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;
 struct tlan_list *VAR_9;
 struct sk_buff *VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_9 = VAR_7->tx_list + VAR_8;
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10) {
   FUNC_3(
    VAR_7->pci_dev,
    VAR_9->buffer[0].address,
    FUNC_1(VAR_10->len,
        (unsigned int)VAR_3),
    VAR_1);
   FUNC_0(VAR_10);
   VAR_9->buffer[8].address = 0;
   VAR_9->buffer[9].address = 0;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_9 = VAR_7->rx_list + VAR_8;
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10) {
   FUNC_3(VAR_7->pci_dev,
      VAR_9->buffer[0].address,
      VAR_2,
      VAR_0);
   FUNC_0(VAR_10);
   VAR_9->buffer[8].address = 0;
   VAR_9->buffer[9].address = 0;
  }
 }
}
