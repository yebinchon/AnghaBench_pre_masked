
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rproc {int * mbox_chan; int clk; } ;
struct rproc {struct st_rproc* priv; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rproc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct rproc*) ;
 int FUNC_4 (struct rproc*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct rproc *VAR_3 = FUNC_2(VAR_2);
 struct st_rproc *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_3(VAR_3);

 FUNC_0(VAR_4->clk);

 for (VAR_5 = 0; VAR_5 < VAR_1 * VAR_0; VAR_5++)
  FUNC_1(VAR_4->mbox_chan[VAR_5]);

 FUNC_4(VAR_3);

 return 0;
}
