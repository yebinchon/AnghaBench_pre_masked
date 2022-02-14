
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* file; } ;
struct TYPE_2__ {int * f_op; } ;


 int VAR_0 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(int VAR_2, struct fd *VAR_3)
{
 struct fd VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4.file)
  return -VAR_0;

 if (VAR_4.file->f_op != &VAR_1) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 *VAR_3 = VAR_4;
 return 0;
}
