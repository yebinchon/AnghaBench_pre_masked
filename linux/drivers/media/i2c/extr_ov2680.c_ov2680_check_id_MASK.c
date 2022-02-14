
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ov2680_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct ov2680_dev*) ;
 int FUNC_2 (struct ov2680_dev*,int ,scalar_t__*) ;
 struct device* FUNC_3 (struct ov2680_dev*) ;

__attribute__((used)) static int FUNC_4(struct ov2680_dev *VAR_3)
{
 struct device *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;
 int VAR_6;

 FUNC_1(VAR_3);

 VAR_6 = FUNC_2(VAR_3, VAR_2, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4, "failed to read chip id high\n");
  return -VAR_0;
 }

 if (VAR_5 != VAR_1) {
  FUNC_0(VAR_4, "chip id: 0x%04x does not match expected 0x%04x\n",
   VAR_5, VAR_1);
  return -VAR_0;
 }

 return 0;
}
