
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct da9063 {int dev; } ;


 int FUNC_0 (struct da9063*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct da9063* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct da9063 *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0->timeout);
 if (VAR_2)
  FUNC_1(VAR_1->dev, "Watchdog failed to start (err = %d)\n",
   VAR_2);

 return VAR_2;
}
