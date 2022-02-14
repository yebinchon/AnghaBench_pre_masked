
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_priv_hw {int flags; struct img_ir_filter* filters; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;
struct img_ir_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct img_ir_priv*,int ) ;
 int FUNC_1 (struct img_ir_priv*,int ,int) ;
 int FUNC_2 (struct img_ir_priv*,struct img_ir_filter*) ;

__attribute__((used)) static void FUNC_3(struct img_ir_priv *VAR_7,
          struct img_ir_filter *VAR_8)
{
 struct img_ir_priv_hw *VAR_9 = &VAR_7->hw;
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_7, VAR_5);
 if (VAR_8) {

  VAR_9->filters[VAR_6] = *VAR_8;
  VAR_9->flags |= VAR_0;
  VAR_11 = VAR_3;
  VAR_10 &= ~(VAR_4 | VAR_2);
 } else {

  VAR_9->flags &= ~VAR_0;
  VAR_10 &= ~VAR_3;
  VAR_11 = VAR_4 | VAR_2;
 }
 VAR_10 |= VAR_11;

 FUNC_2(VAR_7, VAR_8);

 FUNC_1(VAR_7, VAR_1, VAR_11);
 FUNC_1(VAR_7, VAR_5, VAR_10);
}
