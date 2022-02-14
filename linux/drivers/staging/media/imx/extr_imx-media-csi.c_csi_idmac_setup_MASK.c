
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {int idmac_ch; int smfc; int ipu; } ;


 int FUNC_0 (struct csi_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct csi_priv *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_1(VAR_0->idmac_ch);
 FUNC_2(VAR_0->ipu);

 FUNC_5(VAR_0->smfc);


 FUNC_4(VAR_0->idmac_ch, 0);
 FUNC_4(VAR_0->idmac_ch, 1);


 FUNC_3(VAR_0->idmac_ch);

 return 0;
}
