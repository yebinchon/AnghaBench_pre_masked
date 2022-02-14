
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int len; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 struct xdp_frame* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  if (FUNC_2(VAR_0)) {
   struct xdp_frame *VAR_1 = FUNC_3(VAR_0);

   return VAR_1->len;
  }
  return FUNC_0(VAR_0);
 } else {
  return 0;
 }
}
