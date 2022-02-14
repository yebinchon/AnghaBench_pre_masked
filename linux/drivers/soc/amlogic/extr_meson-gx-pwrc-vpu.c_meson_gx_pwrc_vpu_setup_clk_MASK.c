
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_gx_pwrc_vpu {int vpu_clk; int vapb_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct meson_gx_pwrc_vpu *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->vpu_clk);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->vapb_clk);
 if (VAR_1)
  FUNC_0(VAR_0->vpu_clk);

 return VAR_1;
}
