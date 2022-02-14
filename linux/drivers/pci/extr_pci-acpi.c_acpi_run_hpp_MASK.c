
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct pci_dev {int dummy; } ;
struct hpx_type0 {int revision; int enable_perr; int enable_serr; int latency_timer; int cache_line_size; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int hpx0 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct hpx_type0*,int ,int) ;
 int FUNC_4 (struct pci_dev*,struct hpx_type0*) ;

__attribute__((used)) static acpi_status FUNC_5(struct pci_dev *VAR_4, acpi_handle VAR_5)
{
 acpi_status VAR_6;
 struct acpi_buffer VAR_7 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_8, *VAR_9;
 struct hpx_type0 VAR_10;
 int VAR_11;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));

 VAR_6 = FUNC_1(VAR_5, "_HPP", ((void*)0), &VAR_7);
 if (FUNC_0(VAR_6))
  return VAR_6;

 VAR_8 = (union acpi_object *) VAR_7.pointer;
 if (VAR_8->type != VAR_2 ||
     VAR_8->package.count != 4) {
  VAR_6 = VAR_3;
  goto exit;
 }

 VAR_9 = VAR_8->package.elements;
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if (VAR_9[VAR_11].type != VAR_1) {
   VAR_6 = VAR_3;
   goto exit;
  }
 }

 VAR_10 = 1;
 VAR_10 = VAR_9[0].integer.value;
 VAR_10 = VAR_9[1].integer.value;
 VAR_10 = VAR_9[2].integer.value;
 VAR_10 = VAR_9[3].integer.value;

 FUNC_4(VAR_4, &VAR_10);

exit:
 FUNC_2(VAR_7.pointer);
 return VAR_6;
}
