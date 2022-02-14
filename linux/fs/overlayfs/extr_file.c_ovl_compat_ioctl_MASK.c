
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 long FUNC_0 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_3, unsigned int VAR_4,
        unsigned long VAR_5)
{
 switch (VAR_4) {
 case 129:
  VAR_4 = VAR_1;
  break;

 case 128:
  VAR_4 = VAR_2;
  break;

 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
