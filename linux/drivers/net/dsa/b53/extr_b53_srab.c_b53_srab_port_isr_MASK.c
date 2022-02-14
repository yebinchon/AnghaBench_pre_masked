
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_srab_priv {scalar_t__ regs; } ;
struct b53_srab_port_priv {int num; struct b53_device* dev; } ;
struct b53_device {struct b53_srab_priv* priv; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct b53_srab_port_priv *VAR_4 = VAR_3;
 struct b53_device *VAR_5 = VAR_4->dev;
 struct b53_srab_priv *VAR_6 = VAR_5->priv;


 FUNC_1(FUNC_0(VAR_4->num), VAR_6->regs + VAR_0);

 return VAR_1;
}
