
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int sm_list; } ;
struct csio_ioreq {TYPE_1__ sm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static inline void
FUNC_3(struct csio_ioreq *VAR_1, struct list_head *VAR_2)
{
 FUNC_1(&VAR_1->sm, VAR_0);
 if (FUNC_0(&VAR_1->sm.sm_list))
  FUNC_2(&VAR_1->sm.sm_list, VAR_2);
}
