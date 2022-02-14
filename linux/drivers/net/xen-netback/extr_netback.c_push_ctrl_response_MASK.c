
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int ctrl_irq; int ctrl; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xenvif *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->ctrl, VAR_1);
 if (VAR_1)
  FUNC_1(VAR_0->ctrl_irq);
}
