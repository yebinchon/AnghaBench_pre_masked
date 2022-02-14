
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 struct xdp_frame* FUNC_2 (void*) ;
 int FUNC_3 (struct xdp_frame*) ;

void FUNC_4(void *VAR_0)
{
 if (!VAR_0)
  return;
 if (FUNC_1(VAR_0)) {
  struct xdp_frame *VAR_1 = FUNC_2(VAR_0);

  FUNC_3(VAR_1);
 } else {
  FUNC_0(VAR_0);
 }
}
