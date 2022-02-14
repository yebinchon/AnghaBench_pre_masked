
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct resource {int start; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct of_device_id {struct dim2_platform_data* data; } ;
struct most_channel_capability {int direction; int data_type; int buffer_size_streaming; int num_buffers_streaming; int buffer_size_packet; int num_buffers_packet; int name_suffix; } ;
struct hdm_channel {int is_initialized; int name; int started_list; int pending_list; } ;
struct dim2_platform_data {int (* enable ) (struct platform_device*) ;int (* disable ) (struct platform_device*) ;} ;
struct TYPE_9__ {int num_channels; int dev; TYPE_4__* driver_dev; int request_netinfo; int poison_channel; int dma_free; int dma_alloc; int enqueue; int configure; struct most_channel_capability* channel_vector; int description; int interface; } ;
struct TYPE_10__ {char* init_name; int * parent; } ;
struct dim2_hdm {int atx_idx; int (* disable_platform ) (struct platform_device*) ;int netinfo_task; TYPE_1__ most_iface; TYPE_3__ dev; struct most_channel_capability* capabilities; int name; struct hdm_channel* hch; scalar_t__ deliver_netinfo; int netinfo_waitq; int clk_speed; int io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_4__*,char*,int ) ;
 int FUNC_5 (TYPE_4__*,struct resource*) ;
 struct dim2_hdm* FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int,int ,int ,char*,struct dim2_hdm*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct dim2_hdm*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 struct of_device_id* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char*,char const**) ;
 int FUNC_19 (struct platform_device*,int) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct dim2_hdm*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_22 (int ,int,char const*,int) ;
 int FUNC_23 (struct platform_device*) ;
 int FUNC_24 (struct platform_device*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_28)
{
 const struct dim2_platform_data *VAR_29;
 const struct of_device_id *VAR_30;
 const char *VAR_31;
 struct dim2_hdm *VAR_32;
 struct resource *VAR_33;
 int VAR_34, VAR_35;
 u8 VAR_36;
 int VAR_37;

 enum { MLB_INT_IDX, AHB0_INT_IDX };

 VAR_32 = FUNC_6(&VAR_28->dev, sizeof(*VAR_32), VAR_4);
 if (!VAR_32)
  return -VAR_3;

 VAR_32->atx_idx = -1;

 FUNC_21(VAR_28, VAR_32);

 VAR_34 = FUNC_18(VAR_28->dev.of_node,
          "microchip,clock-speed", &VAR_31);
 if (VAR_34) {
  FUNC_3(&VAR_28->dev, "missing dt property clock-speed\n");
  return VAR_34;
 }

 VAR_34 = FUNC_11(VAR_31, &VAR_32->clk_speed);
 if (VAR_34) {
  FUNC_3(&VAR_28->dev, "bad dt property clock-speed\n");
  return VAR_34;
 }

 VAR_33 = FUNC_20(VAR_28, VAR_5, 0);
 VAR_32->io_base = FUNC_5(&VAR_28->dev, VAR_33);
 if (FUNC_1(VAR_32->io_base))
  return FUNC_2(VAR_32->io_base);

 VAR_30 = FUNC_17(VAR_21, VAR_28->dev.of_node);
 VAR_29 = VAR_30->data;
 VAR_34 = VAR_29 && VAR_29->enable ? VAR_29->enable(VAR_28) : 0;
 if (VAR_34)
  return VAR_34;

 VAR_32->disable_platform = VAR_29 ? VAR_29->disable : ((void*)0);

 FUNC_4(&VAR_28->dev, "sync: num of frames per sub-buffer: %u\n", VAR_25);
 VAR_36 = FUNC_10(VAR_32->io_base, VAR_32->clk_speed, VAR_25);
 if (VAR_36 != VAR_0) {
  FUNC_3(&VAR_28->dev, "dim_startup failed: %d\n", VAR_36);
  VAR_34 = -VAR_2;
  goto err_disable_platform;
 }

 VAR_37 = FUNC_19(VAR_28, AHB0_INT_IDX);
 if (VAR_37 < 0) {
  VAR_34 = VAR_37;
  goto err_shutdown_dim;
 }

 VAR_34 = FUNC_7(&VAR_28->dev, VAR_37, VAR_19, 0,
          "dim2_ahb0_int", VAR_32);
 if (VAR_34) {
  FUNC_3(&VAR_28->dev, "failed to request ahb0_int irq %d\n", VAR_37);
  goto err_shutdown_dim;
 }

 VAR_37 = FUNC_19(VAR_28, MLB_INT_IDX);
 if (VAR_37 < 0) {
  VAR_34 = VAR_37;
  goto err_shutdown_dim;
 }

 VAR_34 = FUNC_7(&VAR_28->dev, VAR_37, VAR_20, 0,
          "dim2_mlb_int", VAR_32);
 if (VAR_34) {
  FUNC_3(&VAR_28->dev, "failed to request mlb_int irq %d\n", VAR_37);
  goto err_shutdown_dim;
 }

 FUNC_12(&VAR_32->netinfo_waitq);
 VAR_32->deliver_netinfo = 0;
 VAR_32->netinfo_task = FUNC_13(&VAR_18, VAR_32,
     "dim2_netinfo");
 if (FUNC_1(VAR_32->netinfo_task)) {
  VAR_34 = FUNC_2(VAR_32->netinfo_task);
  goto err_shutdown_dim;
 }

 for (VAR_35 = 0; VAR_35 < VAR_1; VAR_35++) {
  struct most_channel_capability *VAR_38 = VAR_32->capabilities + VAR_35;
  struct hdm_channel *VAR_39 = VAR_32->hch + VAR_35;

  FUNC_0(&VAR_39->pending_list);
  FUNC_0(&VAR_39->started_list);
  VAR_39->is_initialized = 0;
  FUNC_22(VAR_39->name, sizeof(VAR_39->name), "ca%d", VAR_35 * 2 + 2);

  VAR_38->name_suffix = VAR_39->name;
  VAR_38->direction = VAR_14 | VAR_16;
  VAR_38->data_type = VAR_12 | VAR_11 |
     VAR_13 | VAR_15;
  VAR_38->num_buffers_packet = VAR_7;
  VAR_38->buffer_size_packet = VAR_9;
  VAR_38->num_buffers_streaming = VAR_8;
  VAR_38->buffer_size_streaming = VAR_10;
 }

 {
  const char *VAR_40;

  if (sizeof(VAR_33->start) == sizeof(long long))
   VAR_40 = "dim2-%016llx";
  else if (sizeof(VAR_33->start) == sizeof(long))
   VAR_40 = "dim2-%016lx";
  else
   VAR_40 = "dim2-%016x";

  FUNC_22(VAR_32->name, sizeof(VAR_32->name), VAR_40, VAR_33->start);
 }

 VAR_32->most_iface.interface = VAR_6;
 VAR_32->most_iface.description = VAR_32->name;
 VAR_32->most_iface.num_channels = VAR_1;
 VAR_32->most_iface.channel_vector = VAR_32->capabilities;
 VAR_32->most_iface.configure = VAR_17;
 VAR_32->most_iface.enqueue = VAR_24;
 VAR_32->most_iface.dma_alloc = VAR_22;
 VAR_32->most_iface.dma_free = VAR_23;
 VAR_32->most_iface.poison_channel = VAR_26;
 VAR_32->most_iface.request_netinfo = VAR_27;
 VAR_32->most_iface.driver_dev = &VAR_28->dev;
 VAR_32->dev.init_name = "dim2_state";
 VAR_32->dev.parent = &VAR_32->most_iface.dev;

 VAR_34 = FUNC_16(&VAR_32->most_iface);
 if (VAR_34) {
  FUNC_3(&VAR_28->dev, "failed to register MOST interface\n");
  goto err_stop_thread;
 }

 VAR_34 = FUNC_8(&VAR_32->dev);
 if (VAR_34) {
  FUNC_3(&VAR_28->dev, "failed to create sysfs attribute\n");
  goto err_unreg_iface;
 }

 return 0;

err_unreg_iface:
 FUNC_15(&VAR_32->most_iface);
err_stop_thread:
 FUNC_14(VAR_32->netinfo_task);
err_shutdown_dim:
 FUNC_9();
err_disable_platform:
 if (VAR_32->disable_platform)
  VAR_32->disable_platform(VAR_28);

 return VAR_34;
}
