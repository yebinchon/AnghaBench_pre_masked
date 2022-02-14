
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct w1_slave {int dev; int name; struct w1_f19_data* family_data; } ;
struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int * quirks; TYPE_1__ dev; int name; struct w1_slave* algo_data; int * algo; int owner; } ;
struct w1_f19_data {int speed; TYPE_2__ adapter; int stretch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct w1_slave*,int) ;
 struct w1_f19_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct w1_slave *VAR_7)
{
 struct w1_f19_data *VAR_8 = ((void*)0);


 VAR_8 = FUNC_1(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_7->family_data = VAR_8;


 switch (VAR_3) {
 case 100:
  FUNC_0(VAR_7, 0);
  break;
 case 400:
  FUNC_0(VAR_7, 1);
  break;
 case 900:
  FUNC_0(VAR_7, 2);
  break;
 default:






  VAR_8->speed = 1;
 }





 VAR_8->stretch = VAR_4;


 VAR_8->adapter.owner = VAR_2;
 VAR_8->adapter.algo = &VAR_6;
 VAR_8->adapter.algo_data = VAR_7;
 FUNC_4(VAR_8->adapter.name, "w1-");
 FUNC_3(VAR_8->adapter.name, VAR_7->name);
 VAR_8->adapter.dev.parent = &VAR_7->dev;
 VAR_8->adapter.quirks = &VAR_5;

 return FUNC_2(&VAR_8->adapter);
}
