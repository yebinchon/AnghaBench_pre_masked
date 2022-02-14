
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wmid3_gds_set_input_param {int function_num; int devices; int hotkey_number; } ;
struct wmid3_gds_return_value {int devices; scalar_t__ ec_return_value; scalar_t__ error_code; } ;
struct wmid3_gds_get_input_param {int function_num; int devices; int hotkey_number; } ;
struct acpi_buffer {int member_0; union acpi_object* pointer; struct wmid3_gds_set_input_param* member_1; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ,int ,int,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status FUNC_4(u32 VAR_6, u16 VAR_7)
{
 struct wmid3_gds_return_value VAR_8;
 acpi_status VAR_9;
 union acpi_object *VAR_10;
 u16 VAR_11;
 struct wmid3_gds_get_input_param VAR_12 = {
  .function_num = 0x1,
  .hotkey_number = VAR_4,
  .devices = VAR_5,
 };
 struct acpi_buffer VAR_13 = {
  sizeof(struct wmid3_gds_get_input_param),
  &VAR_12
 };
 struct wmid3_gds_set_input_param VAR_14 = {
  .function_num = 0x2,
  .hotkey_number = VAR_4,
  .devices = VAR_5,
 };
 struct acpi_buffer VAR_15 = {
  sizeof(struct wmid3_gds_set_input_param),
  &VAR_14
 };
 struct acpi_buffer VAR_16 = { VAR_0, ((void*)0) };
 struct acpi_buffer VAR_17 = { VAR_0, ((void*)0) };

 VAR_9 = FUNC_3(VAR_3, 0, 0x2, &VAR_13, &VAR_16);
 if (FUNC_0(VAR_9))
  return VAR_9;

 VAR_10 = VAR_16.pointer;

 if (!VAR_10)
  return VAR_2;
 else if (VAR_10->type != VAR_1) {
  FUNC_1(VAR_10);
  return VAR_2;
 }
 if (VAR_10->buffer.length != 8) {
  FUNC_2("Unknown buffer length %d\n", VAR_10->buffer.length);
  FUNC_1(VAR_10);
  return VAR_2;
 }

 VAR_8 = *((struct wmid3_gds_return_value *)VAR_10->buffer.pointer);
 FUNC_1(VAR_10);

 if (VAR_8.error_code || VAR_8.ec_return_value) {
  FUNC_2("Get Current Device Status failed: 0x%x - 0x%x\n",
   VAR_8.error_code,
   VAR_8.ec_return_value);
  return VAR_9;
 }

 VAR_11 = VAR_8.devices;
 VAR_14.devices = (VAR_6) ? (VAR_11 | VAR_7) : (VAR_11 & ~VAR_7);

 VAR_9 = FUNC_3(VAR_3, 0, 0x1, &VAR_15, &VAR_17);
 if (FUNC_0(VAR_9))
  return VAR_9;

 VAR_10 = VAR_17;

 if (!VAR_10)
  return VAR_2;
 else if (VAR_10->type != VAR_1) {
  FUNC_1(VAR_10);
  return VAR_2;
 }
 if (VAR_10->buffer.length != 4) {
  FUNC_2("Unknown buffer length %d\n", VAR_10->buffer.length);
  FUNC_1(VAR_10);
  return VAR_2;
 }

 VAR_8 = *((struct wmid3_gds_return_value *)VAR_10->buffer.pointer);
 FUNC_1(VAR_10);

 if (VAR_8.error_code || VAR_8.ec_return_value)
  FUNC_2("Set Device Status failed: 0x%x - 0x%x\n",
   VAR_8.error_code,
   VAR_8.ec_return_value);

 return VAR_9;
}
