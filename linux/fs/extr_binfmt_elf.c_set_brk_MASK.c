
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long start_brk; unsigned long brk; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_3, unsigned long VAR_4, int VAR_5)
{
 VAR_3 = FUNC_0(VAR_3);
 VAR_4 = FUNC_0(VAR_4);
 if (VAR_4 > VAR_3) {





  int VAR_6 = FUNC_1(VAR_3, VAR_4 - VAR_3,
    VAR_5 & VAR_0 ? VAR_1 : 0);
  if (VAR_6)
   return VAR_6;
 }
 VAR_2->mm->start_brk = VAR_2->mm->brk = VAR_4;
 return 0;
}
