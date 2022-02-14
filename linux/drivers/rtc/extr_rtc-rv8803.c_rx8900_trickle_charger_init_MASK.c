
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rv8803_data {scalar_t__ type; struct i2c_client* client; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct rv8803_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 int VAR_7;
 u8 VAR_8;

 if (!VAR_6)
  return 0;

 if (VAR_4->type != VAR_3)
  return 0;

 VAR_7 = FUNC_0(VAR_4->client, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = ~(VAR_2 | VAR_1) & (u8)VAR_7;

 if (FUNC_2(VAR_6, "epson,vdet-disable"))
  VAR_8 |= VAR_2;

 if (FUNC_2(VAR_6, "trickle-diode-disable"))
  VAR_8 |= VAR_1;

 return FUNC_1(VAR_4->client, VAR_0,
      VAR_8);
}
