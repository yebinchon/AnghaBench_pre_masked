
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;


 int FUNC_0 (int ) ;
 long VAR_4 ;
 long FUNC_1 (unsigned long) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_5, unsigned int VAR_6,
     unsigned long VAR_7)
{
 if (!FUNC_0(VAR_0))
  return -VAR_3;

 switch (VAR_6) {
 case 129:
  if (VAR_4 > 0)
   return VAR_4;
  return -VAR_1;
 case 128:
  return FUNC_1(VAR_7);
 default:
  return -VAR_2;
 }
}
