
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct TYPE_6__ {char* name; int mode; } ;
struct TYPE_7__ {int store; int * show; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 unsigned int VAR_6;

 VAR_3 = FUNC_2(sizeof(struct device_attribute), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_3->attr);
 VAR_3->attr.name = "smart_connect";
 VAR_3->attr.mode = VAR_2;
 VAR_3->show = ((void*)0);
 VAR_3->store = VAR_4;

 VAR_6 = FUNC_0(&VAR_5->dev, VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
  return VAR_6;
 }

 return 0;
}
