
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_peripheral {size_t type; int alt_addr; int board_info; scalar_t__ client; scalar_t__ pci_devid; } ;
struct TYPE_3__ {int parent; } ;
struct i2c_adapter {TYPE_1__ dev; int name; } ;
struct TYPE_4__ {int num_i2c_peripherals; struct i2c_peripheral* i2c_peripherals; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int *,int ) ;
 TYPE_2__* VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_2)
{
 struct i2c_peripheral *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_i2c_peripherals; VAR_4++) {
  VAR_3 = &VAR_0->i2c_peripherals[VAR_4];


  if (VAR_3->client)
   continue;

  if (FUNC_3(VAR_2->name, VAR_1[VAR_3->type],
       FUNC_2(VAR_1[VAR_3->type])))
   continue;

  if (VAR_3->pci_devid &&
      !FUNC_0(VAR_2->dev.parent,
        VAR_3->pci_devid)) {
   continue;
  }

  VAR_3->client =
   FUNC_1(VAR_2,
       &VAR_3->board_info,
       VAR_3->alt_addr);
 }
}
