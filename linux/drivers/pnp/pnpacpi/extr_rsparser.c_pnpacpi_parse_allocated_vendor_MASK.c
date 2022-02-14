
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pnp_dev {int dummy; } ;
struct acpi_resource_vendor_typed {scalar_t__ byte_data; } ;
typedef int start ;
typedef int length ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__,int) ;
 int FUNC_1 (struct pnp_dev*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct pnp_dev*,struct acpi_resource_vendor_typed*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct pnp_dev *VAR_1,
        struct acpi_resource_vendor_typed *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_2, &VAR_0, 16)) {
  u64 VAR_3, VAR_4;

  FUNC_0(&VAR_3, VAR_2->byte_data, sizeof(VAR_3));
  FUNC_0(&VAR_4, VAR_2->byte_data + 8, sizeof(VAR_4));

  FUNC_1(VAR_1, VAR_3, VAR_3 + VAR_4 - 1, 0);
 }
}
