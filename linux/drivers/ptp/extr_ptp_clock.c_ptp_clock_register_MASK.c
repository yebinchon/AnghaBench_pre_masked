
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptp_clock_info {scalar_t__ n_alarm; int owner; scalar_t__ pps; scalar_t__ do_aux_work; } ;
struct TYPE_4__ {int release; int ops; } ;
struct TYPE_3__ {int lock; } ;
struct ptp_clock {int index; int pincfg_mux; int tsevq_mux; scalar_t__ kworker; int devid; scalar_t__ pps_source; TYPE_2__ clock; scalar_t__ dev; int pin_attr_groups; int aux_work; struct ptp_clock_info* info; int tsev_wq; TYPE_1__ tsevq; } ;
struct pps_source_info {int owner; int mode; int name; } ;
struct device {int dummy; } ;
typedef int pps ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptp_clock* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,struct device*,int ,struct ptp_clock*,int ,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,scalar_t__,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ptp_clock*) ;
 scalar_t__ FUNC_11 (int ,char*,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,int ) ;
 struct ptp_clock* FUNC_14 (int,int ) ;
 int FUNC_15 (struct pps_source_info*,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_19 (struct pps_source_info*,int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_22 (struct ptp_clock*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_23 (struct ptp_clock*) ;
 int FUNC_24 (int ,int ,char*,int) ;
 int FUNC_25 (int *) ;

struct ptp_clock *FUNC_26(struct ptp_clock_info *VAR_14,
         struct device *VAR_15)
{
 struct ptp_clock *VAR_16;
 int VAR_17 = 0, VAR_18, VAR_19 = FUNC_2(VAR_13);

 if (VAR_14->n_alarm > VAR_5)
  return FUNC_0(-VAR_0);


 VAR_17 = -VAR_1;
 VAR_16 = FUNC_14(sizeof(struct ptp_clock), VAR_2);
 if (VAR_16 == ((void*)0))
  goto no_memory;

 VAR_18 = FUNC_7(&VAR_12, 0, VAR_3 + 1, VAR_2);
 if (VAR_18 < 0) {
  VAR_17 = VAR_18;
  goto no_slot;
 }

 VAR_16->clock.ops = VAR_11;
 VAR_16->clock.release = VAR_8;
 VAR_16->info = VAR_14;
 VAR_16->devid = FUNC_3(VAR_19, VAR_18);
 VAR_16->index = VAR_18;
 FUNC_25(&VAR_16->tsevq.lock);
 FUNC_17(&VAR_16->tsevq_mux);
 FUNC_17(&VAR_16->pincfg_mux);
 FUNC_9(&VAR_16->tsev_wq);

 if (VAR_16->info->do_aux_work) {
  FUNC_13(&VAR_16->aux_work, VAR_9);
  VAR_16->kworker = FUNC_11(0, "ptp%d", VAR_16->index);
  if (FUNC_1(VAR_16->kworker)) {
   VAR_17 = FUNC_4(VAR_16->kworker);
   FUNC_21("failed to create ptp aux_worker %d\n", VAR_17);
   goto kworker_err;
  }
 }

 VAR_17 = FUNC_23(VAR_16);
 if (VAR_17)
  goto no_pin_groups;


 VAR_16->dev = FUNC_5(VAR_10, VAR_15, VAR_16->devid,
          VAR_16, VAR_16->pin_attr_groups,
          "ptp%d", VAR_16->index);
 if (FUNC_1(VAR_16->dev)) {
  VAR_17 = FUNC_4(VAR_16->dev);
  goto no_device;
 }


 if (VAR_14->pps) {
  struct pps_source_info VAR_20;
  FUNC_15(&VAR_20, 0, sizeof(VAR_20));
  FUNC_24(VAR_20.name, VAR_4, "ptp%d", VAR_18);
  VAR_20.mode = VAR_7;
  VAR_20.owner = VAR_14->owner;
  VAR_16->pps_source = FUNC_19(&VAR_20, VAR_6);
  if (FUNC_1(VAR_16->pps_source)) {
   VAR_17 = FUNC_4(VAR_16->pps_source);
   FUNC_21("failed to register pps source\n");
   goto no_pps;
  }
 }


 VAR_17 = FUNC_18(&VAR_16->clock, VAR_16->devid);
 if (VAR_17) {
  FUNC_21("failed to create posix clock\n");
  goto no_clock;
 }

 return VAR_16;

no_clock:
 if (VAR_16->pps_source)
  FUNC_20(VAR_16->pps_source);
no_pps:
 FUNC_6(VAR_10, VAR_16->devid);
no_device:
 FUNC_22(VAR_16);
no_pin_groups:
 if (VAR_16->kworker)
  FUNC_12(VAR_16->kworker);
kworker_err:
 FUNC_16(&VAR_16->tsevq_mux);
 FUNC_16(&VAR_16->pincfg_mux);
 FUNC_8(&VAR_12, VAR_18);
no_slot:
 FUNC_10(VAR_16);
no_memory:
 return FUNC_0(VAR_17);
}
