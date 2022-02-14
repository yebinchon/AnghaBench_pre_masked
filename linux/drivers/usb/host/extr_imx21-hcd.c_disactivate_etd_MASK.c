
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx21 {scalar_t__ regs; struct etd_priv* etd; } ;
struct etd_priv {scalar_t__ active_count; } ;


 int FUNC_0 (struct imx21*,struct etd_priv*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct imx21*,int ,int) ;
 int FUNC_2 (struct imx21*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct imx21 *VAR_5, int VAR_6)
{
 int VAR_7 = (1 << VAR_6);
 struct etd_priv *VAR_8 = &VAR_5->etd[VAR_6];

 FUNC_3(VAR_7, VAR_5->regs + VAR_2);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_3(VAR_7, VAR_5->regs + VAR_3);
 FUNC_2(VAR_5, VAR_1, VAR_7);

 VAR_8->active_count = 0;

 FUNC_0(VAR_5, VAR_8, VAR_4);
}
