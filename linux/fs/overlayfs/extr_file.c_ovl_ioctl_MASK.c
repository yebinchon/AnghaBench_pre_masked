
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long VAR_0 ;




 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long) ;
 long FUNC_2 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 long VAR_4;

 switch (VAR_2) {
 case 129:
 case 131:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;

 case 128:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 case 130:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;

 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
