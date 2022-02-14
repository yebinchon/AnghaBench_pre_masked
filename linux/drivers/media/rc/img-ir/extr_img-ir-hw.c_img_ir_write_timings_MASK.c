
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_timing_regvals {int s11; int s10; int s01; int s00; int ldr; int ft; } ;
struct img_ir_priv_hw {int flags; int * filters; } ;
struct img_ir_priv {int dev; struct img_ir_priv_hw hw; } ;
typedef enum rc_filter_type { ____Placeholder_rc_filter_type } rc_filter_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct img_ir_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct img_ir_priv *VAR_6,
     struct img_ir_timing_regvals *VAR_7,
     enum rc_filter_type VAR_8)
{
 struct img_ir_priv_hw *VAR_9 = &VAR_6->hw;


 u32 VAR_10 = VAR_7->ft;
 if (VAR_9->flags & FUNC_0(VAR_8))
  VAR_10 = FUNC_2(VAR_7->ft, &VAR_9->filters[VAR_8]);

 FUNC_3(VAR_6, VAR_1, VAR_7->ldr);
 FUNC_3(VAR_6, VAR_2, VAR_7->s00);
 FUNC_3(VAR_6, VAR_3, VAR_7->s01);
 FUNC_3(VAR_6, VAR_4, VAR_7->s10);
 FUNC_3(VAR_6, VAR_5, VAR_7->s11);
 FUNC_3(VAR_6, VAR_0, VAR_10);
 FUNC_1(VAR_6->dev, "timings: ldr=%#x, s=[%#x, %#x, %#x, %#x], ft=%#x\n",
  VAR_7->ldr, VAR_7->s00, VAR_7->s01, VAR_7->s10, VAR_7->s11, VAR_10);
}
