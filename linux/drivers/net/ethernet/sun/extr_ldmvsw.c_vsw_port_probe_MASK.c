
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnet_port {int* raddr; int switch_port; int tso; int vsw; int vio; int napi; int list; int clean_timer; scalar_t__ tsolen; struct vnet* dev; struct vnet* vp; } ;
struct vnet {int name; int dev_addr; int lock; int port_list; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {int dev; int mp; } ;
struct net_device {int name; int dev_addr; int lock; int port_list; } ;
struct mdesc_handle {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vnet*) ;
 int VAR_2 ;
 int FUNC_3 (struct vnet*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct vnet_port*) ;
 int FUNC_6 (struct vnet*) ;
 int VAR_4 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int* FUNC_9 (struct mdesc_handle*,int ,int ,int*) ;
 struct mdesc_handle* FUNC_10 () ;
 int FUNC_11 (struct mdesc_handle*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct vnet*,char*,int ) ;
 struct vnet_port* FUNC_14 (struct vnet*) ;
 int FUNC_15 (struct vnet*) ;
 int FUNC_16 (struct vnet*,int *,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*,int ,int*,char*) ;
 int FUNC_20 (struct vnet*) ;
 int VAR_5 ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_23 (struct vnet_port*) ;
 int FUNC_24 () ;
 int FUNC_25 (int *,int ,int ) ;
 int FUNC_26 (int *,struct vio_dev*,int ,int ,int ,int *,int ) ;
 int FUNC_27 (int *,int *,struct vnet_port*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 struct vnet* FUNC_30 (int ,struct vio_dev*,int,int const) ;
 struct vnet* FUNC_31 (struct mdesc_handle*,int ,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_32(struct vio_dev *VAR_12, const struct vio_device_id *VAR_13)
{
 struct mdesc_handle *VAR_14;
 struct vnet_port *VAR_15;
 unsigned long VAR_16;
 struct vnet *VAR_17;
 struct net_device *VAR_18;
 const u64 *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 const u64 *VAR_23;
 u64 VAR_24;

 VAR_14 = FUNC_10();

 VAR_19 = FUNC_9(VAR_14, VAR_12->mp, VAR_5, &VAR_20);
 VAR_22 = -VAR_0;
 if (!VAR_19) {
  FUNC_18("Port lacks %s property\n", VAR_5);
  FUNC_11(VAR_14);
  return VAR_22;
 }

 VAR_23 = FUNC_9(VAR_14, VAR_12->mp, VAR_4, ((void*)0));
 VAR_22 = -VAR_0;
 if (!VAR_23) {
  FUNC_18("Port lacks %s property\n", VAR_4);
  FUNC_11(VAR_14);
  return VAR_22;
 }


 VAR_17 = FUNC_31(VAR_14, VAR_12->mp, &VAR_24);
 if (FUNC_2(VAR_17)) {
  VAR_22 = FUNC_3(VAR_17);
  FUNC_18("Failed to get vnet for vsw-port\n");
  FUNC_11(VAR_14);
  return VAR_22;
 }

 FUNC_11(VAR_14);

 VAR_18 = FUNC_30(VAR_9, VAR_12, VAR_24, *VAR_23);
 if (FUNC_2(VAR_18)) {
  VAR_22 = FUNC_3(VAR_18);
  FUNC_18("Failed to alloc netdev for vsw-port\n");
  return VAR_22;
 }

 VAR_15 = FUNC_14(VAR_18);

 FUNC_1(&VAR_15->list);

 for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
  VAR_15->raddr[VAR_21] = (*VAR_19 >> (5 - VAR_21) * 8) & 0xff;

 VAR_15->vp = VAR_17;
 VAR_15->dev = VAR_18;
 VAR_15->switch_port = 1;
 VAR_15->tso = 0;
 VAR_15->tsolen = 0;







 VAR_15->vsw = 1;

 VAR_22 = FUNC_26(&VAR_15->vio, VAR_12, VAR_3,
         VAR_10, FUNC_0(VAR_10),
         &VAR_11, VAR_18->name);
 if (VAR_22)
  goto err_out_free_dev;

 VAR_22 = FUNC_27(&VAR_15->vio, &VAR_8, VAR_15);
 if (VAR_22)
  goto err_out_free_dev;

 FUNC_5(&VAR_12->dev, VAR_15);

 FUNC_16(VAR_18, &VAR_15->napi, VAR_7,
         VAR_2);

 FUNC_21(&VAR_17->lock, VAR_16);
 FUNC_7(&VAR_15->list, &VAR_17->port_list);
 FUNC_22(&VAR_17->lock, VAR_16);

 FUNC_25(&VAR_15->clean_timer, VAR_6, 0);

 VAR_22 = FUNC_20(VAR_18);
 if (VAR_22) {
  FUNC_18("Cannot register net device, aborting\n");
  goto err_out_del_timer;
 }

 FUNC_21(&VAR_17->lock, VAR_16);
 FUNC_23(VAR_15);
 FUNC_22(&VAR_17->lock, VAR_16);

 FUNC_12(&VAR_15->napi);
 FUNC_29(&VAR_15->vio);




 FUNC_15(VAR_18);

 FUNC_13(VAR_18, "LDOM vsw-port %pM\n", VAR_18->dev_addr);

 FUNC_19("%s: PORT ( remote-mac %pM%s )\n", VAR_18->name,
  VAR_15->raddr, " switch-port");

 return 0;

err_out_del_timer:
 FUNC_4(&VAR_15->clean_timer);
 FUNC_8(&VAR_15->list);
 FUNC_24();
 FUNC_17(&VAR_15->napi);
 FUNC_5(&VAR_12->dev, ((void*)0));
 FUNC_28(&VAR_15->vio);

err_out_free_dev:
 FUNC_6(VAR_18);
 return VAR_22;
}
