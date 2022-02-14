
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; scalar_t__ pointer; } ;
struct TYPE_5__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ buffer; TYPE_2__ package; } ;
struct int3400_thermal_priv {int uuid_bitmap; TYPE_1__* adev; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int guid_t ;
typedef int acpi_status ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int * VAR_6 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct int3400_thermal_priv *VAR_7)
{
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0)};
 union acpi_object *VAR_9, *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 0;
 acpi_status VAR_14;

 VAR_14 = FUNC_1(VAR_7->adev->handle, "IDSP", ((void*)0), &VAR_8);
 if (FUNC_0(VAR_14))
  return -VAR_4;

 VAR_9 = (union acpi_object *)VAR_8.pointer;
 if (VAR_9->type != VAR_2) {
  VAR_13 = -VAR_3;
  goto end;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->package.count; VAR_11++) {
  VAR_10 = &VAR_9->package.elements[VAR_11];
  if (VAR_10->type != VAR_1) {
   VAR_13 = -VAR_3;
   goto end;
  }


  if (VAR_10->buffer.length != 16) {
   VAR_13 = -VAR_3;
   goto end;
  }

  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   guid_t VAR_15;

   FUNC_3(VAR_6[VAR_12], &VAR_15);
   if (FUNC_2((guid_t *)VAR_10->buffer.pointer, &VAR_15)) {
    VAR_7->uuid_bitmap |= (1 << VAR_12);
    break;
   }
  }
 }

end:
 FUNC_4(VAR_8.pointer);
 return VAR_13;
}
