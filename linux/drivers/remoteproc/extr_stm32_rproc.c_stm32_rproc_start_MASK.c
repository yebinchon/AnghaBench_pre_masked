
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; int reg; scalar_t__ map; } ;
struct stm32_rproc {TYPE_1__ pdds; } ;
struct rproc {int dev; struct stm32_rproc* priv; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct rproc*) ;
 int FUNC_3 (struct rproc*,int) ;

__attribute__((used)) static int FUNC_4(struct rproc *VAR_0)
{
 struct stm32_rproc *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_2(VAR_0);


 if (VAR_1->pdds.map) {
  VAR_2 = FUNC_1(VAR_1->pdds.map, VAR_1->pdds.reg,
      VAR_1->pdds.mask, 0);
  if (VAR_2) {
   FUNC_0(&VAR_0->dev, "failed to clear pdds\n");
   return VAR_2;
  }
 }

 VAR_2 = FUNC_3(VAR_0, 0);
 if (VAR_2)
  return VAR_2;

 return FUNC_3(VAR_0, 1);
}
