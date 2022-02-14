
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int last_eof; int eof_timeout_timer; int underrun_buf; int nfb4eof_irq; int eof_irq; int src_sd; int last_eof_comp; int irqlock; struct imx_ic_priv* ic_priv; } ;
struct imx_ic_priv {int ipu_dev; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct prp_priv*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct prp_priv*) ;
 int FUNC_5 (struct prp_priv*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int *,char*,...) ;
 int VAR_4 ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(struct prp_priv *VAR_5)
{
 struct imx_ic_priv *VAR_6 = VAR_5->ic_priv;
 unsigned long VAR_7;
 int VAR_8;


 FUNC_6(&VAR_5->irqlock, VAR_7);
 VAR_5->last_eof = 1;
 FUNC_7(&VAR_5->irqlock, VAR_7);




 VAR_8 = FUNC_10(
  &VAR_5->last_eof_comp,
  FUNC_3(VAR_1));
 if (VAR_8 == 0)
  FUNC_9(&VAR_6->sd, "wait last EOF timeout\n");


 VAR_8 = FUNC_8(VAR_5->src_sd, VAR_4, VAR_3, 0);
 if (VAR_8 && VAR_8 != -VAR_0)
  FUNC_9(&VAR_6->sd,
     "upstream stream off failed: %d\n", VAR_8);

 FUNC_1(VAR_6->ipu_dev, VAR_5->eof_irq, VAR_5);
 FUNC_1(VAR_6->ipu_dev, VAR_5->nfb4eof_irq, VAR_5);

 FUNC_5(VAR_5, VAR_2);

 FUNC_2(VAR_6->ipu_dev, &VAR_5->underrun_buf);


 FUNC_0(&VAR_5->eof_timeout_timer);

 FUNC_4(VAR_5);
}
