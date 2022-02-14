
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {int eof_timeout_timer; int underrun_buf; int dev; int nfb4eof_irq; int eof_irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct csi_priv*) ;
 int FUNC_1 (struct csi_priv*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct csi_priv*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct csi_priv *VAR_1)
{
 FUNC_3(VAR_1->dev, VAR_1->eof_irq, VAR_1);
 FUNC_3(VAR_1->dev, VAR_1->nfb4eof_irq, VAR_1);

 FUNC_1(VAR_1, VAR_0);

 FUNC_4(VAR_1->dev, &VAR_1->underrun_buf);


 FUNC_2(&VAR_1->eof_timeout_timer);

 FUNC_0(VAR_1);
}
