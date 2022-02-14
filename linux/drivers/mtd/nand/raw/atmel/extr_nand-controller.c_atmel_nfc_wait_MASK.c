
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; int smc; } ;
struct TYPE_4__ {int wait; int errors; } ;
struct atmel_hsmc_nand_controller {TYPE_1__ base; TYPE_2__ op; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct atmel_hsmc_nand_controller *VAR_11, bool VAR_12,
     unsigned int VAR_13)
{
 int VAR_14;

 if (!VAR_13)
  VAR_13 = VAR_8;

 if (VAR_12) {
  u32 VAR_15;

  VAR_14 = FUNC_4(VAR_11->base.smc,
            VAR_2, VAR_15,
            FUNC_0(&VAR_11->op,
         VAR_15),
            0, VAR_13 * 1000);
 } else {
  FUNC_2(&VAR_11->complete);
  FUNC_5(VAR_11->base.smc, VAR_1,
        VAR_11->op.wait | VAR_5);
  VAR_14 = FUNC_6(&VAR_11->complete,
      FUNC_3(VAR_13));
  if (!VAR_14)
   VAR_14 = -VAR_10;
  else
   VAR_14 = 0;

  FUNC_5(VAR_11->base.smc, VAR_0, 0xffffffff);
 }

 if (VAR_11->op.errors & VAR_4) {
  FUNC_1(VAR_11->base.dev, "Waiting NAND R/B Timeout\n");
  VAR_14 = -VAR_10;
 }

 if (VAR_11->op.errors & VAR_7) {
  FUNC_1(VAR_11->base.dev, "Access to an undefined area\n");
  VAR_14 = -VAR_9;
 }

 if (VAR_11->op.errors & VAR_3) {
  FUNC_1(VAR_11->base.dev, "Access while busy\n");
  VAR_14 = -VAR_9;
 }

 if (VAR_11->op.errors & VAR_6) {
  FUNC_1(VAR_11->base.dev, "Wrong access size\n");
  VAR_14 = -VAR_9;
 }

 return VAR_14;
}
