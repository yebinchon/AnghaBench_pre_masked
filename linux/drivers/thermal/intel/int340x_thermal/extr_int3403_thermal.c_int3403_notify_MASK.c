
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct int3403_sensor {int int340x_zone; } ;
struct int3403_priv {scalar_t__ type; TYPE_1__* pdev; struct int3403_sensor* priv; } ;
typedef int acpi_handle ;
struct TYPE_2__ {int dev; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(acpi_handle VAR_3,
  u32 VAR_4, void *VAR_5)
{
 struct int3403_priv *VAR_6 = VAR_5;
 struct int3403_sensor *VAR_7;

 if (!VAR_6)
  return;

 VAR_7 = VAR_6->priv;
 if (VAR_6->type != VAR_0 || !VAR_7)
  return;

 switch (VAR_4) {
 case 130:
  break;
 case 128:
  FUNC_2(VAR_7->int340x_zone,
         VAR_2);
  break;
 case 129:
  FUNC_1(VAR_7->int340x_zone);
  FUNC_2(VAR_7->int340x_zone,
         VAR_1);
  break;
 default:
  FUNC_0(&VAR_6->pdev->dev, "Unsupported event [0x%x]\n", VAR_4);
  break;
 }
}
