
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct TYPE_6__ {char* name; int mode; } ;
struct TYPE_7__ {int store; int show; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_7)
{
 unsigned int VAR_8;

 VAR_4 = FUNC_2(sizeof(struct device_attribute), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_4->attr);
 VAR_4->attr.name = "lowbatt_hibernate";
 VAR_4->attr.mode = VAR_2 | VAR_3;
 VAR_4->show = VAR_5;
 VAR_4->store = VAR_6;

 VAR_8 = FUNC_0(&VAR_7->dev, VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  return VAR_8;
 }

 return 0;
}
