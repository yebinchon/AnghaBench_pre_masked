
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sbsm_data {scalar_t__ cur_chan; TYPE_1__* client; } ;
struct i2c_mux_core {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 struct sbsm_data* FUNC_2 (struct i2c_mux_core*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_mux_core *VAR_2, u32 VAR_3)
{
 struct sbsm_data *VAR_4 = FUNC_2(VAR_2);
 struct device *VAR_5 = &VAR_4->client->dev;
 int VAR_6 = 0;
 u16 VAR_7;

 if (VAR_4->cur_chan == VAR_3)
  return VAR_6;


 VAR_7 = FUNC_0(VAR_1 + VAR_3);
 VAR_6 = FUNC_3(VAR_4->client, VAR_0, VAR_7);
 if (VAR_6)
  FUNC_1(VAR_5, "Failed to select channel %i\n", VAR_3);
 else
  VAR_4->cur_chan = VAR_3;

 return VAR_6;
}
