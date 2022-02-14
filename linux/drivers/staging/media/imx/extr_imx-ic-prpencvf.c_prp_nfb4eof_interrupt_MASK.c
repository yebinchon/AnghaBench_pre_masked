
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int nfb4eof; int irqlock; struct imx_ic_priv* ic_priv; } ;
struct imx_ic_priv {int sd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct prp_priv *VAR_3 = VAR_2;
 struct imx_ic_priv *VAR_4 = VAR_3->ic_priv;

 FUNC_0(&VAR_3->irqlock);





 VAR_3->nfb4eof = 1;

 FUNC_2(&VAR_4->sd, "NFB4EOF\n");

 FUNC_1(&VAR_3->irqlock);

 return VAR_0;
}
