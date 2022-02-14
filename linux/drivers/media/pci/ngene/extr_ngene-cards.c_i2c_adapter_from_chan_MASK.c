
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngene_channel {int number; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {struct i2c_adapter i2c_adapter; } ;



__attribute__((used)) static struct i2c_adapter *FUNC_0(struct ngene_channel *VAR_0)
{

 if (VAR_0->number < 2)
  return &VAR_0->dev->channel[0].i2c_adapter;

 return &VAR_0->dev->channel[1].i2c_adapter;
}
