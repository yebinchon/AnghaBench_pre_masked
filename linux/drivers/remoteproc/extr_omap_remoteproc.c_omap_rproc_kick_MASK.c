
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rproc {TYPE_1__ dev; struct omap_rproc* priv; } ;
struct omap_rproc {int mbox; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void FUNC_2(struct rproc *VAR_0, int VAR_1)
{
 struct omap_rproc *VAR_2 = VAR_0->priv;
 struct device *VAR_3 = VAR_0->dev.parent;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2->mbox, (void *)VAR_1);
 if (VAR_4 < 0)
  FUNC_0(VAR_3, "failed to send mailbox message, status = %d\n",
   VAR_4);
}
