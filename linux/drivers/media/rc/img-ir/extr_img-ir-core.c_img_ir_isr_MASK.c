
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_priv {int lock; int hw; int raw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct img_ir_priv*,int) ;
 int FUNC_2 (struct img_ir_priv*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct img_ir_priv*,int ) ;
 int FUNC_5 (struct img_ir_priv*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct img_ir_priv *VAR_10 = VAR_9;
 u32 VAR_11;

 FUNC_6(&VAR_10->lock);

 VAR_11 = FUNC_4(VAR_10, VAR_6);
 FUNC_5(VAR_10, VAR_0, VAR_11);


 VAR_11 &= FUNC_4(VAR_10, VAR_5);


 if (VAR_11 & VAR_4 && FUNC_3(&VAR_10->raw))
  FUNC_2(VAR_10, VAR_11);


 if (VAR_11 & (VAR_2 |
     VAR_3 |
     VAR_1) &&
     FUNC_0(&VAR_10->hw))
  FUNC_1(VAR_10, VAR_11);

 FUNC_7(&VAR_10->lock);
 return VAR_7;
}
