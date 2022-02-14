
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct si4713_device {int sd; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct si4713_device*,int ,int *,int ,scalar_t__*,int ,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 struct i2c_client* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct si4713_device *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(&VAR_5->sd);
 int VAR_7;
 u8 VAR_8[VAR_3];

 VAR_7 = FUNC_1(VAR_5, VAR_2,
     ((void*)0), 0,
     VAR_8, FUNC_0(VAR_8),
     VAR_0);

 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_8[1] == VAR_4) {
  FUNC_4(&VAR_5->sd, "chip found @ 0x%02x (%s)\n",
    VAR_6->addr << 1, VAR_6->adapter->name);
 } else {
  FUNC_2(&VAR_5->sd, "Invalid product number 0x%X\n", VAR_8[1]);
  VAR_7 = -VAR_1;
 }
 return VAR_7;
}
