
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct da9063 {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 struct da9063* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2, unsigned long VAR_3,
         void *VAR_4)
{
 struct da9063 *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_0,
      VAR_1);
 if (VAR_6)
  FUNC_0(VAR_5->dev, "Failed to shutdown (err = %d)\n",
     VAR_6);

 return VAR_6;
}
