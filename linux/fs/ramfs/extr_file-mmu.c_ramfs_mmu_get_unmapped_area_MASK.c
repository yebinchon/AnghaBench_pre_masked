
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 TYPE_2__* VAR_0 ;
 unsigned long FUNC_0 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct file *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 return VAR_0->mm->get_unmapped_area(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
