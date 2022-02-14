
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rproc {scalar_t__ priv; } ;
struct da8xx_rproc {int irq_data; int (* ack_fxn ) (int ) ;scalar_t__ chipsig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct rproc *VAR_5 = (struct rproc *)VAR_4;
 struct da8xx_rproc *VAR_6 = (struct da8xx_rproc *)VAR_5->priv;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->chipsig);
 if (VAR_7 & VAR_2) {

  FUNC_2(VAR_2, VAR_6->chipsig + 4);
  VAR_6->ack_fxn(VAR_6->irq_data);

  return VAR_1;
 }

 return VAR_0;
}
