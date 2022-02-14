
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fastpath {scalar_t__ rx_frag_size; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(const struct bnx2x_fastpath *VAR_0, void *VAR_1)
{
 if (VAR_0->rx_frag_size)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
