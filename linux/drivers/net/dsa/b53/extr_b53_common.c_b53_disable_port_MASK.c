
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* irq_disable ) (struct b53_device*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct b53_device*,int ,int ,int*) ;
 int FUNC_2 (struct b53_device*,int ,int ,int) ;
 int FUNC_3 (struct b53_device*,int) ;

void FUNC_4(struct dsa_switch *VAR_3, int VAR_4)
{
 struct b53_device *VAR_5 = VAR_3->priv;
 u8 VAR_6;


 FUNC_1(VAR_5, VAR_0, FUNC_0(VAR_4), &VAR_6);
 VAR_6 |= VAR_1 | VAR_2;
 FUNC_2(VAR_5, VAR_0, FUNC_0(VAR_4), VAR_6);

 if (VAR_5->ops->irq_disable)
  VAR_5->ops->irq_disable(VAR_5, VAR_4);
}
