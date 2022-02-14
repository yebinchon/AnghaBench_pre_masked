
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct con3270 {int nr_lines; int lines; TYPE_1__* cline; } ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (struct con3270*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct con3270 *VAR_0)
{
 if (!FUNC_2(&VAR_0->cline->list))

  return;
 FUNC_1(&VAR_0->cline->list, &VAR_0->lines);
 VAR_0->nr_lines++;
 FUNC_0(VAR_0);
}
