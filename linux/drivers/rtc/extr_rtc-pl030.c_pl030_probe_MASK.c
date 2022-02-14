
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pl030_rtc {scalar_t__ base; TYPE_1__* rtc; } ;
struct amba_id {int dummy; } ;
struct TYPE_7__ {int start; } ;
struct amba_device {int * irq; TYPE_2__ res; int dev; } ;
struct TYPE_6__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct amba_device*) ;
 int FUNC_4 (struct amba_device*,int *) ;
 int FUNC_5 (struct amba_device*,struct pl030_rtc*) ;
 struct pl030_rtc* FUNC_6 (int *,int,int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int ,struct pl030_rtc*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,int ,int ,char*,struct pl030_rtc*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct amba_device *VAR_6, const struct amba_id *VAR_7)
{
 struct pl030_rtc *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_6, ((void*)0));
 if (VAR_9)
  goto err_req;

 VAR_8 = FUNC_6(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto err_rtc;
 }

 VAR_8->rtc = FUNC_7(&VAR_6->dev);
 if (FUNC_0(VAR_8->rtc)) {
  VAR_9 = FUNC_1(VAR_8->rtc);
  goto err_rtc;
 }

 VAR_8->rtc->ops = &VAR_5;
 VAR_8->base = FUNC_9(VAR_6->res.start, FUNC_12(&VAR_6->res));
 if (!VAR_8->base) {
  VAR_9 = -VAR_0;
  goto err_rtc;
 }

 FUNC_2(0, VAR_8->base + VAR_2);
 FUNC_2(0, VAR_8->base + VAR_3);

 FUNC_5(VAR_6, VAR_8);

 VAR_9 = FUNC_11(VAR_6->irq[0], VAR_4, 0,
     "rtc-pl030", VAR_8);
 if (VAR_9)
  goto err_irq;

 VAR_9 = FUNC_13(VAR_8->rtc);
 if (VAR_9)
  goto err_reg;

 return 0;

 err_reg:
 FUNC_8(VAR_6->irq[0], VAR_8);
 err_irq:
 FUNC_10(VAR_8->base);
 err_rtc:
 FUNC_3(VAR_6);
 err_req:
 return VAR_9;
}
