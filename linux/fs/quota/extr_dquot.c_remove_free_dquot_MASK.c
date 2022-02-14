
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_free; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct dquot *VAR_1)
{
 if (FUNC_2(&VAR_1->dq_free))
  return;
 FUNC_1(&VAR_1->dq_free);
 FUNC_0(VAR_0);
}
