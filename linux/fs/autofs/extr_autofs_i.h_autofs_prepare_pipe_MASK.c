
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_mode; int f_flags; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct file*) ;

__attribute__((used)) static inline int FUNC_2(struct file *VAR_4)
{
 if (!(VAR_4->f_mode & VAR_1))
  return -VAR_0;
 if (!FUNC_0(FUNC_1(VAR_4)->i_mode))
  return -VAR_0;

 VAR_4->f_flags |= VAR_2;

 VAR_4->f_flags &= ~VAR_3;
 return 0;
}
