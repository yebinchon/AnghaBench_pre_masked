
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i2c_adapter {int dummy; } ;
struct ngene_channel {scalar_t__ number; struct i2c_adapter i2c_adapter; TYPE_2__* dev; } ;
struct device {int dummy; } ;
typedef scalar_t__ s16 ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct i2c_adapter*,scalar_t__,scalar_t__) ;

__attribute__((used)) static s16 FUNC_3(void *VAR_0, s16 VAR_1, int VAR_2)
{
 struct ngene_channel *VAR_3 = VAR_0;
 struct device *VAR_4 = &VAR_3->dev->pci_dev->dev;
 struct i2c_adapter *VAR_5 = &VAR_3->i2c_adapter;
 u16 VAR_6 = 0;

 if (VAR_2) {
  VAR_6 = (u16) VAR_1;
  FUNC_0(VAR_4, "write deviation %d\n",
    VAR_1);
  FUNC_2(VAR_5, 0x1000 + VAR_3->number, VAR_6);
 } else {
  if (FUNC_1(VAR_5, 0x1000 + VAR_3->number, &VAR_6))
   VAR_6 = 0;
  FUNC_0(VAR_4, "read deviation %d\n",
    (s16)VAR_6);
 }

 return (s16) VAR_6;
}
