
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_device {int event_notifier; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct cros_ec_device*) ;
 int FUNC_1 (struct cros_ec_device*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct cros_ec_device *VAR_3 = VAR_2;
 bool VAR_4 = 1;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);






 if (VAR_4 && FUNC_2(VAR_3->dev))
  FUNC_3(VAR_3->dev, 0);

 if (VAR_5 > 0)
  FUNC_0(&VAR_3->event_notifier,
          0, VAR_3);
 return VAR_0;
}
