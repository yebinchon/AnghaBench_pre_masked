
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;
struct ptr_ring {int dummy; } ;


 scalar_t__ FUNC_0 (struct xdp_frame*) ;
 struct xdp_frame* FUNC_1 (struct ptr_ring*) ;
 int FUNC_2 (struct xdp_frame*) ;

__attribute__((used)) static void FUNC_3(struct ptr_ring *VAR_0)
{





 struct xdp_frame *VAR_1;

 while ((VAR_1 = FUNC_1(VAR_0)))
  if (FUNC_0(VAR_1))
   FUNC_2(VAR_1);
}
