
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct smiapp_sensor {int hvflip_inv_mask; int default_pixel_order; TYPE_3__* vflip; TYPE_2__* hflip; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_5__ {scalar_t__ val; } ;
struct TYPE_4__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct smiapp_sensor *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(&VAR_2->src->sd);
 int VAR_4 = 0;

 if (VAR_2->hflip) {
  if (VAR_2->hflip->val)
   VAR_4 |= VAR_0;

  if (VAR_2->vflip->val)
   VAR_4 |= VAR_1;
 }

 VAR_4 ^= VAR_2->hvflip_inv_mask;

 FUNC_0(&VAR_3->dev, "flip %d\n", VAR_4);
 return VAR_2->default_pixel_order ^ VAR_4;
}
