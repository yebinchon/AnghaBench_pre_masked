
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pismo_pdata {int * cs_addrs; int vpp_data; int set_vpp; } ;
struct pismo_eeprom {TYPE_1__* cs; int board; } ;
struct pismo_data {int vpp_data; int vpp; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct pismo_pdata* platform_data; } ;
struct i2c_client {TYPE_2__ dev; int adapter; } ;
typedef int eeprom ;
struct TYPE_5__ {int type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct pismo_data*) ;
 int FUNC_5 (struct pismo_data*) ;
 struct pismo_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct pismo_data*,int,TYPE_1__*,int ) ;
 int FUNC_8 (struct i2c_client*,struct pismo_eeprom*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4,
         const struct i2c_device_id *VAR_5)
{
 struct pismo_pdata *VAR_6 = VAR_4->dev.platform_data;
 struct pismo_eeprom VAR_7;
 struct pismo_data *VAR_8;
 int VAR_9, VAR_10;

 if (!FUNC_3(VAR_4->adapter, VAR_3)) {
  FUNC_1(&VAR_4->dev, "functionality mismatch\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->client = VAR_4;
 if (VAR_6) {
  VAR_8->vpp = VAR_6->set_vpp;
  VAR_8->vpp_data = VAR_6->vpp_data;
 }
 FUNC_4(VAR_4, VAR_8);

 VAR_9 = FUNC_8(VAR_4, &VAR_7, 0, sizeof(VAR_7));
 if (VAR_9 < 0) {
  FUNC_1(&VAR_4->dev, "error reading EEPROM: %d\n", VAR_9);
  goto exit_free;
 }

 FUNC_2(&VAR_4->dev, "%.15s board found\n", VAR_7.board);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7.cs); VAR_10++)
  if (VAR_7.cs[VAR_10].type != 0xff)
   FUNC_7(VAR_8, VAR_10, &VAR_7.cs[VAR_10],
          VAR_6->cs_addrs[VAR_10]);

 return 0;

 exit_free:
 FUNC_5(VAR_8);
 return VAR_9;
}
