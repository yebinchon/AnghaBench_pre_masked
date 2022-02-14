
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbios_device {int list; void* call_fn; struct device* device; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct smbios_device* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_6(struct device *VAR_4, void *VAR_5)
{
 struct smbios_device *VAR_6;

 VAR_6 = FUNC_1(VAR_4, sizeof(struct smbios_device), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_2(VAR_4);
 VAR_6->device = VAR_4;
 VAR_6->call_fn = VAR_5;
 FUNC_4(&VAR_3);
 FUNC_3(&VAR_6->list, &VAR_2);
 FUNC_5(&VAR_3);
 FUNC_0(VAR_4, "Added device: %s\n", VAR_4->driver->name);
 return 0;
}
