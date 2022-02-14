
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (unsigned long) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;

int FUNC_10(void)
{
 int VAR_8;




 VAR_4 = (void *)FUNC_0(VAR_3 | VAR_2);
 if (!VAR_4)
  return -VAR_1;

 FUNC_2(VAR_6, ((void*)0));

 if (FUNC_9()) {
  FUNC_8("Disabling due to WSMT enabled\n");
  VAR_8 = -VAR_0;
  goto fail_wsmt;
 }

 VAR_7 = FUNC_5("dell-smbios", 1);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto fail_platform_device_alloc;
 }

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  goto fail_platform_device_add;

 VAR_8 = FUNC_1(&VAR_7->dev,
       &VAR_5);
 if (VAR_8)
  goto fail_register;

 return 0;

fail_register:
 FUNC_6(VAR_7);

fail_platform_device_add:
 FUNC_7(VAR_7);

fail_wsmt:
fail_platform_device_alloc:
 FUNC_3((unsigned long)VAR_4);
 return VAR_8;
}
