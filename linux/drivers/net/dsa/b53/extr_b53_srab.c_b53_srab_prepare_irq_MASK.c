
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct b53_srab_priv {struct b53_srab_port_priv* port_intrs; scalar_t__ regs; } ;
struct b53_srab_port_priv {unsigned int num; int irq; struct b53_device* dev; } ;
struct b53_device {struct b53_srab_priv* priv; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b53_srab_priv*,int) ;
 char* FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (char*) ;
 struct b53_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,char*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_3)
{
 struct b53_device *VAR_4 = FUNC_3(VAR_3);
 struct b53_srab_priv *VAR_5 = VAR_4->priv;
 struct b53_srab_port_priv *VAR_6;
 unsigned int VAR_7;
 char *VAR_8;


 FUNC_5(0xffffffff, VAR_5->regs + VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_5->port_intrs[VAR_7];


  if (VAR_7 == 6)
   continue;

  VAR_8 = FUNC_1(VAR_2, "link_state_p%d", VAR_7);
  if (!VAR_8)
   return;

  VAR_6->num = VAR_7;
  VAR_6->dev = VAR_4;
  VAR_6->irq = FUNC_4(VAR_3, VAR_8);
  FUNC_2(VAR_8);
 }

 FUNC_0(VAR_5, 1);
}
