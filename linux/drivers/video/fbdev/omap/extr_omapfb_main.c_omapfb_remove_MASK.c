
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omapfb_device {int state; int * dssdev; } ;
typedef enum omapfb_state { ____Placeholder_omapfb_state } omapfb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omapfb_device*,int) ;
 int FUNC_1 (int *) ;
 struct omapfb_device* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct omapfb_device *VAR_3 = FUNC_2(VAR_2);
 enum omapfb_state VAR_4 = VAR_3->state;



 VAR_3->state = VAR_0;
 FUNC_0(VAR_3, VAR_4);

 FUNC_1(&VAR_1);
 VAR_3->dssdev = ((void*)0);

 return 0;
}
