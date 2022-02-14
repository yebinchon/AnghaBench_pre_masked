
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int entity; } ;
struct iss_resizer_device {int stopping; int wait; TYPE_1__ subdev; } ;
struct iss_pipeline {int dummy; } ;
struct iss_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct iss_pipeline*) ;
 int FUNC_3 (struct iss_resizer_device*) ;
 struct iss_device* FUNC_4 (struct iss_resizer_device*) ;
 struct iss_pipeline* FUNC_5 (int *) ;

void FUNC_6(struct iss_resizer_device *VAR_3, u32 VAR_4)
{
 struct iss_device *VAR_5 = FUNC_4(VAR_3);
 struct iss_pipeline *VAR_6 =
        FUNC_5(&VAR_3->subdev.entity);

 if (VAR_4 & (VAR_0 |
        VAR_1)) {
  FUNC_0(VAR_5->dev, "RSZ Err: FIFO_IN_BLK:%d, FIFO_OVF:%d\n",
   VAR_4 & VAR_0 ? 1 : 0,
   VAR_4 & VAR_1 ? 1 : 0);
  FUNC_2(VAR_6);
 }

 if (FUNC_1(&VAR_3->wait,
          &VAR_3->stopping))
  return;

 if (VAR_4 & VAR_2)
  FUNC_3(VAR_3);
}
