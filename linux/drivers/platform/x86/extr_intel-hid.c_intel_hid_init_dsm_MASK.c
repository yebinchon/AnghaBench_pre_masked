
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_1 (int ,int *,int,int ,int *,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(acpi_handle VAR_4)
{
 union acpi_object *VAR_5;

 FUNC_3(VAR_1, &VAR_2);

 VAR_5 = FUNC_1(VAR_4, &VAR_2, 1, 0, ((void*)0),
          VAR_0);
 if (VAR_5) {
  VAR_3 = *VAR_5->buffer.pointer;
  FUNC_0(VAR_5);
 }

 FUNC_2(VAR_4, "intel_hid_dsm_fn_mask = %llx\n",
     VAR_3);
}
