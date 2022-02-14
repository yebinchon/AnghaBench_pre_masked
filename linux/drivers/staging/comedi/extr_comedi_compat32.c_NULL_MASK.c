
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct file*,unsigned long) ;
 int FUNC_1 (struct file*,unsigned long) ;
 int FUNC_2 (struct file*,unsigned long) ;
 int FUNC_3 (struct file*,unsigned long) ;
 int FUNC_4 (struct file*,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct file*,unsigned long) ;
 int FUNC_7 (struct file*,unsigned int,unsigned long) ;

long FUNC_8(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 switch (VAR_2) {
 case 135:
 case 134:
 case 129:
 case 138:
 case 137:

  VAR_3 = (unsigned long)FUNC_5(VAR_3);
  VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_3);
  break;
 case 133:
 case 128:
 case 136:
 case 132:
 case 131:
 case 130:

  VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_3);
  break;
 case 144:
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  break;
 case 139:
  VAR_4 = FUNC_6(VAR_1, VAR_3);
  break;
 case 143:
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  break;
 case 142:
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  break;
 case 140:
  VAR_4 = FUNC_4(VAR_1, VAR_3);
  break;
 case 141:
  VAR_4 = FUNC_3(VAR_1, VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
