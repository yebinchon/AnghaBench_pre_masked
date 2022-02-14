
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_mode; TYPE_1__* private_data; } ;
struct TYPE_2__ {int * current_node; } ;
typedef TYPE_1__ DATA ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 long FUNC_1 (struct file*,unsigned int,unsigned long,int *) ;
 int * VAR_5 ;

__attribute__((used)) static long FUNC_2(struct file * VAR_6,
      unsigned int VAR_7, unsigned long VAR_8)
{
 DATA *VAR_9 = VAR_6->private_data;

 switch (VAR_7) {
 case 138:
 case 135:
  if ((VAR_6->f_mode & VAR_3) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8,
         VAR_5);

 case 130:
 case 129:
  if ((VAR_6->f_mode & VAR_4) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8,
         VAR_5);

 case 136:
 case 142:
 case 137:
 case 134:
  if ((VAR_6->f_mode & VAR_3) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8,
         VAR_9->current_node);

 case 128:
 case 140:
 case 139:
 case 141:
 case 131:
 case 132:
 case 133:
  if ((VAR_6->f_mode & VAR_3) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8, ((void*)0));

 case 148:
 case 144:
 case 145:
 case 146:
 case 147:
  if ((VAR_6->f_mode & VAR_3) == 0)
   return -VAR_0;
  return FUNC_0(VAR_6,VAR_7,VAR_8);

 case 143:
  if ((VAR_6->f_mode & VAR_4) == 0)
   return -VAR_0;
  return FUNC_0(VAR_6,VAR_7,VAR_8);

 default:
  return -VAR_1;
 };
}
