
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vnet_port {int* raddr; int switch_port; int tso; int vio; int napi; int clean_timer; int hash; int list; scalar_t__ tsolen; struct vnet* vp; } ;
struct vnet {TYPE_1__* dev; int lock; int * port_hash; int port_list; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {int dev; int mp; } ;
struct mdesc_handle {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vnet*) ;
 int VAR_4 ;
 int FUNC_4 (struct vnet*) ;
 int VAR_5 ;
 int FUNC_5 (int *,struct vnet_port*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct vnet_port*) ;
 struct vnet_port* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int* FUNC_11 (struct mdesc_handle*,int ,char*,int*) ;
 struct mdesc_handle* FUNC_12 () ;
 int FUNC_13 (struct mdesc_handle*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*,int ,int*,char*) ;
 char* VAR_6 ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (struct vnet_port*) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int *,struct vio_dev*,int ,int ,int ,int *,int ) ;
 int FUNC_23 (int *,int *,struct vnet_port*) ;
 int FUNC_24 (int *) ;
 struct vnet* FUNC_25 (struct mdesc_handle*,int ,struct vio_dev*) ;
 size_t FUNC_26 (int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_27(struct vio_dev *VAR_12, const struct vio_device_id *VAR_13)
{
 struct mdesc_handle *VAR_14;
 struct vnet_port *VAR_15;
 unsigned long VAR_16;
 struct vnet *VAR_17;
 const u64 *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_14 = FUNC_12();

 VAR_17 = FUNC_25(VAR_14, VAR_12->mp, VAR_12);
 if (FUNC_3(VAR_17)) {
  FUNC_16("Cannot find port parent vnet\n");
  VAR_21 = FUNC_4(VAR_17);
  goto err_out_put_mdesc;
 }

 VAR_18 = FUNC_11(VAR_14, VAR_12->mp, VAR_6, &VAR_19);
 VAR_21 = -VAR_0;
 if (!VAR_18) {
  FUNC_16("Port lacks %s property\n", VAR_6);
  goto err_out_put_mdesc;
 }

 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_3);
 VAR_21 = -VAR_1;
 if (!VAR_15)
  goto err_out_put_mdesc;

 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
  VAR_15->raddr[VAR_20] = (*VAR_18 >> (5 - VAR_20) * 8) & 0xff;

 VAR_15->vp = VAR_17;

 VAR_21 = FUNC_22(&VAR_15->vio, VAR_12, VAR_5,
         VAR_10, FUNC_0(VAR_10),
         &VAR_11, VAR_17->dev->name);
 if (VAR_21)
  goto err_out_free_port;

 VAR_21 = FUNC_23(&VAR_15->vio, &VAR_9, VAR_15);
 if (VAR_21)
  goto err_out_free_port;

 FUNC_15(VAR_15->vp->dev, &VAR_15->napi, VAR_8,
         VAR_4);

 FUNC_1(&VAR_15->hash);
 FUNC_2(&VAR_15->list);

 VAR_22 = 0;
 if (FUNC_11(VAR_14, VAR_12->mp, "switch-port", ((void*)0)))
  VAR_22 = 1;
 VAR_15->switch_port = VAR_22;
 VAR_15->tso = 1;
 VAR_15->tsolen = 0;

 FUNC_18(&VAR_17->lock, VAR_16);
 if (VAR_22)
  FUNC_9(&VAR_15->list, &VAR_17->port_list);
 else
  FUNC_10(&VAR_15->list, &VAR_17->port_list);
 FUNC_6(&VAR_15->hash,
      &VAR_17->port_hash[FUNC_26(VAR_15->raddr)]);
 FUNC_20(VAR_15);
 FUNC_19(&VAR_17->lock, VAR_16);

 FUNC_5(&VAR_12->dev, VAR_15);

 FUNC_17("%s: PORT ( remote-mac %pM%s )\n",
  VAR_17->dev->name, VAR_15->raddr, VAR_22 ? " switch-port" : "");

 FUNC_21(&VAR_15->clean_timer, VAR_7, 0);

 FUNC_14(&VAR_15->napi);
 FUNC_24(&VAR_15->vio);

 FUNC_13(VAR_14);

 return 0;

err_out_free_port:
 FUNC_7(VAR_15);

err_out_put_mdesc:
 FUNC_13(VAR_14);
 return VAR_21;
}
