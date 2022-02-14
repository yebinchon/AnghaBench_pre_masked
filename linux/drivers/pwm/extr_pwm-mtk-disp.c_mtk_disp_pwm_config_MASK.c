
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct mtk_disp_pwm {int clk_main; int clk_mm; TYPE_1__* data; } ;
struct TYPE_2__ {int commit_mask; int commit; scalar_t__ has_commit; int con1; int con0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mtk_disp_pwm*,int ,int,int) ;
 struct mtk_disp_pwm* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_9, struct pwm_device *VAR_10,
          int VAR_11, int VAR_12)
{
 struct mtk_disp_pwm *VAR_13 = FUNC_6(VAR_9);
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 u64 VAR_18, VAR_19;
 int VAR_20;
 VAR_19 = FUNC_2(VAR_13->clk_main);
 VAR_14 = FUNC_4(VAR_19 * VAR_12, VAR_1) >>
     VAR_7;
 if (VAR_14 > VAR_3)
  return -VAR_0;

 VAR_18 = VAR_1 * (VAR_14 + 1);
 VAR_15 = FUNC_3(VAR_19 * VAR_12, VAR_18);
 if (VAR_15 > 0)
  VAR_15--;

 VAR_16 = FUNC_3(VAR_19 * VAR_11, VAR_18);
 VAR_17 = VAR_15 | (VAR_16 << VAR_6);

 VAR_20 = FUNC_1(VAR_13->clk_main);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_1(VAR_13->clk_mm);
 if (VAR_20 < 0) {
  FUNC_0(VAR_13->clk_main);
  return VAR_20;
 }

 FUNC_5(VAR_13, VAR_13->data->con0,
     VAR_2,
     VAR_14 << VAR_4);
 FUNC_5(VAR_13, VAR_13->data->con1,
     VAR_8 | VAR_5,
     VAR_17);

 if (VAR_13->data->has_commit) {
  FUNC_5(VAR_13, VAR_13->data->commit,
      VAR_13->data->commit_mask,
      VAR_13->data->commit_mask);
  FUNC_5(VAR_13, VAR_13->data->commit,
      VAR_13->data->commit_mask,
      0x0);
 }

 FUNC_0(VAR_13->clk_mm);
 FUNC_0(VAR_13->clk_main);

 return 0;
}
