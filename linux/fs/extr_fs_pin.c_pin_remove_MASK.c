
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct fs_pin {int done; TYPE_1__ wait; int s_list; int m_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct fs_pin *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->m_list);
 FUNC_0(&VAR_1->s_list);
 FUNC_3(&VAR_0);
 FUNC_2(&VAR_1->wait.lock);
 VAR_1->done = 1;
 FUNC_5(&VAR_1->wait);
 FUNC_4(&VAR_1->wait.lock);
}
