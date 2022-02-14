
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct alx_hw {int dummy; } ;
struct alx_priv {int int_mask; int irq_lock; TYPE_1__** qnapi; struct alx_hw hw; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct alx_priv*,int) ;
 int FUNC_1 (struct alx_hw*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct alx_priv *VAR_7, u32 VAR_8)
{
 struct alx_hw *VAR_9 = &VAR_7->hw;

 FUNC_3(&VAR_7->irq_lock);


 FUNC_1(VAR_9, VAR_1, VAR_8 | VAR_3);
 VAR_8 &= VAR_7->int_mask;

 if (FUNC_0(VAR_7, VAR_8))
  goto out;

 if (VAR_8 & (VAR_5 | VAR_4)) {
  FUNC_2(&VAR_7->qnapi[0]->napi);

  VAR_7->int_mask &= ~VAR_2;
  FUNC_1(VAR_9, VAR_0, VAR_7->int_mask);
 }

 FUNC_1(VAR_9, VAR_1, 0);

 out:
 FUNC_4(&VAR_7->irq_lock);
 return VAR_6;
}
