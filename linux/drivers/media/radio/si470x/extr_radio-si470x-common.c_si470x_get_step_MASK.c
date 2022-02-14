
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct si470x_device *VAR_2)
{

 switch ((VAR_2->registers[VAR_0] & VAR_1) >> 4) {

 case 0:
  return 200 * 16;

 case 1:
  return 100 * 16;

 default:
  return 50 * 16;
 }
}
