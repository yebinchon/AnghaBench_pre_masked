
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t type; } ;
struct dquot {TYPE_2__ dq_id; int dq_sb; int dq_dirty; int dq_flags; } ;
struct TYPE_6__ {int flags; TYPE_1__* info; } ;
struct TYPE_4__ {int dqi_dirty_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct dquot *VAR_4)
{
 int VAR_5 = 1;

 if (!FUNC_5(VAR_1, &VAR_4->dq_flags))
  return 0;

 if (FUNC_1(VAR_4->dq_sb)->flags & VAR_0)
  return FUNC_4(VAR_2, &VAR_4->dq_flags);


 if (FUNC_5(VAR_2, &VAR_4->dq_flags))
  return 1;

 FUNC_2(&VAR_3);
 if (!FUNC_4(VAR_2, &VAR_4->dq_flags)) {
  FUNC_0(&VAR_4->dq_dirty, &FUNC_1(VAR_4->dq_sb)->
    info[VAR_4->dq_id.type].dqi_dirty_list);
  VAR_5 = 0;
 }
 FUNC_3(&VAR_3);
 return VAR_5;
}
