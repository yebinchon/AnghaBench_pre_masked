
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_power_supply {int dummy; } ;
struct gb_power_supplies {int supplies_count; int supplies_lock; int supply; struct gb_connection* connection; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gb_power_supplies*) ;
 int FUNC_2 (struct gb_power_supplies*,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gb_power_supplies *VAR_2)
{
 struct gb_connection *VAR_3 = VAR_2->connection;
 int VAR_4;
 int VAR_5;

 FUNC_4(&VAR_2->supplies_lock);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  goto out;

 VAR_2->supply = FUNC_3(VAR_2->supplies_count,
         sizeof(struct gb_power_supply),
         VAR_1);

 if (!VAR_2->supply) {
  VAR_4 = -VAR_0;
  goto out;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->supplies_count; VAR_5++) {
  VAR_4 = FUNC_2(VAR_2, VAR_5);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_3->bundle->dev,
    "Fail to configure supplies devices\n");
   goto out;
  }
 }
out:
 FUNC_5(&VAR_2->supplies_lock);
 return VAR_4;
}
