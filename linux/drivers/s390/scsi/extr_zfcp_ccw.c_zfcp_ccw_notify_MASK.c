
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int status; } ;
struct ccw_device {int dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct zfcp_adapter* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (char*,struct zfcp_adapter*) ;
 int FUNC_6 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_7 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_8 (struct zfcp_adapter*,int ) ;

__attribute__((used)) static int FUNC_9(struct ccw_device *VAR_3, int VAR_4)
{
 struct zfcp_adapter *VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5)
  return 1;

 switch (VAR_4) {
 case 130:
  if (FUNC_0(&VAR_5->status) &
      VAR_0) {
   FUNC_5("ccnigo1", VAR_5);
   break;
  }
  FUNC_2(&VAR_3->dev, "The FCP device has been detached\n");
  FUNC_7(VAR_5, 0, "ccnoti1");
  break;
 case 129:
  FUNC_2(&VAR_3->dev,
    "The CHPID for the FCP device is offline\n");
  FUNC_7(VAR_5, 0, "ccnoti2");
  break;
 case 128:
  if (FUNC_0(&VAR_5->status) &
      VAR_0) {
   FUNC_5("ccniop1", VAR_5);
   break;
  }
  FUNC_1(&VAR_3->dev, "The FCP device is operational again\n");
  FUNC_8(VAR_5,
         VAR_2);
  FUNC_6(VAR_5, VAR_1,
     "ccnoti4");
  break;
 case 131:
  FUNC_2(&VAR_3->dev, "The FCP device did not respond within "
         "the specified time\n");
  FUNC_7(VAR_5, 0, "ccnoti5");
  break;
 }

 FUNC_4(VAR_5);
 return 1;
}
