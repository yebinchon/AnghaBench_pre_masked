
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {int class; } ;




 int VAR_0 ;
 int FUNC_0 (struct urdev*) ;

__attribute__((used)) static int FUNC_1(struct urdev *VAR_1)
{
 switch (VAR_1->class) {
 case 128:
  return 0;
 case 129:
  return FUNC_0(VAR_1);
 default:
  return -VAR_0;
 }
}
