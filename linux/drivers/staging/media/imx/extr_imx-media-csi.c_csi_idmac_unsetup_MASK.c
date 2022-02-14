
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {int smfc; int idmac_ch; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int FUNC_0 (struct csi_priv*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct csi_priv *VAR_0,
         enum vb2_buffer_state VAR_1)
{
 FUNC_1(VAR_0->idmac_ch);
 FUNC_2(VAR_0->smfc);

 FUNC_0(VAR_0, VAR_1);
}
