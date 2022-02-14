
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_flags; TYPE_1__* ki_filp; } ;
struct TYPE_2__ {unsigned int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(struct kiocb *VAR_4)
{
 unsigned int VAR_5 = VAR_4->ki_filp->f_flags;

 if (VAR_4->ki_flags & VAR_0)
  VAR_5 |= VAR_2;
 if (VAR_4->ki_flags & VAR_1)
  VAR_5 |= VAR_3;

 return VAR_5;
}
