
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int * rot_buf; int ic; int rot_in_ch; int out_ch; int rot_out_ch; struct imx_ic_priv* ic_priv; } ;
struct imx_ic_priv {int ipu_dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct prp_priv *VAR_0)
{
 struct imx_ic_priv *VAR_1 = VAR_0->ic_priv;

 FUNC_2(VAR_0->ic);

 FUNC_3(VAR_0->out_ch);
 FUNC_3(VAR_0->rot_in_ch);
 FUNC_3(VAR_0->rot_out_ch);

 FUNC_4(VAR_0->out_ch, VAR_0->rot_in_ch);

 FUNC_1(VAR_0->ic);

 FUNC_0(VAR_1->ipu_dev, &VAR_0->rot_buf[0]);
 FUNC_0(VAR_1->ipu_dev, &VAR_0->rot_buf[1]);
}
