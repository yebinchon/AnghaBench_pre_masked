
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct musb {struct device* controller; } ;
struct dma_channel {int max_len; int status; struct cppi41_dma_channel* private_data; } ;
struct dma_chan {int dummy; } ;
struct device_node {int dummy; } ;
struct device {TYPE_2__* parent; } ;
struct TYPE_3__ {struct musb* musb; } ;
struct cppi41_dma_controller {unsigned int num_channels; struct cppi41_dma_channel* rx_channel; struct cppi41_dma_channel* tx_channel; TYPE_1__ controller; } ;
struct cppi41_dma_channel {unsigned int port_num; unsigned int is_tx; struct dma_chan* dc; struct dma_channel channel; int tx_check; struct cppi41_dma_controller* controller; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct dma_chan*) ;
 int VAR_2 ;
 int FUNC_2 (struct dma_chan*) ;
 int VAR_3 ;
 int FUNC_3 (struct cppi41_dma_controller*) ;
 int FUNC_4 (struct device*,char*,char const*,...) ;
 struct dma_chan* FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (char const*,int ,unsigned int*) ;
 int FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*,char*,int,char const**) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(struct cppi41_dma_controller *VAR_4)
{
 struct musb *VAR_5 = VAR_4->controller.musb;
 struct device *VAR_6 = VAR_5->controller;
 struct device_node *VAR_7 = VAR_6->parent->of_node;
 struct cppi41_dma_channel *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_7(VAR_7, "dma-names");
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct dma_chan *VAR_12;
  struct dma_channel *VAR_13;
  const char *VAR_14;
  unsigned VAR_15;
  unsigned int VAR_16;

  VAR_11 = FUNC_8(VAR_7, "dma-names", VAR_10, &VAR_14);
  if (VAR_11)
   goto err;
  if (FUNC_9(VAR_14, "tx"))
   VAR_15 = 1;
  else if (FUNC_9(VAR_14, "rx"))
   VAR_15 = 0;
  else {
   FUNC_4(VAR_6, "Wrong dmatype %s\n", VAR_14);
   goto err;
  }
  VAR_11 = FUNC_6(VAR_14 + 2, 0, &VAR_16);
  if (VAR_11)
   goto err;

  VAR_11 = -VAR_0;
  if (VAR_16 > VAR_4->num_channels || !VAR_16)
   goto err;
  if (VAR_15)
   VAR_8 = &VAR_4->tx_channel[VAR_16 - 1];
  else
   VAR_8 = &VAR_4->rx_channel[VAR_16 - 1];

  VAR_8->controller = VAR_4;
  VAR_8->port_num = VAR_16;
  VAR_8->is_tx = VAR_15;
  FUNC_0(&VAR_8->tx_check);

  VAR_13 = &VAR_8->channel;
  VAR_13->private_data = VAR_8;
  VAR_13->status = VAR_2;
  VAR_13->max_len = VAR_3;

  VAR_12 = FUNC_5(VAR_6->parent, VAR_14);
  if (FUNC_1(VAR_12)) {
   VAR_11 = FUNC_2(VAR_12);
   if (VAR_11 != -VAR_1)
    FUNC_4(VAR_6, "Failed to request %s: %d.\n",
     VAR_14, VAR_11);
   goto err;
  }

  VAR_8->dc = VAR_12;
 }
 return 0;
err:
 FUNC_3(VAR_4);
 return VAR_11;
}
