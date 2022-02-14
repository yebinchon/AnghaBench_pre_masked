
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct arcxcnn {TYPE_2__* bl; int client; } ;
struct TYPE_3__ {scalar_t__ brightness; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct arcxcnn* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3)
{
 struct arcxcnn *VAR_4 = FUNC_1(VAR_3);


 FUNC_2(VAR_4->client,
  VAR_2, 0x00);

 FUNC_2(VAR_4->client,
  VAR_0, VAR_1);

 VAR_4->bl->props.brightness = 0;

 FUNC_0(VAR_4->bl);

 return 0;
}
