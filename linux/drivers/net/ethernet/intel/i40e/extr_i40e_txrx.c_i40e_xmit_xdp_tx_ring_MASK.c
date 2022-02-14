
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct i40e_ring {int dummy; } ;


 int VAR_0 ;
 struct xdp_frame* FUNC_0 (struct xdp_buff*) ;
 int FUNC_1 (struct xdp_frame*,struct i40e_ring*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct xdp_buff *VAR_1, struct i40e_ring *VAR_2)
{
 struct xdp_frame *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_2(!VAR_3))
  return VAR_0;

 return FUNC_1(VAR_3, VAR_2);
}
