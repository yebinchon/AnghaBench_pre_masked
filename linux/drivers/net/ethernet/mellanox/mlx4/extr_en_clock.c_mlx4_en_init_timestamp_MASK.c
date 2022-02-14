
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int mult; int shift; int mask; int read; } ;
struct mlx4_en_dev {int * ptp_clock; TYPE_2__* pdev; TYPE_4__ ptp_clock_info; int clock_lock; TYPE_3__ cycles; int clock; int nominal_c_mult; struct mlx4_dev* dev; } ;
struct TYPE_7__ {int hca_core_clock; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct mlx4_en_dev*,char*) ;
 int FUNC_8 (struct mlx4_en_dev*,char*) ;
 int * FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int,char*) ;
 int FUNC_12 (int *,TYPE_3__*,int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

void FUNC_15(struct mlx4_en_dev *VAR_2)
{
 struct mlx4_dev *VAR_3 = VAR_2->dev;
 unsigned long VAR_4;





 if (VAR_2->ptp_clock)
  return;

 FUNC_10(&VAR_2->clock_lock);

 FUNC_6(&VAR_2->cycles, 0, sizeof(VAR_2->cycles));
 VAR_2->cycles.read = VAR_1;
 VAR_2->cycles.mask = FUNC_0(48);
 VAR_2->cycles.shift = FUNC_3(VAR_3->caps.hca_core_clock);
 VAR_2->cycles.mult =
  FUNC_2(1000 * VAR_3->caps.hca_core_clock, VAR_2->cycles.shift);
 VAR_2->nominal_c_mult = VAR_2->cycles.mult;

 FUNC_13(&VAR_2->clock_lock, VAR_4);
 FUNC_12(&VAR_2->clock, &VAR_2->cycles,
    FUNC_5(FUNC_4()));
 FUNC_14(&VAR_2->clock_lock, VAR_4);


 VAR_2->ptp_clock_info = VAR_0;
 FUNC_11(VAR_2->ptp_clock_info.name, 16, "mlx4 ptp");

 VAR_2->ptp_clock = FUNC_9(&VAR_2->ptp_clock_info,
          &VAR_2->pdev->dev);
 if (FUNC_1(VAR_2->ptp_clock)) {
  VAR_2->ptp_clock = ((void*)0);
  FUNC_7(VAR_2, "ptp_clock_register failed\n");
 } else if (VAR_2->ptp_clock) {
  FUNC_8(VAR_2, "registered PHC clock\n");
 }

}
