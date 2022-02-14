
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fastpath {scalar_t__ rx_buf_size; scalar_t__ rx_frag_size; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__,int ) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(const struct bnx2x_fastpath *VAR_1, gfp_t VAR_2)
{
 if (VAR_1->rx_frag_size) {

  if (FUNC_4(FUNC_1(VAR_2)))
   return (void *)FUNC_0(VAR_2);

  return FUNC_3(VAR_1->rx_frag_size);
 }

 return FUNC_2(VAR_1->rx_buf_size + VAR_0, VAR_2);
}
