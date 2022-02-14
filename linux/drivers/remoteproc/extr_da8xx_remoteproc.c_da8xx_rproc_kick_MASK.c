
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct da8xx_rproc {int chipsig; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rproc *VAR_1, int VAR_2)
{
 struct da8xx_rproc *VAR_3 = (struct da8xx_rproc *)VAR_1->priv;


 FUNC_0(VAR_0, VAR_3->chipsig);
}
