
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ipw2100_rx_packet {int skb; int dma_addr; } ;
struct TYPE_9__ {TYPE_1__* drv; } ;
struct TYPE_8__ {TYPE_2__* drv; } ;
struct ipw2100_priv {TYPE_4__ rx_queue; struct ipw2100_rx_packet* rx_buffers; int pci_dev; TYPE_3__ status_queue; } ;
struct TYPE_7__ {scalar_t__ status_fields; } ;
struct TYPE_6__ {int buf_length; int host_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ipw2100_priv*,TYPE_4__*,int) ;
 int FUNC_2 (struct ipw2100_priv*,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipw2100_priv*,struct ipw2100_rx_packet*) ;
 int FUNC_5 (struct ipw2100_rx_packet*) ;
 struct ipw2100_rx_packet* FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (struct ipw2100_priv*,int) ;
 int FUNC_9 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ipw2100_priv *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = -VAR_0;

 FUNC_0("enter\n");

 VAR_9 = FUNC_1(VAR_6, &VAR_6->rx_queue, VAR_5);
 if (VAR_9) {
  FUNC_0("failed bd_queue_allocate\n");
  return VAR_9;
 }

 VAR_9 = FUNC_8(VAR_6, VAR_5);
 if (VAR_9) {
  FUNC_0("failed status_queue_allocate\n");
  FUNC_2(VAR_6, &VAR_6->rx_queue);
  return VAR_9;
 }




 VAR_6->rx_buffers = FUNC_6(VAR_5,
      sizeof(struct ipw2100_rx_packet),
      VAR_2);
 if (!VAR_6->rx_buffers) {
  FUNC_0("can't allocate rx packet buffer table\n");

  FUNC_2(VAR_6, &VAR_6->rx_queue);

  FUNC_9(VAR_6);

  return -VAR_1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct ipw2100_rx_packet *VAR_10 = &VAR_6->rx_buffers[VAR_7];

  VAR_9 = FUNC_4(VAR_6, VAR_10);
  if (FUNC_10(VAR_9)) {
   VAR_9 = -VAR_1;
   break;
  }


  VAR_6->rx_queue.drv[VAR_7].host_addr = VAR_10->dma_addr;
  VAR_6->rx_queue.drv[VAR_7].buf_length = VAR_3;
  VAR_6->status_queue.drv[VAR_7].status_fields = 0;
 }

 if (VAR_7 == VAR_5)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_7(VAR_6->pci_dev, VAR_6->rx_buffers[VAR_8].dma_addr,
     sizeof(struct ipw2100_rx_packet),
     VAR_4);
  FUNC_3(VAR_6->rx_buffers[VAR_8].skb);
 }

 FUNC_5(VAR_6->rx_buffers);
 VAR_6->rx_buffers = ((void*)0);

 FUNC_2(VAR_6, &VAR_6->rx_queue);

 FUNC_9(VAR_6);

 return VAR_9;
}
