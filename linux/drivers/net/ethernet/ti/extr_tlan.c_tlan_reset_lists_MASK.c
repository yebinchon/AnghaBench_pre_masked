
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlan_priv {int rx_tail; struct tlan_list* rx_list; int pci_dev; scalar_t__ rx_list_dma; scalar_t__ rx_head; struct tlan_list* tx_list; scalar_t__ tx_tail; scalar_t__ tx_head; } ;
struct tlan_list {int frame_size; scalar_t__ forward; TYPE_1__* buffer; int c_stat; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int count; scalar_t__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (struct net_device*,int) ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct tlan_list*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 struct tlan_priv *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 struct tlan_list *VAR_10;
 dma_addr_t VAR_11;
 struct sk_buff *VAR_12;

 VAR_8->tx_head = 0;
 VAR_8->tx_tail = 0;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_10 = VAR_8->tx_list + VAR_9;
  VAR_10->c_stat = VAR_2;
  VAR_10->buffer[0].address = 0;
  VAR_10->buffer[2].count = 0;
  VAR_10->buffer[2].address = 0;
  VAR_10->buffer[8].address = 0;
  VAR_10->buffer[9].address = 0;
 }

 VAR_8->rx_head = 0;
 VAR_8->rx_tail = VAR_5 - 1;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_10 = VAR_8->rx_list + VAR_9;
  VAR_11 = VAR_8->rx_list_dma + sizeof(struct tlan_list)*VAR_9;
  VAR_10->c_stat = VAR_1;
  VAR_10->frame_size = VAR_4;
  VAR_10->buffer[0].count = VAR_4 | VAR_3;
  VAR_12 = FUNC_0(VAR_7, VAR_4 + 5);
  if (!VAR_12)
   break;

  VAR_10->buffer[0].address = FUNC_2(VAR_8->pci_dev,
        VAR_12->data,
        VAR_4,
        VAR_0);
  FUNC_3(VAR_10, VAR_12);
  VAR_10->buffer[1].count = 0;
  VAR_10->buffer[1].address = 0;
  VAR_10->forward = VAR_11 + sizeof(struct tlan_list);
 }


 while (VAR_9 < VAR_5) {
  FUNC_3(VAR_8->rx_list + VAR_9, ((void*)0));
  ++VAR_9;
 }
 VAR_10->forward = 0;

}
