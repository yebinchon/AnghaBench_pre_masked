
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int default_ticks; int timer; int inuse; scalar_t__ queue; int stop; int lock; int gpiod; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 () ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 int VAR_6;

 VAR_1.gpiod = FUNC_5(&VAR_5->dev,
            ((void*)0), VAR_0);
 if (FUNC_0(VAR_1.gpiod)) {
  FUNC_3(&VAR_5->dev, "failed to request gpio");
  return FUNC_1(VAR_1.gpiod);
 }

 FUNC_9(&VAR_1.lock);
 FUNC_6(&VAR_1.stop);
 VAR_1.queue = 0;
 FUNC_2(0, &VAR_1.inuse);
 FUNC_10(&VAR_1.timer, VAR_3, 0);
 VAR_1.default_ticks = VAR_4;

 VAR_6 = FUNC_7(&VAR_2);
 if (VAR_6 < 0) {
  FUNC_3(&VAR_5->dev, "failed to register\n");
  return VAR_6;
 }
 FUNC_8();
 FUNC_4(&VAR_5->dev, "MTX-1 Watchdog driver\n");
 return 0;
}
