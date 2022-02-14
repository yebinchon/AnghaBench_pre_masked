
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_altmode_driver {int (* probe ) (struct typec_altmode*) ;} ;
struct typec_altmode {int dummy; } ;
struct device {int driver; } ;
struct altmode {int partner; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct typec_altmode*) ;
 struct altmode* FUNC_2 (struct typec_altmode*) ;
 struct typec_altmode_driver* FUNC_3 (int ) ;
 struct typec_altmode* FUNC_4 (struct device*) ;
 int FUNC_5 (struct altmode*) ;
 int FUNC_6 (struct altmode*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 struct typec_altmode_driver *VAR_2 = FUNC_3(VAR_1->driver);
 struct typec_altmode *VAR_3 = FUNC_4(VAR_1);
 struct altmode *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;


 if (!VAR_4->partner)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_1, "failed to create symlinks\n");
  return VAR_5;
 }

 VAR_5 = VAR_2->probe(VAR_3);
 if (VAR_5)
  FUNC_6(VAR_4);

 return VAR_5;
}
