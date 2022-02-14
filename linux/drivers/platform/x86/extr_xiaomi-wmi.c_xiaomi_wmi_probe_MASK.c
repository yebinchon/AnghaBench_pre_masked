
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xiaomi_wmi {unsigned int key_code; TYPE_1__* input_dev; } ;
struct wmi_device {int dev; } ;
struct TYPE_3__ {char* name; char* phys; int keybit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct xiaomi_wmi*) ;
 TYPE_1__* FUNC_1 (int *) ;
 struct xiaomi_wmi* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned int,int ) ;

int FUNC_5(struct wmi_device *VAR_4, const void *VAR_5)
{
 struct xiaomi_wmi *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(struct xiaomi_wmi), VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_1;
 FUNC_0(&VAR_4->dev, VAR_6);

 VAR_6->input_dev = FUNC_1(&VAR_4->dev);
 if (VAR_6->input_dev == ((void*)0))
  return -VAR_1;
 VAR_6->input_dev->name = "Xiaomi WMI keys";
 VAR_6->input_dev->phys = "wmi/input0";

 VAR_6->key_code = *((const unsigned int *)VAR_5);
 FUNC_4(VAR_2, VAR_6->input_dev->evbit);
 FUNC_4(VAR_6->key_code, VAR_6->input_dev->keybit);

 return FUNC_3(VAR_6->input_dev);
}
