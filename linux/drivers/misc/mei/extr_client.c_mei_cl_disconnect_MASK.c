
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ dev_state; int dev; } ;
struct mei_cl {struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_cl*) ;
 int FUNC_2 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_3 (struct mei_device*,struct mei_cl*,char*,int) ;
 int FUNC_4 (struct mei_cl*) ;
 scalar_t__ FUNC_5 (struct mei_cl*) ;
 int FUNC_6 (struct mei_cl*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct mei_cl *VAR_3)
{
 struct mei_device *VAR_4;
 int VAR_5;

 if (FUNC_0(!VAR_3 || !VAR_3->dev))
  return -VAR_1;

 VAR_4 = VAR_3->dev;

 FUNC_2(VAR_4, VAR_3, "disconnecting");

 if (!FUNC_4(VAR_3))
  return 0;

 if (FUNC_5(VAR_3)) {
  FUNC_6(VAR_3);
  return 0;
 }

 if (VAR_4->dev_state == VAR_2) {
  FUNC_2(VAR_4, VAR_3, "Device is powering down, don't bother with disconnection\n");
  FUNC_6(VAR_3);
  return 0;
 }

 VAR_5 = FUNC_7(VAR_4->dev);
 if (VAR_5 < 0 && VAR_5 != -VAR_0) {
  FUNC_10(VAR_4->dev);
  FUNC_3(VAR_4, VAR_3, "rpm: get failed %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_3);

 FUNC_2(VAR_4, VAR_3, "rpm: autosuspend\n");
 FUNC_8(VAR_4->dev);
 FUNC_9(VAR_4->dev);

 return VAR_5;
}
