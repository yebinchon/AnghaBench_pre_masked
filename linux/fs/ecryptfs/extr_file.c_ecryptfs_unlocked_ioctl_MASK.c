
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {long (* unlocked_ioctl ) (struct file*,unsigned int,unsigned long) ;} ;


 long VAR_0 ;





 struct file* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,int ) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long
FUNC_4(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct file *VAR_4 = FUNC_0(VAR_1);
 long VAR_5 = -VAR_0;

 if (!VAR_4->f_op->unlocked_ioctl)
  return VAR_5;

 switch (VAR_2) {
 case 132:
 case 131:
 case 129:
 case 130:
 case 128:
  VAR_5 = VAR_4->f_op->unlocked_ioctl(VAR_4, VAR_2, VAR_3);
  FUNC_2(FUNC_1(VAR_1), FUNC_1(VAR_4));

  return VAR_5;
 default:
  return VAR_5;
 }
}
