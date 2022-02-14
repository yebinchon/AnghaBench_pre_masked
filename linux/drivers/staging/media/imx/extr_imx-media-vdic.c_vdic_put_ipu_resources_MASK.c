
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int * vdi; int * vdi_in_ch_n; int * vdi_in_ch; int * vdi_in_ch_p; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vdic_priv *VAR_0)
{
 if (VAR_0->vdi_in_ch_p)
  FUNC_1(VAR_0->vdi_in_ch_p);
 VAR_0->vdi_in_ch_p = ((void*)0);

 if (VAR_0->vdi_in_ch)
  FUNC_1(VAR_0->vdi_in_ch);
 VAR_0->vdi_in_ch = ((void*)0);

 if (VAR_0->vdi_in_ch_n)
  FUNC_1(VAR_0->vdi_in_ch_n);
 VAR_0->vdi_in_ch_n = ((void*)0);

 if (!FUNC_0(VAR_0->vdi))
  FUNC_2(VAR_0->vdi);
 VAR_0->vdi = ((void*)0);
}
