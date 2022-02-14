
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tlan_priv {unsigned long dma_storage_dma; int dma_size; TYPE_1__* adapter; scalar_t__ rx_list_dma; scalar_t__ tx_list_dma; struct tlan_list* rx_list; struct tlan_list* tx_list; int * dma_storage; int pci_dev; } ;
struct tlan_list {int dummy; } ;
struct net_device {char* dev_addr; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; int name; } ;
struct TYPE_2__ {int addr_ofs; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int * FUNC_3 (int ,int,unsigned long*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct net_device*,scalar_t__,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct tlan_priv *VAR_11;

 VAR_11 = FUNC_1(VAR_7);

 VAR_8 = (VAR_2 + VAR_3)
  * (sizeof(struct tlan_list));
 VAR_11->dma_storage = FUNC_3(VAR_11->pci_dev,
       VAR_8,
       &VAR_11->dma_storage_dma);
 VAR_11->dma_size = VAR_8;

 if (VAR_11->dma_storage == ((void*)0)) {
  FUNC_4("Could not allocate lists and buffers for %s\n",
         VAR_7->name);
  return -VAR_0;
 }
 VAR_11->rx_list = (struct tlan_list *)
  FUNC_0((unsigned long)VAR_11->dma_storage, 8);
 VAR_11->rx_list_dma = FUNC_0(VAR_11->dma_storage_dma, 8);
 VAR_11->tx_list = VAR_11->rx_list + VAR_2;
 VAR_11->tx_list_dma =
  VAR_11->rx_list_dma + sizeof(struct tlan_list)*VAR_2;

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_9 |= FUNC_5(VAR_7,
      (u8) VAR_11->adapter->addr_ofs + VAR_10,
      (u8 *) &VAR_7->dev_addr[VAR_10]);
 if (VAR_9) {
  FUNC_4("%s: Error reading MAC from eeprom: %d\n",
         VAR_7->name, VAR_9);
 }

 if (VAR_11->adapter->addr_ofs == 0xf8) {
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10 += 2) {
   char VAR_12 = VAR_7->dev_addr[VAR_10];
   VAR_7->dev_addr[VAR_10] = VAR_7->dev_addr[VAR_10 + 1];
   VAR_7->dev_addr[VAR_10 + 1] = VAR_12;
  }
 }

 FUNC_2(VAR_7);


 VAR_7->netdev_ops = &VAR_6;
 VAR_7->ethtool_ops = &VAR_5;
 VAR_7->watchdog_timeo = VAR_4;

 return 0;

}
