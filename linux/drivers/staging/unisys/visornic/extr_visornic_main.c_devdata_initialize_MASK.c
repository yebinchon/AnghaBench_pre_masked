
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visornic_devdata {int incarnation_id; struct visor_device* dev; } ;
struct visor_device {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static struct visornic_devdata *FUNC_1(
     struct visornic_devdata *VAR_0,
     struct visor_device *VAR_1)
{
 VAR_0->dev = VAR_1;
 VAR_0->incarnation_id = FUNC_0();
 return VAR_0;
}
