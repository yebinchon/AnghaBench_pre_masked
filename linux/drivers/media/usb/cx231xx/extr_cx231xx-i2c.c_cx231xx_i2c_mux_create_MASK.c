
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx231xx {TYPE_2__* muxc; int dev; TYPE_1__* i2c_bus; } ;
struct TYPE_4__ {struct cx231xx* priv; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int,int ,int ,int ,int *) ;

int FUNC_1(struct cx231xx *VAR_2)
{
 VAR_2->muxc = FUNC_0(&VAR_2->i2c_bus[1].i2c_adap, VAR_2->dev, 2, 0, 0,
      VAR_1, ((void*)0));
 if (!VAR_2->muxc)
  return -VAR_0;
 VAR_2->muxc->priv = VAR_2;
 return 0;
}
