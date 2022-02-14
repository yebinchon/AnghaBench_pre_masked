
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7_csi {int is_init; int mclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct imx7_csi*) ;
 int FUNC_2 (struct imx7_csi*) ;
 int FUNC_3 (struct imx7_csi*) ;

__attribute__((used)) static void FUNC_4(struct imx7_csi *VAR_0)
{
 if (!VAR_0->is_init)
  return;

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->mclk);

 VAR_0->is_init = 0;
}
