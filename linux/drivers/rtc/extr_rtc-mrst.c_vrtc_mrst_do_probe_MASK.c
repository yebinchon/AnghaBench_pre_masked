
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int irq; struct device* dev; TYPE_1__* rtc; } ;
struct TYPE_9__ {int dev; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,TYPE_2__*) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,TYPE_1__*) ;
 struct resource* FUNC_7 (struct device*,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (struct device*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_2__*,int) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct resource*,int ) ;
 int FUNC_11 (struct resource*) ;
 int VAR_11 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 unsigned char FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct device *VAR_12, struct resource *VAR_13,
         int VAR_14)
{
 int VAR_15 = 0;
 unsigned char VAR_16;


 if (VAR_8.dev)
  return -VAR_0;

 if (!VAR_13)
  return -VAR_1;

 VAR_13 = FUNC_7(VAR_12, VAR_13->start, FUNC_11(VAR_13),
     VAR_7);
 if (!VAR_13) {
  FUNC_2(VAR_12, "i/o mem already in use.\n");
  return -VAR_0;
 }

 VAR_8.irq = VAR_14;
 VAR_8.dev = VAR_12;
 FUNC_5(VAR_12, &VAR_8);

 VAR_8.rtc = FUNC_8(VAR_12);
 if (FUNC_0(VAR_8.rtc))
  return FUNC_1(VAR_8.rtc);

 VAR_8.rtc->ops = &VAR_10;

 FUNC_10(VAR_13, FUNC_4(&VAR_8.rtc->dev));

 FUNC_13(&VAR_11);
 FUNC_9(&VAR_8, VAR_6 | VAR_3);
 VAR_16 = FUNC_15(VAR_4);
 FUNC_14(&VAR_11);

 if (!(VAR_16 & VAR_2) || (VAR_16 & (VAR_5)))
  FUNC_2(VAR_12, "TODO: support more than 24-hr BCD mode\n");

 if (VAR_14) {
  VAR_15 = FUNC_6(VAR_12, VAR_14, VAR_9,
       0, FUNC_4(&VAR_8.rtc->dev),
       VAR_8.rtc);
  if (VAR_15 < 0) {
   FUNC_2(VAR_12, "IRQ %d is already in use, err %d\n",
    VAR_14, VAR_15);
   goto cleanup0;
  }
 }

 VAR_15 = FUNC_12(VAR_8.rtc);
 if (VAR_15)
  goto cleanup0;

 FUNC_2(VAR_12, "initialised\n");
 return 0;

cleanup0:
 VAR_8.dev = ((void*)0);
 FUNC_3(VAR_12, "rtc-mrst: unable to initialise\n");
 return VAR_15;
}
