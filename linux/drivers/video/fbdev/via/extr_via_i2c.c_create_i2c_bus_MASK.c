
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_port_cfg {int ioport_index; } ;
struct pci_dev {int dev; } ;
struct i2c_algo_bit_data {int udelay; int timeout; struct via_port_cfg* data; int getscl; int getsda; int (* setscl ) (struct via_port_cfg*,int) ;int (* setsda ) (struct via_port_cfg*,int) ;} ;
struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {TYPE_1__ dev; struct i2c_algo_bit_data* algo_data; int class; int owner; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct via_port_cfg*,int) ;
 int FUNC_4 (struct via_port_cfg*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_4,
     struct i2c_algo_bit_data *VAR_5,
     struct via_port_cfg *VAR_6,
     struct pci_dev *VAR_7)
{
 VAR_5->setsda = FUNC_4;
 VAR_5->setscl = FUNC_3;
 VAR_5->getsda = VAR_3;
 VAR_5->getscl = VAR_2;
 VAR_5->udelay = 10;
 VAR_5->timeout = 2;
 VAR_5->data = VAR_6;

 FUNC_1(VAR_4->name, "viafb i2c io_port idx 0x%02x",
  VAR_6->ioport_index);
 VAR_4->owner = VAR_1;
 VAR_4->class = VAR_0;
 VAR_4->algo_data = VAR_5;
 if (VAR_7)
  VAR_4->dev.parent = &VAR_7->dev;
 else
  VAR_4->dev.parent = ((void*)0);



 FUNC_4(VAR_6, 1);
 FUNC_3(VAR_6, 1);
 FUNC_2(20);

 return FUNC_0(VAR_4);
}
