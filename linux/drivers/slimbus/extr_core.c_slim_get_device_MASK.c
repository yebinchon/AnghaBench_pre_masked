
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_eaddr {int dummy; } ;
struct slim_device {int dummy; } ;
struct slim_controller {int dummy; } ;


 int VAR_0 ;
 struct slim_device* FUNC_0 (int ) ;
 struct slim_device* FUNC_1 (struct slim_controller*,struct slim_eaddr*) ;
 struct slim_device* FUNC_2 (struct slim_controller*,struct slim_eaddr*,int *) ;

struct slim_device *FUNC_3(struct slim_controller *VAR_1,
        struct slim_eaddr *VAR_2)
{
 struct slim_device *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_1, VAR_2, ((void*)0));
  if (!VAR_3)
   return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
