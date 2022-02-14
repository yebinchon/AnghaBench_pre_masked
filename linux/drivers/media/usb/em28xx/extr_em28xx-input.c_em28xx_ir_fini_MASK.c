
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_IR {struct em28xx_IR* i2c_client; int rc; } ;
struct em28xx {int ref; struct em28xx_IR* ir; TYPE_1__* intf; scalar_t__ is_audio_only; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx_IR*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct em28xx *VAR_1)
{
 struct em28xx_IR *VAR_2 = VAR_1->ir;

 if (VAR_1->is_audio_only) {

  return 0;
 }

 FUNC_0(&VAR_1->intf->dev, "Closing input extension\n");

 FUNC_1(VAR_1);


 if (!VAR_2)
  goto ref_put;

 FUNC_4(VAR_2->rc);

 FUNC_2(VAR_2->i2c_client);


 FUNC_2(VAR_2);
 VAR_1->ir = ((void*)0);

ref_put:
 FUNC_3(&VAR_1->ref, VAR_0);

 return 0;
}
