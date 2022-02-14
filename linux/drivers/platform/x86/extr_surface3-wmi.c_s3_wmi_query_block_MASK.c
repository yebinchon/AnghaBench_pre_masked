
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int length; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ buffer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_4 (char const*,int,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, int VAR_6, int *VAR_7)
{
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };
 acpi_status VAR_9;
 union acpi_object *VAR_10;
 int VAR_11 = 0;

 FUNC_1(&VAR_4);
 VAR_9 = FUNC_4(VAR_5, VAR_6, &VAR_8);

 VAR_10 = VAR_8.pointer;

 if (!VAR_10 || VAR_10->type != VAR_2) {
  if (VAR_10) {
   FUNC_3("query block returned object type: %d - buffer length:%d\n",
          VAR_10->type,
          VAR_10->type == VAR_1 ?
      VAR_10->buffer.length : 0);
  }
  VAR_11 = -VAR_3;
  goto out_free_unlock;
 }
 *VAR_7 = VAR_10->integer.value;
 out_free_unlock:
 FUNC_0(VAR_10);
 FUNC_2(&VAR_4);
 return VAR_11;
}
