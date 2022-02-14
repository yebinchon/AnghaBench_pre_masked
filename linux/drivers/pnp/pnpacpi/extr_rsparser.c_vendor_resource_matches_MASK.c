
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pnp_dev {int dev; } ;
struct acpi_vendor_uuid {scalar_t__ subtype; int data; } ;
struct acpi_resource_vendor_typed {scalar_t__ uuid_subtype; int byte_length; scalar_t__* uuid; } ;


 int FUNC_0 (int *,char*,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pnp_dev *VAR_0,
       struct acpi_resource_vendor_typed *VAR_1,
       struct acpi_vendor_uuid *VAR_2,
       int VAR_3)
{
 int VAR_4 = sizeof(VAR_1->uuid);
 u8 VAR_5 = VAR_1->uuid_subtype;
 u8 *VAR_6 = VAR_1->uuid;
 int VAR_7;


 VAR_7 = VAR_1->byte_length - VAR_4 - 1;

 if (VAR_5 == VAR_2->subtype &&
     VAR_4 == sizeof(VAR_2->data) &&
     FUNC_1(VAR_6, VAR_2->data, VAR_4) == 0) {
  if (VAR_3 && VAR_3 != VAR_7) {
   FUNC_0(&VAR_0->dev,
    "wrong vendor descriptor size; expected %d, found %d bytes\n",
    VAR_3, VAR_7);
   return 0;
  }

  return 1;
 }

 return 0;
}
