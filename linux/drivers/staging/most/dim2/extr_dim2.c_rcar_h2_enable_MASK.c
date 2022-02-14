
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dim2_hdm {scalar_t__ clk_speed; scalar_t__ io_base; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int *) ;
 struct dim2_hdm* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct dim2_hdm *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 VAR_2->clk = FUNC_4(&VAR_1->dev, ((void*)0));
 if (FUNC_0(VAR_2->clk)) {
  FUNC_3(&VAR_1->dev, "cannot get clock\n");
  return FUNC_1(VAR_2->clk);
 }

 VAR_3 = FUNC_2(VAR_2->clk);
 if (VAR_3) {
  FUNC_3(&VAR_1->dev, "%s\n", "clk_prepare_enable failed");
  return VAR_3;
 }

 if (VAR_2->clk_speed >= VAR_0) {

  FUNC_6(0x03, VAR_2->io_base + 0x600);

  FUNC_6(0x888, VAR_2->io_base + 0x38);
 } else {

  FUNC_6(0x04, VAR_2->io_base + 0x600);
 }



 FUNC_6(0x03, VAR_2->io_base + 0x500);
 FUNC_6(0x0002FF02, VAR_2->io_base + 0x508);

 return 0;
}
