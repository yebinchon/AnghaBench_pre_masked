
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct channel_info {TYPE_3__* i2c_client; int i2c_adapter; scalar_t__ frontend; } ;
struct c8sectpfei {int tsin_count; struct channel_info** channel_data; } ;
struct c8sectpfe {int dummy; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (struct c8sectpfe*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct c8sectpfe *VAR_0,
     struct c8sectpfei *VAR_1)
{
 int VAR_2;
 struct channel_info *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->tsin_count; VAR_2++) {

  VAR_3 = VAR_1->channel_data[VAR_2];

  if (VAR_3) {
   if (VAR_3->frontend) {
    FUNC_2(VAR_3->frontend);
    FUNC_1(VAR_3->frontend);
   }

   FUNC_3(VAR_3->i2c_adapter);

   if (VAR_3->i2c_client) {
    FUNC_5(VAR_3->i2c_client->dev.driver->owner);
    FUNC_4(VAR_3->i2c_client);
   }
  }
 }

 FUNC_0(VAR_0);
}
