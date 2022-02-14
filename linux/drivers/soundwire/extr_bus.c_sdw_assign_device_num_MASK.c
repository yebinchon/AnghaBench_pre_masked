
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave {int dev_num; int dev; TYPE_1__* bus; } ;
struct TYPE_2__ {int dev; int bus_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sdw_slave*) ;
 int FUNC_5 (struct sdw_slave*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct sdw_slave *VAR_1)
{
 int VAR_2, VAR_3;


 if (!VAR_1->dev_num) {
  FUNC_2(&VAR_1->bus->bus_lock);
  VAR_3 = FUNC_4(VAR_1);
  FUNC_3(&VAR_1->bus->bus_lock);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_1->bus->dev, "Get dev_num failed: %d\n",
    VAR_3);
   return VAR_3;
  }
 } else {
  FUNC_1(VAR_1->bus->dev,
    "Slave already registered dev_num:%d\n",
    VAR_1->dev_num);


  VAR_3 = VAR_1->dev_num;
  VAR_1->dev_num = 0;
 }

 VAR_2 = FUNC_5(VAR_1, VAR_0, VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->dev, "Program device_num %d failed: %d\n",
   VAR_3, VAR_2);
  return VAR_2;
 }


 VAR_1->dev_num = VAR_3;

 return 0;
}
