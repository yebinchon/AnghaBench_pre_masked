
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov2680_dev {int is_enabled; int xvclk; int reset_gpio; int supplies; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct ov2680_dev*) ;
 int FUNC_3 (struct ov2680_dev*) ;
 int FUNC_4 (struct ov2680_dev*) ;
 int FUNC_5 (struct ov2680_dev*) ;
 struct device* FUNC_6 (struct ov2680_dev*) ;
 int FUNC_7 (struct ov2680_dev*,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct ov2680_dev *VAR_2)
{
 struct device *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 if (VAR_2->is_enabled)
  return 0;

 VAR_4 = FUNC_8(VAR_0, VAR_2->supplies);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3, "failed to enable regulators: %d\n", VAR_4);
  return VAR_4;
 }

 if (!VAR_2->reset_gpio) {
  VAR_4 = FUNC_7(VAR_2, VAR_1, 0x01);
  if (VAR_4 != 0) {
   FUNC_1(VAR_3, "sensor soft reset failed\n");
   return VAR_4;
  }
  FUNC_9(1000, 2000);
 } else {
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 }

 VAR_4 = FUNC_0(VAR_2->xvclk);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->is_enabled = 1;


 FUNC_5(VAR_2);
 FUNC_9(1000, 2000);
 FUNC_4(VAR_2);

 return 0;
}
