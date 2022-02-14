
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_altmode_driver {int (* remove ) (struct typec_altmode*) ;} ;
struct typec_altmode {int * ops; int * desc; scalar_t__ active; } ;
struct device {int driver; } ;
struct altmode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct typec_altmode*) ;
 struct altmode* FUNC_2 (struct typec_altmode*) ;
 struct typec_altmode_driver* FUNC_3 (int ) ;
 struct typec_altmode* FUNC_4 (struct device*) ;
 int FUNC_5 (struct altmode*) ;
 int FUNC_6 (struct typec_altmode*,int ) ;
 int FUNC_7 (struct typec_altmode*,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1)
{
 struct typec_altmode_driver *VAR_2 = FUNC_3(VAR_1->driver);
 struct typec_altmode *VAR_3 = FUNC_4(VAR_1);
 struct altmode *VAR_4 = FUNC_2(VAR_3);

 FUNC_5(VAR_4);

 if (VAR_2->remove)
  VAR_2->remove(FUNC_4(VAR_1));

 if (VAR_3->active) {
  FUNC_0(FUNC_6(VAR_3, VAR_0));
  FUNC_7(VAR_3, 0);
 }

 VAR_3->desc = ((void*)0);
 VAR_3->ops = ((void*)0);

 return 0;
}
