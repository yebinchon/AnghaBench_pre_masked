
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_3__ {char* name; int mode; } ;
struct TYPE_4__ {void* store; void* show; TYPE_1__ attr; } ;
struct intel_menlow_attribute {int node; TYPE_2__ attr; int handle; struct device* device; } ;
struct device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct intel_menlow_attribute*) ;
 struct intel_menlow_attribute* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(char *VAR_4, umode_t VAR_5, void *VAR_6,
       void *VAR_7, struct device *VAR_8,
       acpi_handle VAR_9)
{
 struct intel_menlow_attribute *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(struct intel_menlow_attribute), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_6(&VAR_10->attr.attr);
 VAR_10->attr.attr.name = VAR_4;
 VAR_10->attr.attr.mode = VAR_5;
 VAR_10->attr.show = VAR_6;
 VAR_10->attr.store = VAR_7;
 VAR_10->device = VAR_8;
 VAR_10->handle = VAR_9;

 VAR_11 = FUNC_0(VAR_8, &VAR_10->attr);
 if (VAR_11) {
  FUNC_1(VAR_10);
  return VAR_11;
 }

 FUNC_4(&VAR_3);
 FUNC_3(&VAR_10->node, &VAR_2);
 FUNC_5(&VAR_3);

 return 0;
}
