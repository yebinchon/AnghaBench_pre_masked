
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {scalar_t__ read; } ;


 void const* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, struct file *VAR_2, unsigned VAR_3)
{
 if (FUNC_1(VAR_2->f_op->read != VAR_0))
  return 0;
 return FUNC_0(VAR_2) != VAR_1 ? 0 : VAR_3 + 1;
}
