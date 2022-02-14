
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_host {int id; int (* set_param ) (struct memstick_host*,int ,int ) ;int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct memstick_host*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct memstick_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct memstick_host*,int ,int ) ;

int FUNC_10(struct memstick_host *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_0);
 FUNC_7(&VAR_5);

 VAR_7 = FUNC_2(&VAR_4, VAR_6, 0, 0, VAR_1);
 if (VAR_7 >= 0)
  VAR_6->id = VAR_7;

 FUNC_8(&VAR_5);
 FUNC_4();
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(&VAR_6->dev, "memstick%u", VAR_6->id);

 VAR_7 = FUNC_1(&VAR_6->dev);
 if (VAR_7) {
  FUNC_7(&VAR_5);
  FUNC_5(&VAR_4, VAR_6->id);
  FUNC_8(&VAR_5);
  return VAR_7;
 }

 VAR_6->set_param(VAR_6, VAR_2, VAR_3);
 FUNC_6(VAR_6);
 return 0;
}
