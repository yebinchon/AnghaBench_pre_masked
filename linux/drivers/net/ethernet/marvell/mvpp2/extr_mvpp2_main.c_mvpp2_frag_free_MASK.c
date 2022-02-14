
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_bm_pool {scalar_t__ frag_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(const struct mvpp2_bm_pool *VAR_1, void *VAR_2)
{
 if (FUNC_1(VAR_1->frag_size <= VAR_0))
  FUNC_2(VAR_2);
 else
  FUNC_0(VAR_2);
}
