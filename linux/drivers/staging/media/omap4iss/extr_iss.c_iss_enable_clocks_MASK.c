
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int iss_fck; int dev; int iss_ctrlclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct iss_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->iss_fck);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "clk_enable iss_fck failed\n");
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0->iss_ctrlclk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "clk_enable iss_ctrlclk failed\n");
  FUNC_0(VAR_0->iss_fck);
  return VAR_1;
 }

 return 0;
}
