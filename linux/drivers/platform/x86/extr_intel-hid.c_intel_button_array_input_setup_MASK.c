
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct intel_hid_priv {TYPE_2__* array; } ;
struct TYPE_5__ {int bustype; } ;
struct TYPE_6__ {char* name; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_hid_priv* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct intel_hid_priv *VAR_4 = FUNC_0(&VAR_3->dev);
 int VAR_5;


 VAR_4->array = FUNC_1(&VAR_3->dev);
 if (!VAR_4->array)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_4->array, VAR_2, ((void*)0));
 if (VAR_5)
  return VAR_5;

 VAR_4->array->name = "Intel HID 5 button array";
 VAR_4->array->id.bustype = VAR_0;

 return FUNC_2(VAR_4->array);
}
