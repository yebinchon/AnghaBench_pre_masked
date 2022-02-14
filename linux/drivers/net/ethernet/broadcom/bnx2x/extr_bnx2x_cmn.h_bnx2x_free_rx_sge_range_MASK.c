
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fastpath {scalar_t__ mode; int page_pool; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_fastpath*,int) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_1,
        struct bnx2x_fastpath *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2->mode == VAR_0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_1, VAR_2, VAR_4);

 FUNC_0(VAR_1, &VAR_2->page_pool);
}
