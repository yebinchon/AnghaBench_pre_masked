
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {int * smfc; int * idmac_ch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct csi_priv *VAR_0)
{
 if (VAR_0->idmac_ch)
  FUNC_0(VAR_0->idmac_ch);
 VAR_0->idmac_ch = ((void*)0);

 if (VAR_0->smfc)
  FUNC_1(VAR_0->smfc);
 VAR_0->smfc = ((void*)0);
}
