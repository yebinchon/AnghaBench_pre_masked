
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct whcrc {int cmd_wq; int event_work; scalar_t__ rc_base; TYPE_1__* umc_dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct whcrc *VAR_9 = VAR_8;
 struct device *VAR_10 = &VAR_9->umc_dev->dev;
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_9->rc_base + VAR_2);
 if (!(VAR_11 & VAR_5))
  return VAR_1;
 FUNC_2(VAR_11 & VAR_5, VAR_9->rc_base + VAR_2);

 if (VAR_11 & VAR_4) {
  FUNC_0(VAR_10, "host system error -- hardware halted\n");

  goto out;
 }
 if (VAR_11 & VAR_3)
  FUNC_3(&VAR_9->event_work);
 if (VAR_11 & VAR_6)
  FUNC_4(&VAR_9->cmd_wq);
out:
 return VAR_0;
}
