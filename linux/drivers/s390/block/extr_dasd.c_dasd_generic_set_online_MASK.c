
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_discipline {int (* check_device ) (struct dasd_device*) ;int owner; int name; } ;
struct dasd_device {int features; scalar_t__ state; scalar_t__ block; struct dasd_discipline* discipline; struct dasd_discipline* base_discipline; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 struct dasd_device* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 struct dasd_discipline* VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (struct ccw_device*,int ,int ) ;
 int FUNC_8 (struct dasd_device*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct dasd_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

int FUNC_17(struct ccw_device *VAR_10,
       struct dasd_discipline *VAR_11)
{
 struct dasd_discipline *VAR_12;
 struct dasd_device *VAR_13;
 int VAR_14;


 FUNC_7(VAR_10, VAR_1, 0);
 VAR_13 = FUNC_3(VAR_10);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_12 = VAR_11;
 if (VAR_13->features & VAR_2) {
    if (!VAR_8) {

   VAR_14 = FUNC_13(VAR_0);
   if (VAR_14) {
    FUNC_12("%s Setting the DASD online failed "
     "because the required module %s "
     "could not be loaded (rc=%d)\n",
     FUNC_9(&VAR_10->dev), VAR_0,
     VAR_14);
    FUNC_4(VAR_13);
    return -VAR_7;
   }
  }


  if (!VAR_8) {
   FUNC_12("%s Setting the DASD online failed because of missing DIAG discipline\n",
    FUNC_9(&VAR_10->dev));
   FUNC_4(VAR_13);
   return -VAR_7;
  }
  VAR_12 = VAR_8;
 }
 if (!FUNC_15(VAR_11->owner)) {
  FUNC_4(VAR_13);
  return -VAR_6;
 }
 if (!FUNC_15(VAR_12->owner)) {
  FUNC_10(VAR_11->owner);
  FUNC_4(VAR_13);
  return -VAR_6;
 }
 VAR_13->base_discipline = VAR_11;
 VAR_13->discipline = VAR_12;


 VAR_14 = VAR_12->check_device(VAR_13);
 if (VAR_14) {
  FUNC_12("%s Setting the DASD online with discipline %s failed with rc=%i\n",
   FUNC_9(&VAR_10->dev), VAR_12->name, VAR_14);
  FUNC_10(VAR_12->owner);
  FUNC_10(VAR_11->owner);
  FUNC_4(VAR_13);
  return VAR_14;
 }

 FUNC_8(VAR_13, VAR_5);
 if (VAR_13->state <= VAR_3) {
  FUNC_12("%s Setting the DASD online failed because of a missing discipline\n",
   FUNC_9(&VAR_10->dev));
  VAR_14 = -VAR_7;
  FUNC_8(VAR_13, VAR_4);
  if (VAR_13->block)
   FUNC_5(VAR_13->block);
  FUNC_4(VAR_13);
 } else
  FUNC_11("dasd_generic device %s found\n",
    FUNC_9(&VAR_10->dev));

 FUNC_16(VAR_9, FUNC_2(VAR_13));

 FUNC_6(VAR_13);
 return VAR_14;
}
