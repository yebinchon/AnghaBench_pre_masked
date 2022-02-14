
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* addrs; int ncmds; scalar_t__ naddrs; scalar_t__ data; int wait; int cs; int * cmds; } ;
struct TYPE_3__ {int dev; int smc; } ;
struct atmel_hsmc_nand_controller {TYPE_2__ op; TYPE_1__ base; int io; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct atmel_hsmc_nand_controller*,int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct atmel_hsmc_nand_controller *VAR_10, bool VAR_11)
{
 u8 *VAR_12 = VAR_10->op.addrs;
 unsigned int VAR_13 = 0;
 u32 VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_10->op.wait = VAR_2;

 for (VAR_16 = 0; VAR_16 < VAR_10->op.ncmds; VAR_16++)
  VAR_13 |= FUNC_1(VAR_16, VAR_10->op.cmds[VAR_16]);

 if (VAR_10->op.naddrs == VAR_5)
  FUNC_7(VAR_10->base.smc, VAR_0, *VAR_12++);

 VAR_13 |= FUNC_2(VAR_10->op.cs) |
       FUNC_0(VAR_10->op.naddrs);

 if (VAR_10->op.ncmds > 1)
  VAR_13 |= VAR_8;

 VAR_14 = VAR_12[0] | (VAR_12[1] << 8) | (VAR_12[2] << 16) |
        (VAR_12[3] << 24);

 if (VAR_10->op.data != VAR_7) {
  VAR_13 |= VAR_4;
  VAR_10->op.wait |= VAR_3;

  if (VAR_10->op.data == VAR_9)
   VAR_13 |= VAR_6;
 }


 FUNC_6(VAR_10->base.smc, VAR_1, &VAR_15);


 FUNC_7(VAR_10->io, VAR_13, VAR_14);

 VAR_17 = FUNC_3(VAR_10, VAR_11, 0);
 if (VAR_17)
  FUNC_4(VAR_10->base.dev,
   "Failed to send NAND command (err = %d)!",
   VAR_17);


 FUNC_5(&VAR_10->op, 0, sizeof(VAR_10->op));

 return VAR_17;
}
