
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ bus_width; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct mmc_command {int busy_timeout; int flags; int opcode; int arg; TYPE_2__* data; } ;
struct meson_mx_mmc_host {int slot_id; int cmd_timeout; int irq_lock; scalar_t__ base; struct mmc_command* cmd; } ;
struct TYPE_4__ {int blocks; unsigned int blksz; int flags; scalar_t__ bytes_xfered; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;




 scalar_t__ VAR_24 ;
 int FUNC_2 (struct mmc_host*,int ,int ,int ) ;
 struct meson_mx_mmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_command*) ;
 int FUNC_5 (int *,scalar_t__) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct mmc_host *VAR_25,
       struct mmc_command *VAR_26)
{
 struct meson_mx_mmc_host *VAR_27 = FUNC_3(VAR_25);
 unsigned int VAR_28;
 unsigned long VAR_29, VAR_30;
 u32 VAR_31, VAR_32 = 0, VAR_33 = 0;

 VAR_27->cmd = VAR_26;

 if (VAR_26->busy_timeout)
  VAR_30 = FUNC_6(VAR_26->busy_timeout);
 else
  VAR_30 = FUNC_6(1000);

 switch (FUNC_4(VAR_26)) {
 case 131:
 case 130:
 case 128:

  VAR_32 |= FUNC_1(VAR_13, 45);
  break;
 case 129:

  VAR_32 |= FUNC_1(VAR_13, 133);
  VAR_32 |= VAR_17;
  break;
 default:
  break;
 }

 if (!(VAR_26->flags & VAR_23))
  VAR_32 |= VAR_19;

 if (VAR_26->flags & VAR_22)
  VAR_32 |= VAR_12;

 if (VAR_26->data) {
  VAR_32 |= FUNC_1(VAR_16,
       (VAR_26->data->blocks - 1));

  VAR_28 = VAR_26->data->blksz * VAR_0;
  if (VAR_25->ios.bus_width == VAR_20)
   VAR_28 += VAR_10 * 4;
  else
   VAR_28 += VAR_10 * 1;

  VAR_33 |= FUNC_1(VAR_3,
      VAR_28);

  if (VAR_26->data->flags & VAR_21)
   VAR_32 |= VAR_15;
  else
   VAR_32 |= VAR_18;

  VAR_26->data->bytes_xfered = 0;
 }

 VAR_32 |= FUNC_1(VAR_14,
      (0x40 | VAR_26->opcode));

 FUNC_8(&VAR_27->irq_lock, VAR_29);

 VAR_31 = FUNC_7(VAR_27->base + VAR_8);
 VAR_31 &= ~VAR_9;
 VAR_31 |= FUNC_1(VAR_9, VAR_27->slot_id);
 VAR_31 |= FUNC_0(31);
 FUNC_10(VAR_31, VAR_27->base + VAR_8);


 FUNC_2(VAR_25, VAR_4,
          VAR_5,
          VAR_5);


 FUNC_2(VAR_25, VAR_6,
          VAR_7,
          VAR_7);

 FUNC_10(VAR_26->arg, VAR_27->base + VAR_1);
 FUNC_10(VAR_33, VAR_27->base + VAR_2);
 FUNC_10(VAR_32, VAR_27->base + VAR_11);

 FUNC_9(&VAR_27->irq_lock, VAR_29);

 FUNC_5(&VAR_27->cmd_timeout, VAR_24 + VAR_30);
}
