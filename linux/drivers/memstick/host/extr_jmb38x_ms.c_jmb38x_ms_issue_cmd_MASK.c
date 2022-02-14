
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct memstick_host {int dev; } ;
struct jmb38x_ms_host {int cmd_flags; unsigned int* io_word; scalar_t__ ifmode; scalar_t__ addr; TYPE_3__* req; scalar_t__ timeout_jiffies; int timer; TYPE_2__* chip; scalar_t__ io_pos; scalar_t__ block_pos; } ;
struct TYPE_10__ {unsigned int length; } ;
struct TYPE_9__ {int error; int tpc; scalar_t__ data_dir; unsigned int data_len; TYPE_4__ sg; scalar_t__ long_data; scalar_t__ need_card_int; } ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 unsigned int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_4__*,int,int ) ;
 scalar_t__ VAR_31 ;
 int FUNC_2 (struct jmb38x_ms_host*) ;
 struct jmb38x_ms_host* FUNC_3 (struct memstick_host*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_32 ;
 unsigned int FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (TYPE_4__*) ;
 unsigned int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct memstick_host *VAR_33)
{
 struct jmb38x_ms_host *VAR_34 = FUNC_3(VAR_33);
 unsigned int VAR_35, VAR_36, VAR_37;

 if (!(VAR_22 & FUNC_5(VAR_34->addr + VAR_21))) {
  FUNC_0(&VAR_33->dev, "no media status\n");
  VAR_34->req->error = -VAR_10;
  return VAR_34->req->error;
 }

 FUNC_0(&VAR_33->dev, "control %08x\n", FUNC_5(VAR_34->addr + VAR_11));
 FUNC_0(&VAR_33->dev, "status %08x\n", FUNC_5(VAR_34->addr + VAR_14));
 FUNC_0(&VAR_33->dev, "hstatus %08x\n", FUNC_5(VAR_34->addr + VAR_21));

 VAR_34->cmd_flags = 0;
 VAR_34->block_pos = 0;
 VAR_34->io_pos = 0;
 VAR_34->io_word[0] = 0;
 VAR_34->io_word[1] = 0;

 VAR_36 = VAR_34->req->tpc << 16;
 VAR_36 |= VAR_24;

 if (VAR_34->req->data_dir == VAR_19)
  VAR_36 |= VAR_25;

 if (VAR_34->req->need_card_int) {
  if (VAR_34->ifmode == VAR_18)
   VAR_36 |= VAR_26;
  else
   VAR_36 |= VAR_29;
 }

 if (!VAR_32)
  VAR_34->cmd_flags |= VAR_6;

 if (VAR_34->req->long_data) {
  VAR_35 = VAR_34->req->sg.length;
 } else {
  VAR_35 = VAR_34->req->data_len;
  VAR_34->cmd_flags &= ~VAR_6;
 }

 if (VAR_35 <= 8) {
  VAR_36 &= ~(VAR_24 | 0xf);
  VAR_34->cmd_flags |= VAR_20;
  VAR_36 |= VAR_35 & 0xf;
  VAR_34->cmd_flags &= ~VAR_6;
 }

 if (VAR_34->cmd_flags & VAR_6) {
  if (1 != FUNC_1(&VAR_34->chip->pdev->dev, &VAR_34->req->sg, 1,
        VAR_34->req->data_dir == VAR_19
        ? VAR_7
        : VAR_8)) {
   VAR_34->req->error = -VAR_9;
   return VAR_34->req->error;
  }
  VAR_35 = FUNC_7(&VAR_34->req->sg);
  FUNC_8(FUNC_6(&VAR_34->req->sg),
         VAR_34->addr + VAR_3);
  FUNC_8(((1 << 16) & VAR_1)
         | (VAR_35 & VAR_2),
         VAR_34->addr + VAR_0);
  FUNC_8(VAR_5, VAR_34->addr + VAR_4);
 } else if (!(VAR_34->cmd_flags & VAR_20)) {
  FUNC_8(((1 << 16) & VAR_1)
         | (VAR_35 & VAR_2),
         VAR_34->addr + VAR_0);
   VAR_37 = FUNC_5(VAR_34->addr + VAR_15);
   VAR_37 |= VAR_34->req->data_dir == VAR_19
     ? VAR_16
     : VAR_17;

   FUNC_8(VAR_37, VAR_34->addr + VAR_15);
   FUNC_8(VAR_37, VAR_34->addr + VAR_13);
 } else {
  VAR_36 &= ~(VAR_24 | 0xf);
  VAR_34->cmd_flags |= VAR_20;
  VAR_36 |= VAR_35 & 0xf;

  if (VAR_34->req->data_dir == VAR_30) {
   FUNC_2(VAR_34);
   FUNC_8(VAR_34->io_word[0], VAR_34->addr + VAR_27);
   FUNC_8(VAR_34->io_word[1], VAR_34->addr + VAR_28);
  }
 }

 FUNC_4(&VAR_34->timer, VAR_31 + VAR_34->timeout_jiffies);
 FUNC_8(VAR_12 | FUNC_5(VAR_34->addr + VAR_11),
        VAR_34->addr + VAR_11);
 VAR_34->req->error = 0;

 FUNC_8(VAR_36, VAR_34->addr + VAR_23);
 FUNC_0(&VAR_33->dev, "executing TPC %08x, len %x\n", VAR_36, VAR_35);

 return 0;
}
