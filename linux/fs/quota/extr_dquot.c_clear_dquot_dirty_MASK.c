
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dquot {int dq_dirty; int dq_flags; int dq_sb; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline int FUNC_5(struct dquot *VAR_3)
{
 if (FUNC_1(VAR_3->dq_sb)->flags & VAR_0)
  return FUNC_4(VAR_1, &VAR_3->dq_flags);

 FUNC_2(&VAR_2);
 if (!FUNC_4(VAR_1, &VAR_3->dq_flags)) {
  FUNC_3(&VAR_2);
  return 0;
 }
 FUNC_0(&VAR_3->dq_dirty);
 FUNC_3(&VAR_2);
 return 1;
}
