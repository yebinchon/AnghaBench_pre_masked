
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_4 ;

int FUNC_5(int VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8;
 struct i2c_client *VAR_9 = VAR_4->client;

 FUNC_3(&VAR_4->lock);
 VAR_8 = FUNC_2(VAR_3, VAR_6);
 if (VAR_8 < 0)
  goto out;

 FUNC_0(&VAR_9->dev, "regulator sleep configuration: %02x\n", VAR_6);

 VAR_8 = FUNC_1(VAR_2);
 if (VAR_8 < 0)
  goto out;
 VAR_7 = (VAR_1 | VAR_0);
 if (VAR_5)
  VAR_8 |= VAR_7;
 else
  VAR_8 &= ~VAR_7;
 VAR_8 = FUNC_2(VAR_2, VAR_8);
out:
 FUNC_4(&VAR_4->lock);
 return VAR_8;
}
