
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int hbuf_is_ready; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mei_device*) ;
 scalar_t__ FUNC_2 (struct mei_device*) ;

bool FUNC_3(struct mei_device *VAR_1)
{
 if (FUNC_2(VAR_1) == VAR_0 ||
     FUNC_1(VAR_1)) {
  FUNC_0(VAR_1->dev, "device is in pg\n");
  return 0;
 }

 if (!VAR_1->hbuf_is_ready) {
  FUNC_0(VAR_1->dev, "hbuf is not ready\n");
  return 0;
 }

 VAR_1->hbuf_is_ready = 0;

 return 1;
}
