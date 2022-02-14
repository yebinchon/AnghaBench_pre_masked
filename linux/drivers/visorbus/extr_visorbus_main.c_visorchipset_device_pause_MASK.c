
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int pausing; } ;


 int FUNC_0 (struct visor_device*,int) ;

int FUNC_1(struct visor_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, 1);
 if (VAR_1 < 0) {
  VAR_0->pausing = 0;
  return VAR_1;
 }
 return 0;
}
