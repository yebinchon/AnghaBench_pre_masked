
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mask; int mult; int shift; int read; } ;
struct mlxsw_sp_ptp_clock {int overflow_work; int ptp; int ptp_info; int overflow_period; TYPE_1__ cycles; int tc; int core; int nominal_c_mult; int lock; } ;
struct mlxsw_sp {int core; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct mlxsw_sp_ptp_clock* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_8 (struct device*,char*,int) ;
 int FUNC_9 (unsigned long long,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct mlxsw_sp_ptp_clock*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 struct mlxsw_sp_ptp_clock* FUNC_14 (int,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,struct device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,TYPE_1__*,int ) ;

struct mlxsw_sp_ptp_clock *
FUNC_21(struct mlxsw_sp *VAR_8, struct device *VAR_9)
{
 u64 VAR_10, VAR_11, VAR_12 = 0;
 struct mlxsw_sp_ptp_clock *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_14(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return FUNC_1(-VAR_0);

 FUNC_19(&VAR_13->lock);
 VAR_13->cycles.read = VAR_7;
 VAR_13->cycles.shift = VAR_2;
 VAR_13->cycles.mult = FUNC_6(VAR_3,
        VAR_13->cycles.shift);
 VAR_13->nominal_c_mult = VAR_13->cycles.mult;
 VAR_13->cycles.mask = FUNC_0(VAR_4);
 VAR_13->core = VAR_8->core;

 FUNC_20(&VAR_13->tc, &VAR_13->cycles,
    FUNC_13(FUNC_12()));
 VAR_10 = FUNC_9(~0ULL >> 1, VAR_13->cycles.mult);
 VAR_10 = FUNC_15(VAR_10, FUNC_10(VAR_13->cycles.mask, 3));

 VAR_11 = FUNC_7(&VAR_13->cycles, VAR_10, 0, &VAR_12);
 VAR_13->overflow_period = FUNC_17(VAR_11);

 FUNC_2(&VAR_13->overflow_work, VAR_6);
 FUNC_16(&VAR_13->overflow_work, 0);

 VAR_13->ptp_info = VAR_5;
 VAR_13->ptp = FUNC_18(&VAR_13->ptp_info, VAR_9);
 if (FUNC_3(VAR_13->ptp)) {
  VAR_14 = FUNC_4(VAR_13->ptp);
  FUNC_8(VAR_9, "ptp_clock_register failed %d\n", VAR_14);
  goto err_ptp_clock_register;
 }

 return VAR_13;

err_ptp_clock_register:
 FUNC_5(&VAR_13->overflow_work);
 FUNC_11(VAR_13);
 return FUNC_1(VAR_14);
}
