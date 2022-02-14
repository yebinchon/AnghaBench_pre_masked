
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct memstick_host {int dev; } ;
struct jmb38x_ms_host {int cmd_flags; TYPE_3__* req; scalar_t__ addr; TYPE_2__* chip; int timer; } ;
struct TYPE_6__ {int int_reg; scalar_t__ data_dir; int error; int sg; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int *,int *,int,int ) ;
 scalar_t__ FUNC_3 (struct memstick_host*) ;
 int FUNC_4 (struct memstick_host*,TYPE_3__**) ;
 struct jmb38x_ms_host* FUNC_5 (struct memstick_host*) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct memstick_host *VAR_15, int VAR_16)
{
 struct jmb38x_ms_host *VAR_17 = FUNC_5(VAR_15);
 unsigned int VAR_18 = 0;
 int VAR_19;

 FUNC_0(&VAR_17->timer);

 FUNC_1(&VAR_15->dev, "c control %08x\n",
  FUNC_6(VAR_17->addr + VAR_6));
 FUNC_1(&VAR_15->dev, "c status %08x\n",
  FUNC_6(VAR_17->addr + VAR_9));
 FUNC_1(&VAR_15->dev, "c hstatus %08x\n", FUNC_6(VAR_17->addr + VAR_14));

 VAR_17->req->int_reg = FUNC_6(VAR_17->addr + VAR_14) & 0xff;

 FUNC_7(0, VAR_17->addr + VAR_0);
 FUNC_7(0, VAR_17->addr + VAR_1);

 if (VAR_17->cmd_flags & VAR_2) {
  FUNC_2(&VAR_17->chip->pdev->dev, &VAR_17->req->sg, 1,
        VAR_17->req->data_dir == VAR_13
        ? VAR_3 : VAR_4);
 } else {
  VAR_18 = FUNC_6(VAR_17->addr + VAR_10);
  if (VAR_17->req->data_dir == VAR_13)
   VAR_18 &= ~VAR_11;
  else
   VAR_18 &= ~VAR_12;

  FUNC_7(VAR_18, VAR_17->addr + VAR_10);
  FUNC_7(VAR_18, VAR_17->addr + VAR_8);
 }

 FUNC_7((~VAR_7) & FUNC_6(VAR_17->addr + VAR_6),
        VAR_17->addr + VAR_6);

 if (!VAR_16) {
  do {
   VAR_19 = FUNC_4(VAR_15, &VAR_17->req);
  } while (!VAR_19 && FUNC_3(VAR_15));
 } else {
  do {
   VAR_19 = FUNC_4(VAR_15, &VAR_17->req);
   if (!VAR_19)
    VAR_17->req->error = -VAR_5;
  } while (!VAR_19);
 }
}
