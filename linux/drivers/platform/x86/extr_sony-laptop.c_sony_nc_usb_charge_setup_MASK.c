
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_6__ {int store; int show; TYPE_2__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int,unsigned int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 unsigned int VAR_8;

 if (FUNC_4(0x0155, 0x0000, &VAR_8) || !(VAR_8 & 0x01)) {



  FUNC_3("No USB Charge capability found\n");
  return 0;
 }

 VAR_6 = FUNC_2(sizeof(struct device_attribute), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_5(&VAR_6->attr);
 VAR_6->attr.name = "usb_charge";
 VAR_6->attr.mode = VAR_2 | VAR_3;
 VAR_6->show = VAR_4;
 VAR_6->store = VAR_5;

 VAR_8 = FUNC_0(&VAR_7->dev, VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
  return VAR_8;
 }

 return 0;
}
