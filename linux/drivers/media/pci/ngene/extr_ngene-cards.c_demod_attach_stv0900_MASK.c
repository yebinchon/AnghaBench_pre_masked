
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stv090x_config {scalar_t__ tuner_i2c_lock; } ;
struct ngene_channel {size_t number; TYPE_4__* fe; TYPE_3__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {struct ngene_channel* analog_demod_priv; } ;
struct TYPE_8__ {TYPE_2__* card_info; TYPE_1__* pci_dev; } ;
struct TYPE_7__ {int * lnb; scalar_t__* fe_config; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_4__* FUNC_1 (int ,...) ;
 int FUNC_2 (TYPE_4__*) ;
 struct i2c_adapter* FUNC_3 (struct ngene_channel*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct ngene_channel *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev->pci_dev->dev;
 struct i2c_adapter *VAR_7 = FUNC_3(VAR_5);
 struct stv090x_config *VAR_8 = (struct stv090x_config *)
  VAR_5->dev->card_info->fe_config[VAR_5->number];

 VAR_5->fe = FUNC_1(VAR_4, VAR_8, VAR_7,
   (VAR_5->number & 1) == 0 ? VAR_1
      : VAR_2);
 if (VAR_5->fe == ((void*)0)) {
  FUNC_0(VAR_6, "No STV0900 found!\n");
  return -VAR_0;
 }


 if (VAR_8->tuner_i2c_lock)
  VAR_5->fe->analog_demod_priv = VAR_5;

 if (!FUNC_1(VAR_3, VAR_5->fe, VAR_7, 0,
   0, VAR_5->dev->card_info->lnb[VAR_5->number])) {
  FUNC_0(VAR_6, "No LNBH24 found!\n");
  FUNC_2(VAR_5->fe);
  VAR_5->fe = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
