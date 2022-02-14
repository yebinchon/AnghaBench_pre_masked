
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct da9063 {int dev; } ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct da9063*,unsigned int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct watchdog_device*) ;
 struct da9063* FUNC_4 (struct watchdog_device*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_1,
      unsigned int VAR_2)
{
 struct da9063 *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = 0;
 if (FUNC_3(VAR_1))
  VAR_4 = FUNC_1(VAR_3, VAR_2);

 if (VAR_4)
  FUNC_2(VAR_3->dev, "Failed to set watchdog timeout (err = %d)\n",
   VAR_4);
 else
  VAR_1->timeout = VAR_0[FUNC_0(VAR_2)];

 return VAR_4;
}
