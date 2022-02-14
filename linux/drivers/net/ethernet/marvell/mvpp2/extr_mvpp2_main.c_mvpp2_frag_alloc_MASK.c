
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_bm_pool {scalar_t__ frag_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void *FUNC_3(const struct mvpp2_bm_pool *VAR_2)
{
 if (FUNC_1(VAR_2->frag_size <= VAR_1))
  return FUNC_2(VAR_2->frag_size);
 else
  return FUNC_0(VAR_2->frag_size, VAR_0);
}
