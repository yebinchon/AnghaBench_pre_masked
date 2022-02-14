
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int * rot_out_ch; int * rot_in_ch; int * out_ch; int * ic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct prp_priv *VAR_0)
{
 if (VAR_0->ic)
  FUNC_0(VAR_0->ic);
 VAR_0->ic = ((void*)0);

 if (VAR_0->out_ch)
  FUNC_1(VAR_0->out_ch);
 VAR_0->out_ch = ((void*)0);

 if (VAR_0->rot_in_ch)
  FUNC_1(VAR_0->rot_in_ch);
 VAR_0->rot_in_ch = ((void*)0);

 if (VAR_0->rot_out_ch)
  FUNC_1(VAR_0->rot_out_ch);
 VAR_0->rot_out_ch = ((void*)0);
}
