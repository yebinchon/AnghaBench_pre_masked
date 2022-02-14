
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {long long f_pos; } ;
struct TYPE_2__ {long long read_size; } ;


 long long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long long
FUNC_2(struct file *VAR_3, long long VAR_4, int VAR_5)
{
 FUNC_0(&VAR_2);
 switch (VAR_5) {
  case 0:
   VAR_3->f_pos = VAR_4;
   break;
  case 1:
   VAR_3->f_pos += VAR_4;
   if (VAR_3->f_pos > VAR_1.read_size)
    VAR_3->f_pos = VAR_1.read_size;
   break;
  case 2:
   VAR_3->f_pos = VAR_1.read_size;
   break;
  default:
   FUNC_1(&VAR_2);
   return -VAR_0;
 }
 FUNC_1(&VAR_2);
 return VAR_3->f_pos;
}
