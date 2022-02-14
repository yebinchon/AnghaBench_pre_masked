
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave {int const status; TYPE_1__* bus; } ;
struct sdw_bus {int dev; int bus_lock; int assigned; } ;
typedef enum sdw_slave_status { ____Placeholder_sdw_slave_status } sdw_slave_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sdw_slave* FUNC_4 (struct sdw_bus*,int) ;
 int FUNC_5 (struct sdw_slave*) ;
 int FUNC_6 (struct sdw_slave*) ;
 int FUNC_7 (struct sdw_slave*,int const) ;
 int FUNC_8 (struct sdw_bus*) ;
 int FUNC_9 (struct sdw_slave*,int) ;
 int FUNC_10 (int,int ) ;

int FUNC_11(struct sdw_bus *VAR_1,
       enum sdw_slave_status VAR_2[])
{
 enum sdw_slave_status VAR_3;
 struct sdw_slave *VAR_4;
 int VAR_5, VAR_6 = 0;

 if (VAR_2[0] == 129) {
  FUNC_0(VAR_1->dev, "Slave attached, programming device number\n");
  VAR_6 = FUNC_8(VAR_1);
  if (VAR_6)
   FUNC_1(VAR_1->dev, "Slave attach failed: %d\n", VAR_6);




  return VAR_6;
 }


 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
  FUNC_2(&VAR_1->bus_lock);
  if (FUNC_10(VAR_5, VAR_1->assigned) == 0) {
   FUNC_3(&VAR_1->bus_lock);
   continue;
  }
  FUNC_3(&VAR_1->bus_lock);

  VAR_4 = FUNC_4(VAR_1, VAR_5);
  if (!VAR_4)
   continue;

  switch (VAR_2[VAR_5]) {
  case 128:
   if (VAR_4->status == 128)
    break;

   FUNC_7(VAR_4, 128);
   break;

  case 130:
   VAR_6 = FUNC_5(VAR_4);
   if (VAR_6)
    FUNC_1(VAR_1->dev,
     "Slave %d alert handling failed: %d\n",
     VAR_5, VAR_6);
   break;

  case 129:
   if (VAR_4->status == 129)
    break;

   VAR_3 = VAR_4->status;
   FUNC_7(VAR_4, 129);

   if (VAR_3 == 130)
    break;

   VAR_6 = FUNC_6(VAR_4);
   if (VAR_6)
    FUNC_1(VAR_1->dev,
     "Slave %d initialization failed: %d\n",
     VAR_5, VAR_6);

   break;

  default:
   FUNC_1(VAR_1->dev, "Invalid slave %d status:%d\n",
    VAR_5, VAR_2[VAR_5]);
   break;
  }

  VAR_6 = FUNC_9(VAR_4, VAR_2[VAR_5]);
  if (VAR_6)
   FUNC_1(VAR_4->bus->dev,
    "Update Slave status failed:%d\n", VAR_6);
 }

 return VAR_6;
}
