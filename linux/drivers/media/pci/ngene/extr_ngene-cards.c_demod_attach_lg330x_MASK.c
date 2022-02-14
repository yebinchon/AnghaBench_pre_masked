
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngene_channel {int * fe; int i2c_adapter; TYPE_2__* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int * FUNC_1 (int ,int *,int,int *,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct ngene_channel *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev->pci_dev->dev;

 VAR_5->fe = FUNC_1(VAR_2, &VAR_1,
         0xb2 >> 1, &VAR_5->i2c_adapter);
 if (VAR_5->fe == ((void*)0)) {
  FUNC_0(VAR_6, "No LGDT330x found!\n");
  return -VAR_0;
 }

 FUNC_1(VAR_4, VAR_5->fe, VAR_5->i2c_adapter,
     &VAR_3, 0);

 return (VAR_5->fe) ? 0 : -VAR_0;
}
