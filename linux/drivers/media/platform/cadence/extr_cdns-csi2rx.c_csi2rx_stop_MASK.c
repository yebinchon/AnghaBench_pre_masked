
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi2rx_priv {unsigned int max_streams; int dev; int source_subdev; int p_clk; int * pixel_clk; scalar_t__ base; int sys_clk; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct csi2rx_priv *VAR_2)
{
 unsigned int VAR_3;

 FUNC_2(VAR_2->p_clk);
 FUNC_1(VAR_2->sys_clk);

 for (VAR_3 = 0; VAR_3 < VAR_2->max_streams; VAR_3++) {
  FUNC_5(0, VAR_2->base + FUNC_0(VAR_3));

  FUNC_1(VAR_2->pixel_clk[VAR_3]);
 }

 FUNC_1(VAR_2->p_clk);

 if (FUNC_4(VAR_2->source_subdev, VAR_1, VAR_0, 0))
  FUNC_3(VAR_2->dev, "Couldn't disable our subdev\n");
}
