
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ops; } ;
struct TYPE_7__ {struct fwtty_port* callback_data; int address_callback; scalar_t__ length; } ;
struct fwtty_port {int loopback; struct fwtty_port** ports; TYPE_1__ port; int kref; int index; int list; int debugfs; struct device* device; TYPE_5__ rx_handler; int peer; int tx_fifo; int max_payload; int wait_tx; int hangup; int emit_breaks; int drain; int lock; struct fwtty_port* serial; int peer_list; struct fw_card* card; } ;
struct fw_unit {int device; } ;
struct fw_serial {int loopback; struct fw_serial** ports; TYPE_1__ port; int kref; int index; int list; int debugfs; struct device* device; TYPE_5__ rx_handler; int peer; int tx_fifo; int max_payload; int wait_tx; int hangup; int emit_breaks; int drain; int lock; struct fw_serial* serial; int peer_list; struct fw_card* card; } ;
struct fw_device {struct fw_card* card; } ;
struct fw_card {scalar_t__ guid; int * device; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int,int ,struct fwtty_port*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*,int *) ;
 int VAR_6 ;
 struct fw_device* FUNC_13 (struct fw_unit*) ;
 int VAR_7 ;
 int FUNC_14 (struct fwtty_port*,struct fw_unit*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (struct fw_unit**,char*,...) ;
 int FUNC_16 (struct fw_unit**,char*,int ,unsigned long long) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_17 (struct fwtty_port*) ;
 int VAR_18 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct fwtty_port*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 struct fwtty_port* FUNC_22 (int,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct fwtty_port*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_27 (int *) ;
 int FUNC_28 (TYPE_1__*,int) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*) ;
 struct device* FUNC_31 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_32 (int ,int ) ;

__attribute__((used)) static int FUNC_33(struct fw_unit *VAR_21)
{
 struct fw_device *VAR_22 = FUNC_13(VAR_21);
 struct fw_card *VAR_23 = VAR_22->card;
 struct fw_serial *VAR_24;
 struct fwtty_port *VAR_25;
 struct device *VAR_26;
 int VAR_27, VAR_28;
 int VAR_29;

 VAR_24 = FUNC_22(sizeof(*VAR_24), VAR_3);
 if (!VAR_24)
  return -VAR_0;

 FUNC_20(&VAR_24->kref);
 VAR_24->card = VAR_23;
 FUNC_1(&VAR_24->peer_list);

 for (VAR_27 = 0; VAR_27 < VAR_19; ++VAR_27) {
  VAR_25 = FUNC_22(sizeof(*VAR_25), VAR_3);
  if (!VAR_25) {
   VAR_29 = -VAR_0;
   goto free_ports;
  }
  FUNC_30(&VAR_25->port);
  VAR_25->index = VAR_1;
  VAR_25->port.ops = &VAR_17;
  VAR_25->serial = VAR_24;
  FUNC_28(&VAR_25->port, 128 * 1024);

  FUNC_27(&VAR_25->lock);
  FUNC_0(&VAR_25->drain, VAR_12);
  FUNC_0(&VAR_25->emit_breaks, VAR_14);
  FUNC_2(&VAR_25->hangup, VAR_11);
  FUNC_18(&VAR_25->wait_tx);
  VAR_25->max_payload = FUNC_23(VAR_4);
  FUNC_11(&VAR_25->tx_fifo);

  FUNC_6(VAR_25->peer, ((void*)0));
  VAR_24->ports[VAR_27] = VAR_25;


  VAR_25->rx_handler.length = VAR_2 + 4;
  VAR_25->rx_handler.address_callback = VAR_16;
  VAR_25->rx_handler.callback_data = VAR_25;




  VAR_29 = FUNC_12(&VAR_25->rx_handler,
        &VAR_6);
  if (VAR_29) {
   FUNC_19(VAR_25);
   goto free_ports;
  }
 }


 VAR_29 = FUNC_17(VAR_24);
 if (VAR_29) {
  FUNC_15(&VAR_21, "no space in port table\n");
  goto free_ports;
 }

 for (VAR_28 = 0; VAR_28 < VAR_20; ++VAR_28) {
  VAR_26 = FUNC_31(&VAR_24->ports[VAR_28]->port,
         VAR_13,
         VAR_24->ports[VAR_28]->index,
         VAR_23->device);
  if (FUNC_3(VAR_26)) {
   VAR_29 = FUNC_5(VAR_26);
   FUNC_15(&VAR_21, "register tty device error (%d)\n",
      VAR_29);
   goto unregister_ttys;
  }

  VAR_24->ports[VAR_28]->device = VAR_26;
 }


 if (VAR_5) {
  struct device *VAR_30;

  VAR_30 = FUNC_31(&VAR_24->ports[VAR_28]->port,
          VAR_7,
          FUNC_26(VAR_24->ports[VAR_28]),
          VAR_23->device);
  if (FUNC_3(VAR_30)) {
   VAR_29 = FUNC_5(VAR_30);
   FUNC_15(&VAR_21, "create loop device failed (%d)\n",
      VAR_29);
   goto unregister_ttys;
  }
  VAR_24->ports[VAR_28]->device = VAR_30;
  VAR_24->ports[VAR_28]->loopback = 1;
 }

 if (!FUNC_4(VAR_8)) {
  VAR_24->debugfs = FUNC_7(FUNC_10(&VAR_21->device),
           VAR_8);
  if (!FUNC_4(VAR_24->debugfs)) {
   FUNC_8("peers", 0444, VAR_24->debugfs,
         VAR_24, &VAR_15);
   FUNC_8("stats", 0444, VAR_24->debugfs,
         VAR_24, &VAR_18);
  }
 }

 FUNC_24(&VAR_24->list, &VAR_10);

 FUNC_16(&VAR_21, "TTY over FireWire on device %s (guid %016llx)\n",
       FUNC_10(VAR_23->device), (unsigned long long)VAR_23->guid);

 VAR_29 = FUNC_14(VAR_24, VAR_21);
 if (!VAR_29)
  return 0;

 FUNC_15(&VAR_21, "unable to add peer unit device (%d)\n", VAR_29);


 FUNC_9(VAR_24->debugfs);

 FUNC_25(&VAR_24->list);
 if (VAR_5)
  FUNC_32(VAR_7,
          FUNC_26(VAR_24->ports[VAR_28]));
unregister_ttys:
 for (--VAR_28; VAR_28 >= 0; --VAR_28)
  FUNC_32(VAR_13, VAR_24->ports[VAR_28]->index);
 FUNC_21(&VAR_24->kref, VAR_9);
 return VAR_29;

free_ports:
 for (--VAR_27; VAR_27 >= 0; --VAR_27) {
  FUNC_29(&VAR_24->ports[VAR_27]->port);
  FUNC_19(VAR_24->ports[VAR_27]);
 }
 FUNC_19(VAR_24);
 return VAR_29;
}
