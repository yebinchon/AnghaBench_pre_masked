
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menelaus_vtg {int vtg_bits; int vtg_shift; int mode_reg; int vtg_reg; int name; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int lock; struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,int ,int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_6(const struct menelaus_vtg *VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct i2c_client *VAR_7 = VAR_0->client;

 FUNC_4(&VAR_0->lock);

 VAR_6 = FUNC_1(VAR_1->vtg_reg);
 if (VAR_6 < 0)
  goto out;
 VAR_5 = VAR_6 & ~(((1 << VAR_1->vtg_bits) - 1) << VAR_1->vtg_shift);
 VAR_5 |= VAR_3 << VAR_1->vtg_shift;

 FUNC_0(&VAR_7->dev, "Setting voltage '%s'"
    "to %d mV (reg 0x%02x, val 0x%02x)\n",
   VAR_1->name, VAR_2, VAR_1->vtg_reg, VAR_5);

 VAR_6 = FUNC_2(VAR_1->vtg_reg, VAR_5);
 if (VAR_6 < 0)
  goto out;
 VAR_6 = FUNC_2(VAR_1->mode_reg, VAR_4);
out:
 FUNC_5(&VAR_0->lock);
 if (VAR_6 == 0) {

  FUNC_3(1);
 }
 return VAR_6;
}
