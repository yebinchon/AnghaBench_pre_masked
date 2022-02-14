
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_0, u32 VAR_1)
{
 FUNC_2("Received event: 0x%x", VAR_1);

 FUNC_0(VAR_0->pnp.device_class,
     FUNC_1(&VAR_0->dev),
     VAR_1, 0);
}
