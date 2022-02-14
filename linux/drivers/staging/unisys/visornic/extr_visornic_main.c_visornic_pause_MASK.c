
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int visorbus_state_complete_func ;
struct visornic_devdata {int dummy; } ;
struct visor_device {int device; } ;


 struct visornic_devdata* FUNC_0 (int *) ;
 int FUNC_1 (struct visornic_devdata*,int ) ;

__attribute__((used)) static int FUNC_2(struct visor_device *VAR_0,
     visorbus_state_complete_func VAR_1)
{
 struct visornic_devdata *VAR_2 = FUNC_0(&VAR_0->device);

 FUNC_1(VAR_2, VAR_1);
 return 0;
}
