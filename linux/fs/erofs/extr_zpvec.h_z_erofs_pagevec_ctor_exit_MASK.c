
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pagevec_ctor {int curr; int pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct z_erofs_pagevec_ctor *VAR_0,
          bool VAR_1)
{
 if (!VAR_0->curr)
  return;

 if (VAR_1)
  FUNC_1(VAR_0->pages);
 else
  FUNC_0(VAR_0->curr);
}
