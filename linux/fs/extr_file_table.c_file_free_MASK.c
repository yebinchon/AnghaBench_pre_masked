
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fu_rcuhead; } ;
struct file {int f_mode; TYPE_1__ f_u; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;

__attribute__((used)) static inline void FUNC_3(struct file *VAR_3)
{
 FUNC_2(VAR_3);
 if (!(VAR_3->f_mode & VAR_0))
  FUNC_1(&VAR_2);
 FUNC_0(&VAR_3->f_u.fu_rcuhead, VAR_1);
}
