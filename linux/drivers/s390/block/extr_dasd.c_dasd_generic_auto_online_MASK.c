
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dev; } ;
typedef int async_cookie_t ;


 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, async_cookie_t VAR_1)
{
 struct ccw_device *VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_2("%s: Setting the DASD online failed with rc=%d\n",
   FUNC_1(&VAR_2->dev), VAR_3);
}
