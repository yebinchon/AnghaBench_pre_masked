
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* file; } ;
struct TYPE_2__ {int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3, struct fd *VAR_4)
{
 struct fd VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5.file)
  return -VAR_0;
 if (VAR_5.file->f_op != &VAR_2) {
  FUNC_1(VAR_5);
  return -VAR_1;
 }
 *VAR_4 = VAR_5;
 return 0;
}
