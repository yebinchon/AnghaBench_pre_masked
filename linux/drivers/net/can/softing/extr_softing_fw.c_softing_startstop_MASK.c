
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int restarts; } ;
struct can_bittiming {int brp; int sjw; int phase_seg1; int prop_seg; int phase_seg2; } ;
struct TYPE_13__ {int ctrlmode; TYPE_5__ can_stats; int state; struct can_bittiming bittiming; } ;
struct TYPE_8__ {scalar_t__ echo_get; scalar_t__ echo_put; scalar_t__ pending; } ;
struct softing_priv {int index; int output; TYPE_6__ can; TYPE_1__ tx; struct softing* card; } ;
struct TYPE_14__ {int lock; int up; } ;
struct TYPE_9__ {scalar_t__ pending; } ;
struct softing {struct net_device** net; TYPE_7__ fw; int * dpram; TYPE_4__* pdat; TYPE_3__* pdev; TYPE_2__ tx; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; } ;
typedef int msg ;
struct TYPE_11__ {int generation; } ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (struct net_device**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct can_frame*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct softing_priv* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct softing*,int) ;
 scalar_t__ FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct softing*,int,char*) ;
 int FUNC_17 (struct softing*) ;
 int FUNC_18 (struct net_device*,struct can_frame*,int ) ;
 int FUNC_19 (struct softing*) ;
 int FUNC_20 () ;

int FUNC_21(struct net_device *VAR_12, int VAR_13)
{
 int VAR_14;
 struct softing *VAR_15;
 struct softing_priv *VAR_16;
 struct net_device *VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 struct can_frame VAR_21;
 const struct can_bittiming *VAR_22;

 VAR_16 = FUNC_9(VAR_12);
 VAR_15 = VAR_16->card;

 if (!VAR_15->fw.up)
  return -VAR_11;

 VAR_14 = FUNC_7(&VAR_15->fw.lock);
 if (VAR_14)
  return VAR_14;

 VAR_18 = 0;
 if (VAR_12 && VAR_13)

  VAR_18 |= (1 << VAR_16->index);

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_15->net); ++VAR_19) {
  VAR_17 = VAR_15->net[VAR_19];
  if (!VAR_17)
   continue;
  VAR_16 = FUNC_9(VAR_17);

  if (VAR_12 != VAR_17)
   FUNC_11(VAR_17);

  if (FUNC_10(VAR_17)) {
   if (VAR_12 != VAR_17)
    VAR_18 |= (1 << VAR_19);
   VAR_16->tx.pending = 0;
   VAR_16->tx.echo_put = 0;
   VAR_16->tx.echo_get = 0;
   FUNC_1(VAR_17);
  }
  VAR_16->can.state = VAR_5;
 }
 VAR_15->tx.pending = 0;

 FUNC_14(VAR_15, 0);
 VAR_14 = FUNC_19(VAR_15);
 if (VAR_14)
  goto failed;
 if (!VAR_18)

  goto card_done;

 if ((VAR_18 & 1) && (VAR_18 & 2)
   && (FUNC_15(VAR_15->net[0])
    != FUNC_15(VAR_15->net[1]))) {
  FUNC_2(&VAR_15->pdev->dev,
    "err_reporting flag differs for busses\n");
  goto invalid;
 }
 VAR_20 = 0;
 if (VAR_18 & 1) {
  VAR_17 = VAR_15->net[0];
  VAR_16 = FUNC_9(VAR_17);
  VAR_20 += FUNC_15(VAR_17);

  VAR_22 = &VAR_16->can.bittiming;
  FUNC_4(VAR_22->brp, &VAR_15->dpram[VAR_6 + 2]);
  FUNC_4(VAR_22->sjw, &VAR_15->dpram[VAR_6 + 4]);
  FUNC_4(VAR_22->phase_seg1 + VAR_22->prop_seg,
    &VAR_15->dpram[VAR_6 + 6]);
  FUNC_4(VAR_22->phase_seg2, &VAR_15->dpram[VAR_6 + 8]);
  FUNC_4((VAR_16->can.ctrlmode & VAR_0) ? 1 : 0,
    &VAR_15->dpram[VAR_6 + 10]);
  VAR_14 = FUNC_16(VAR_15, 1, "initialize_chip[0]");
  if (VAR_14 < 0)
   goto failed;

  FUNC_4(0, &VAR_15->dpram[VAR_6 + 2]);
  FUNC_4(0, &VAR_15->dpram[VAR_6 + 4]);
  VAR_14 = FUNC_16(VAR_15, 3, "set_mode[0]");
  if (VAR_14 < 0)
   goto failed;


  FUNC_4(0x0000, &VAR_15->dpram[VAR_6 + 2]);
  FUNC_4(0x07ff, &VAR_15->dpram[VAR_6 + 4]);

  FUNC_4(0x0000, &VAR_15->dpram[VAR_6 + 6]);
  FUNC_4(0xffff, &VAR_15->dpram[VAR_6 + 8]);
  FUNC_4(0x0000, &VAR_15->dpram[VAR_6 + 10]);
  FUNC_4(0x1fff, &VAR_15->dpram[VAR_6 + 12]);
  VAR_14 = FUNC_16(VAR_15, 7, "set_filter[0]");
  if (VAR_14 < 0)
   goto failed;

  FUNC_4(VAR_16->output, &VAR_15->dpram[VAR_6 + 2]);
  VAR_14 = FUNC_16(VAR_15, 5, "set_output[0]");
  if (VAR_14 < 0)
   goto failed;
 }
 if (VAR_18 & 2) {
  VAR_17 = VAR_15->net[1];
  VAR_16 = FUNC_9(VAR_17);
  VAR_20 += FUNC_15(VAR_17);

  VAR_22 = &VAR_16->can.bittiming;
  FUNC_4(VAR_22->brp, &VAR_15->dpram[VAR_6 + 2]);
  FUNC_4(VAR_22->sjw, &VAR_15->dpram[VAR_6 + 4]);
  FUNC_4(VAR_22->phase_seg1 + VAR_22->prop_seg,
    &VAR_15->dpram[VAR_6 + 6]);
  FUNC_4(VAR_22->phase_seg2, &VAR_15->dpram[VAR_6 + 8]);
  FUNC_4((VAR_16->can.ctrlmode & VAR_0) ? 1 : 0,
    &VAR_15->dpram[VAR_6 + 10]);
  VAR_14 = FUNC_16(VAR_15, 2, "initialize_chip[1]");
  if (VAR_14 < 0)
   goto failed;

  FUNC_4(0, &VAR_15->dpram[VAR_6 + 2]);
  FUNC_4(0, &VAR_15->dpram[VAR_6 + 4]);
  VAR_14 = FUNC_16(VAR_15, 4, "set_mode[1]");
  if (VAR_14 < 0)
   goto failed;


  FUNC_4(0x0000, &VAR_15->dpram[VAR_6 + 2]);
  FUNC_4(0x07ff, &VAR_15->dpram[VAR_6 + 4]);

  FUNC_4(0x0000, &VAR_15->dpram[VAR_6 + 6]);
  FUNC_4(0xffff, &VAR_15->dpram[VAR_6 + 8]);
  FUNC_4(0x0000, &VAR_15->dpram[VAR_6 + 10]);
  FUNC_4(0x1fff, &VAR_15->dpram[VAR_6 + 12]);
  VAR_14 = FUNC_16(VAR_15, 8, "set_filter[1]");
  if (VAR_14 < 0)
   goto failed;

  FUNC_4(VAR_16->output, &VAR_15->dpram[VAR_6 + 2]);
  VAR_14 = FUNC_16(VAR_15, 6, "set_output[1]");
  if (VAR_14 < 0)
   goto failed;
 }
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 2]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 4]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 6]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 8]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 10]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 12]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 14]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 16]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 18]);
 FUNC_4(1, &VAR_15->dpram[VAR_6 + 20]);
 VAR_14 = FUNC_16(VAR_15, 17, "initialize_interface");
 if (VAR_14 < 0)
  goto failed;

 VAR_14 = FUNC_16(VAR_15, 36, "enable_fifo");
 if (VAR_14 < 0)
  goto failed;

 VAR_14 = FUNC_16(VAR_15, 13, "fifo_tx_ack[0]");
 if (VAR_14 < 0)
  goto failed;

 VAR_14 = FUNC_16(VAR_15, 14, "fifo_tx_ack[1]");
 if (VAR_14 < 0)
  goto failed;

 VAR_14 = FUNC_16(VAR_15, 11, "start_chip");
 if (VAR_14 < 0)
  goto failed;
 FUNC_5(0, &VAR_15->dpram[VAR_7]);
 FUNC_5(0, &VAR_15->dpram[VAR_8]);
 if (VAR_15->pdat->generation < 2) {
  FUNC_5(0, &VAR_15->dpram[VAR_9]);

  FUNC_20();
 }

 FUNC_17(VAR_15);






 FUNC_6(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.can_id = VAR_2 | VAR_3;
 VAR_21.can_dlc = VAR_1;
 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_15->net); ++VAR_19) {
  if (!(VAR_18 & (1 << VAR_19)))
   continue;
  VAR_17 = VAR_15->net[VAR_19];
  if (!VAR_17)
   continue;
  VAR_16 = FUNC_9(VAR_17);
  VAR_16->can.state = VAR_4;
  FUNC_13(VAR_17);
  if (VAR_12 != VAR_17) {

   FUNC_18(VAR_17, &VAR_21, 0);
   ++VAR_16->can.can_stats.restarts;
  }
  FUNC_12(VAR_17);
 }


 VAR_14 = FUNC_14(VAR_15, 1);
 if (VAR_14)
  goto failed;
card_done:
 FUNC_8(&VAR_15->fw.lock);
 return 0;
invalid:
 VAR_14 = -VAR_10;
failed:
 FUNC_14(VAR_15, 0);
 FUNC_19(VAR_15);
 FUNC_8(&VAR_15->fw.lock);

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_15->net); ++VAR_19) {
  VAR_17 = VAR_15->net[VAR_19];
  if (!VAR_17)
   continue;
  FUNC_3(VAR_17);
 }
 return VAR_14;
}
