
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera {int module; } ;
struct gb_bundle {int dummy; } ;


 int FUNC_0 (struct gb_camera*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gb_bundle*) ;
 int FUNC_3 (struct gb_bundle*) ;
 struct gb_camera* FUNC_4 (struct gb_bundle*) ;

__attribute__((used)) static void FUNC_5(struct gb_bundle *VAR_0)
{
 struct gb_camera *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->module);
}
