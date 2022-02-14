
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_rdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (unsigned int,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(FUNC_1(VAR_3)->i_rdev);

 if (VAR_2[VAR_5] == VAR_1)
  return FUNC_2(VAR_5, VAR_4);

 return -VAR_0;
}
