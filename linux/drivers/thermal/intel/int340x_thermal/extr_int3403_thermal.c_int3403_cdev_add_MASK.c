
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; } ;
union acpi_object {scalar_t__ type; TYPE_2__ package; } ;
struct int3403_priv {TYPE_3__* adev; struct int3403_cdev* priv; TYPE_1__* pdev; } ;
struct int3403_cdev {int cdev; scalar_t__ max_state; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_6__ {int handle; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,int *,struct acpi_buffer*) ;
 struct int3403_cdev* FUNC_5 (int *,int,int ) ;
 int VAR_6 ;
 int FUNC_6 (union acpi_object*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,struct int3403_priv*,int *) ;

__attribute__((used)) static int FUNC_9(struct int3403_priv *VAR_7)
{
 int VAR_8 = 0;
 acpi_status VAR_9;
 struct int3403_cdev *VAR_10;
 struct acpi_buffer VAR_11 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_12;

 VAR_10 = FUNC_5(&VAR_7->pdev->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_9 = FUNC_4(VAR_7->adev->handle, "PPSS", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_9))
  return -VAR_3;

 VAR_12 = VAR_11.pointer;
 if (!VAR_12 || (VAR_12->type != VAR_1)) {
  FUNC_7("Invalid PPSS data\n");
  FUNC_6(VAR_11.pointer);
  return -VAR_2;
 }

 VAR_7->priv = VAR_10;
 VAR_10->max_state = VAR_12->package.count - 1;
 VAR_10->cdev =
  FUNC_8(FUNC_3(VAR_7->adev),
    VAR_7, &VAR_6);
 if (FUNC_1(VAR_10->cdev))
  VAR_8 = FUNC_2(VAR_10->cdev);

 FUNC_6(VAR_11.pointer);


 return VAR_8;
}
