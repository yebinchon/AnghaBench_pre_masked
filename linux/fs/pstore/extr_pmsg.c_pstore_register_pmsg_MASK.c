
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int devnode; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 struct device* FUNC_4 (struct device*,int *,int ,int *,char*,int ,int ) ;
 struct device* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (scalar_t__,int ) ;

void FUNC_8(void)
{
 struct device *VAR_6;

 VAR_5 = FUNC_6(0, VAR_0, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_5("register_chrdev failed\n");
  goto err;
 }

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (FUNC_0(VAR_2)) {
  FUNC_5("device class file already in use\n");
  goto err_class;
 }
 VAR_2->devnode = VAR_3;

 VAR_6 = FUNC_4(VAR_2, ((void*)0), FUNC_1(VAR_5, 0),
     ((void*)0), "%s%d", VAR_0, 0);
 if (FUNC_0(VAR_6)) {
  FUNC_5("failed to create device\n");
  goto err_device;
 }
 return;

err_device:
 FUNC_3(VAR_2);
err_class:
 FUNC_7(VAR_5, VAR_0);
err:
 return;
}
