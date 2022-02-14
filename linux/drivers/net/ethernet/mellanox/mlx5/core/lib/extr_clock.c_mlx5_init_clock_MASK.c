
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct mlx5_ib_clock_info {scalar_t__ overflow_period; int frac; int shift; int mult; int mask; int cycles; int nsec; } ;
struct TYPE_12__ {scalar_t__ n_pins; } ;
struct TYPE_8__ {int out_work; } ;
struct TYPE_10__ {int frac; int cycle_last; int nsec; } ;
struct TYPE_11__ {int shift; int mask; int mult; int read; } ;
struct mlx5_clock {int pps_nb; int * ptp; TYPE_5__ ptp_info; int overflow_work; scalar_t__ overflow_period; TYPE_1__ pps_info; TYPE_3__ tc; TYPE_4__ cycles; int nominal_c_mult; struct mlx5_core_dev* mdev; int lock; } ;
struct mlx5_core_dev {TYPE_2__* pdev; struct mlx5_ib_clock_info* clock_info; struct mlx5_clock clock; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct mlx5_core_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (unsigned long long,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_18 (struct mlx5_core_dev*,int *) ;
 int FUNC_19 (struct mlx5_core_dev*) ;
 int FUNC_20 (struct mlx5_clock*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int * FUNC_21 (TYPE_5__*,int *) ;
 int VAR_10 ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_3__*,TYPE_4__*,int ) ;

void FUNC_25(struct mlx5_core_dev *VAR_11)
{
 struct mlx5_clock *VAR_12 = &VAR_11->clock;
 u64 VAR_13;
 u64 VAR_14;
 u64 VAR_15 = 0;
 u32 VAR_16;

 VAR_16 = FUNC_4(VAR_11, VAR_5);
 if (!VAR_16) {
  FUNC_17(VAR_11, "invalid device_frequency_khz, aborting HW clock init\n");
  return;
 }
 FUNC_23(&VAR_12->lock);
 VAR_12->cycles.read = VAR_10;
 VAR_12->cycles.shift = VAR_2;
 VAR_12->cycles.mult = FUNC_8(VAR_16,
        VAR_12->cycles.shift);
 VAR_12->nominal_c_mult = VAR_12->cycles.mult;
 VAR_12->cycles.mask = FUNC_0(41);
 VAR_12->mdev = VAR_11;

 FUNC_24(&VAR_12->tc, &VAR_12->cycles,
    FUNC_15(FUNC_14()));
 VAR_13 = FUNC_10(~0ULL >> 1, VAR_12->cycles.mult);
 VAR_13 = FUNC_16(VAR_13, FUNC_11(VAR_12->cycles.mask, 3));

 VAR_14 = FUNC_9(&VAR_12->cycles, VAR_13,
     VAR_15, &VAR_15);
 FUNC_12(VAR_14, VAR_3 / VAR_1);
 VAR_12->overflow_period = VAR_14;

 VAR_11->clock_info =
  (struct mlx5_ib_clock_info *)FUNC_13(VAR_0);
 if (VAR_11->clock_info) {
  VAR_11->clock_info->nsec = VAR_12->tc.nsec;
  VAR_11->clock_info->cycles = VAR_12->tc.cycle_last;
  VAR_11->clock_info->mask = VAR_12->cycles.mask;
  VAR_11->clock_info->mult = VAR_12->nominal_c_mult;
  VAR_11->clock_info->shift = VAR_12->cycles.shift;
  VAR_11->clock_info->frac = VAR_12->tc.frac;
  VAR_11->clock_info->overflow_period = VAR_12->overflow_period;
 }

 FUNC_2(&VAR_12->pps_info.out_work, VAR_7);
 FUNC_1(&VAR_12->overflow_work, VAR_9);
 if (VAR_12->overflow_period)
  FUNC_22(&VAR_12->overflow_work, 0);
 else
  FUNC_17(VAR_11, "invalid overflow period, overflow_work is not scheduled\n");


 VAR_12->ptp_info = VAR_8;


 if (FUNC_6(VAR_11))
  FUNC_19(VAR_11);
 if (VAR_12->ptp_info.n_pins)
  FUNC_20(VAR_12);

 VAR_12->ptp = FUNC_21(&VAR_12->ptp_info,
     &VAR_11->pdev->dev);
 if (FUNC_3(VAR_12->ptp)) {
  FUNC_17(VAR_11, "ptp_clock_register failed %ld\n",
          FUNC_7(VAR_12->ptp));
  VAR_12->ptp = ((void*)0);
 }

 FUNC_5(&VAR_12->pps_nb, VAR_6, VAR_4);
 FUNC_18(VAR_11, &VAR_12->pps_nb);
}
