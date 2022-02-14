
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_net_config {int mac; int status; int mtu; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mlxbf_tmfifo {int is_ready; int timer; TYPE_1__* irq_info; void* tx_base; void* rx_base; int lock; int work; int spin_lock; } ;
typedef int net_config ;
struct TYPE_2__ {int index; scalar_t__ irq; struct mlxbf_tmfifo* fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*) ;
 struct mlxbf_tmfifo* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (struct device*,scalar_t__,int ,int ,char*,TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (struct virtio_net_config*,int ,int) ;
 int FUNC_8 (struct mlxbf_tmfifo*) ;
 int FUNC_9 (struct device*,struct mlxbf_tmfifo*,int ,int ,struct virtio_net_config*,int) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 (struct mlxbf_tmfifo*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct platform_device*,int) ;
 int FUNC_15 (struct platform_device*,struct mlxbf_tmfifo*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_13)
{
 struct virtio_net_config VAR_14;
 struct device *VAR_15 = &VAR_13->dev;
 struct mlxbf_tmfifo *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_4(VAR_15, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_0;

 FUNC_16(&VAR_16->spin_lock);
 FUNC_0(&VAR_16->work, VAR_12);
 FUNC_13(&VAR_16->lock);


 VAR_16->rx_base = FUNC_5(VAR_13, 0);
 if (FUNC_1(VAR_16->rx_base))
  return FUNC_2(VAR_16->rx_base);


 VAR_16->tx_base = FUNC_5(VAR_13, 1);
 if (FUNC_1(VAR_16->tx_base))
  return FUNC_2(VAR_16->tx_base);

 FUNC_15(VAR_13, VAR_16);

 FUNC_17(&VAR_16->timer, VAR_11, 0);

 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_16->irq_info[VAR_17].index = VAR_17;
  VAR_16->irq_info[VAR_17].fifo = VAR_16;
  VAR_16->irq_info[VAR_17].irq = FUNC_14(VAR_13, VAR_17);
  VAR_18 = FUNC_6(VAR_15, VAR_16->irq_info[VAR_17].irq,
          VAR_10, 0,
          "tmfifo", &VAR_16->irq_info[VAR_17]);
  if (VAR_18) {
   FUNC_3(VAR_15, "devm_request_irq failed\n");
   VAR_16->irq_info[VAR_17].irq = 0;
   return VAR_18;
  }
 }

 FUNC_11(VAR_16);


 VAR_18 = FUNC_9(VAR_15, VAR_16, VAR_6, 0, ((void*)0), 0);
 if (VAR_18)
  goto fail;


 FUNC_7(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.mtu = VAR_1;
 VAR_14.status = VAR_8;
 FUNC_10(VAR_14.mac);
 VAR_18 = FUNC_9(VAR_15, VAR_16, VAR_7,
          VAR_3, &VAR_14,
          sizeof(VAR_14));
 if (VAR_18)
  goto fail;

 FUNC_12(&VAR_16->timer, VAR_9 + VAR_4);

 VAR_16->is_ready = 1;
 return 0;

fail:
 FUNC_8(VAR_16);
 return VAR_18;
}
