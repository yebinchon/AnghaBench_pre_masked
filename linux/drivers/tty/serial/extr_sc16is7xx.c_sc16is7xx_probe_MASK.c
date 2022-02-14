
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef long u32 ;
struct sched_param {int sched_priority; } ;
struct TYPE_10__ {int base; int can_sleep; scalar_t__ ngpio; int set; int direction_output; int get; int direction_input; int label; struct device* parent; int owner; } ;
struct sc16is7xx_port {struct regmap* clk; struct regmap* kworker_task; TYPE_6__ gpio; TYPE_1__* p; struct regmap* regmap; int kworker; int irq_work; int efr_lock; struct sc16is7xx_devtype const* devtype; } ;
struct sc16is7xx_devtype {int nr_uart; scalar_t__ nr_gpio; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int irq; int flags; unsigned long uartclk; scalar_t__ line; int * ops; int rs485_config; int iotype; int fifosize; int type; struct device* dev; } ;
struct TYPE_8__ {int line; TYPE_2__ port; int reg_work; int tx_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct regmap*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct regmap*) ;
 unsigned long FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (struct device*,char*,unsigned long) ;
 int FUNC_7 (struct device*,char*) ;
 unsigned long* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,struct sc16is7xx_port*) ;
 int FUNC_11 (struct device*,char*,long*) ;
 struct regmap* FUNC_12 (struct device*,int *) ;
 struct sc16is7xx_port* FUNC_13 (struct device*,int ,int ) ;
 int FUNC_14 (struct device*,int,int ,unsigned long,int ,struct sc16is7xx_port*) ;
 int FUNC_15 (TYPE_6__*,struct sc16is7xx_port*) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 struct regmap* FUNC_19 (int ,int *,char*) ;
 int FUNC_20 (struct regmap*) ;
 int VAR_22 ;
 int FUNC_21 (int *) ;
 int VAR_23 ;
 int FUNC_22 (struct regmap*,int) ;
 int FUNC_23 (struct regmap*,int,int ) ;
 scalar_t__ FUNC_24 () ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_25 (TYPE_2__*,int ,int) ;
 int FUNC_26 (TYPE_2__*,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_27 (struct regmap*,int ,struct sched_param*) ;
 int FUNC_28 (struct sc16is7xx_port*,int ,int) ;
 int FUNC_29 (int *,TYPE_2__*) ;
 int FUNC_30 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_31(struct device *VAR_36,
      const struct sc16is7xx_devtype *VAR_37,
      struct regmap *VAR_38, int VAR_39, unsigned long VAR_40)
{
 struct sched_param VAR_41 = { .sched_priority = VAR_2 / 2 };
 unsigned long VAR_42 = 0, *VAR_43 = FUNC_8(VAR_36);
 u32 VAR_44 = 0;
 int VAR_45, VAR_46;
 struct sc16is7xx_port *VAR_47;

 if (FUNC_0(VAR_38))
  return FUNC_1(VAR_38);


 VAR_47 = FUNC_13(VAR_36, FUNC_28(VAR_47, VAR_23, VAR_37->nr_uart), VAR_1);
 if (!VAR_47) {
  FUNC_7(VAR_36, "Error allocating port structure\n");
  return -VAR_0;
 }


 FUNC_11(VAR_36, "clock-frequency", &VAR_44);

 VAR_47->clk = FUNC_12(VAR_36, ((void*)0));
 if (FUNC_0(VAR_47->clk)) {
  if (VAR_44)
   VAR_42 = VAR_44;
  if (VAR_43)
   VAR_42 = *VAR_43;
  if (VAR_42)
   FUNC_6(VAR_36, "Clock frequency: %luHz\n", VAR_42);
  else
   return FUNC_1(VAR_47->clk);
 } else {
  VAR_46 = FUNC_5(VAR_47->clk);
  if (VAR_46)
   return VAR_46;

  VAR_42 = FUNC_4(VAR_47->clk);
 }

 VAR_47->regmap = VAR_38;
 VAR_47->devtype = VAR_37;
 FUNC_10(VAR_36, VAR_47);
 FUNC_21(&VAR_47->efr_lock);

 FUNC_18(&VAR_47->kworker);
 FUNC_17(&VAR_47->irq_work, VAR_30);
 VAR_47->kworker_task = FUNC_19(VAR_22, &VAR_47->kworker,
          "sc16is7xx");
 if (FUNC_0(VAR_47->kworker_task)) {
  VAR_46 = FUNC_1(VAR_47->kworker_task);
  goto out_clk;
 }
 FUNC_27(VAR_47->kworker_task, VAR_17, &VAR_41);
 FUNC_23(VAR_47->regmap, VAR_11 << VAR_16,
   VAR_12);

 for (VAR_45 = 0; VAR_45 < VAR_37->nr_uart; ++VAR_45) {
  VAR_47->p[VAR_45].line = VAR_45;

  VAR_47->p[VAR_45].port.dev = VAR_36;
  VAR_47->p[VAR_45].port.irq = VAR_39;
  VAR_47->p[VAR_45].port.type = VAR_3;
  VAR_47->p[VAR_45].port.fifosize = VAR_9;
  VAR_47->p[VAR_45].port.flags = VAR_19 | VAR_20;
  VAR_47->p[VAR_45].port.iotype = VAR_21;
  VAR_47->p[VAR_45].port.uartclk = VAR_42;
  VAR_47->p[VAR_45].port.rs485_config = VAR_24;
  VAR_47->p[VAR_45].port.ops = &VAR_32;
  VAR_47->p[VAR_45].port.line = FUNC_24();
  if (VAR_47->p[VAR_45].port.line >= VAR_15) {
   VAR_46 = -VAR_0;
   goto out_ports;
  }


  FUNC_25(&VAR_47->p[VAR_45].port, VAR_10, 0);

  FUNC_25(&VAR_47->p[VAR_45].port, VAR_4,
         VAR_5 |
         VAR_6);

  FUNC_17(&VAR_47->p[VAR_45].tx_work, VAR_34);
  FUNC_17(&VAR_47->p[VAR_45].reg_work, VAR_33);

  FUNC_29(&VAR_35, &VAR_47->p[VAR_45].port);


  FUNC_25(&VAR_47->p[VAR_45].port, VAR_14,
         VAR_13);

  FUNC_22(VAR_47->regmap, 1);


  FUNC_25(&VAR_47->p[VAR_45].port, VAR_8,
         VAR_7);

  FUNC_22(VAR_47->regmap, 0);


  FUNC_25(&VAR_47->p[VAR_45].port, VAR_14, 0x00);


  FUNC_26(&VAR_47->p[VAR_45].port, 0);
 }


 VAR_46 = FUNC_14(VAR_36, VAR_39, VAR_29,
          VAR_40, FUNC_9(VAR_36), VAR_47);
 if (!VAR_46)
  return 0;

out_ports:
 for (VAR_45--; VAR_45 >= 0; VAR_45--) {
  FUNC_30(&VAR_35, &VAR_47->p[VAR_45].port);
  FUNC_2(VAR_47->p[VAR_45].port.line, &VAR_31);
 }







 FUNC_20(VAR_47->kworker_task);

out_clk:
 if (!FUNC_0(VAR_47->clk))
  FUNC_3(VAR_47->clk);

 return VAR_46;
}
