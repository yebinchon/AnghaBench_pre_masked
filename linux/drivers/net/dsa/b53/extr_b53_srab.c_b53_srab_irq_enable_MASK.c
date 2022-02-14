
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_srab_priv {struct b53_srab_port_priv* port_intrs; } ;
struct b53_srab_port_priv {int irq_enabled; int irq; } ;
struct b53_device {int dev; struct b53_srab_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct b53_srab_port_priv*) ;

__attribute__((used)) static int FUNC_2(struct b53_device *VAR_3, int VAR_4)
{
 struct b53_srab_priv *VAR_5 = VAR_3->priv;
 struct b53_srab_port_priv *VAR_6 = &VAR_5->port_intrs[VAR_4];
 int VAR_7 = 0;




 if (VAR_6->irq == -VAR_0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6->irq, VAR_1,
       VAR_2, 0,
       FUNC_0(VAR_3->dev), VAR_6);
 if (!VAR_7)
  VAR_6->irq_enabled = 1;

 return VAR_7;
}
