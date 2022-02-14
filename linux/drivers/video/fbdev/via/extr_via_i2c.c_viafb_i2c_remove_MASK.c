
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_i2c_stuff {int adapter; scalar_t__ is_active; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct via_i2c_stuff* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct via_i2c_stuff *VAR_4 = &VAR_1[VAR_3];




  if (VAR_4->is_active)
   FUNC_0(&VAR_4->adapter);
 }
 return 0;
}
