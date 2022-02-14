
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_cec_dev {int reg; int dev; int pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct s5p_cec_dev *VAR_7)
{
 u32 VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_8 = VAR_6 / VAR_0 - 1;

 if (FUNC_1(VAR_7->pmu, VAR_1, &VAR_10)) {
  FUNC_0(VAR_7->dev, "failed to read phy control\n");
  return;
 }

 VAR_10 = (VAR_10 & ~(0x3FF << 16)) | (VAR_8 << 16);

 if (FUNC_2(VAR_7->pmu, VAR_1, VAR_10)) {
  FUNC_0(VAR_7->dev, "failed to write phy control\n");
  return;
 }

 VAR_9 = VAR_0 * 0.00005 - 1;

 FUNC_3(0x0, VAR_7->reg + VAR_5);
 FUNC_3(0x0, VAR_7->reg + VAR_4);
 FUNC_3(0x0, VAR_7->reg + VAR_3);
 FUNC_3(VAR_9, VAR_7->reg + VAR_2);
}
