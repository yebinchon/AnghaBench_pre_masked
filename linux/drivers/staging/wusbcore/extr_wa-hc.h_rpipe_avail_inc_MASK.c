
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_rpipe {int seg_list; int segs_available; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct wa_rpipe *VAR_0)
{
 return FUNC_0(&VAR_0->segs_available) > 0
  && !FUNC_1(&VAR_0->seg_list);
}
