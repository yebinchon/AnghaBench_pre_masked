
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_srab_priv {struct b53_srab_port_priv* port_intrs; } ;
struct b53_srab_port_priv {int irq_enabled; int irq; } ;
struct b53_device {struct b53_srab_priv* priv; } ;


 int FUNC_0 (int ,struct b53_srab_port_priv*) ;

__attribute__((used)) static void FUNC_1(struct b53_device *VAR_0, int VAR_1)
{
 struct b53_srab_priv *VAR_2 = VAR_0->priv;
 struct b53_srab_port_priv *VAR_3 = &VAR_2->port_intrs[VAR_1];

 if (VAR_3->irq_enabled) {
  FUNC_0(VAR_3->irq, VAR_3);
  VAR_3->irq_enabled = 0;
 }
}
