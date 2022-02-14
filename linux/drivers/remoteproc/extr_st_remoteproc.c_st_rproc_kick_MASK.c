
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_rproc {int * mbox_chan; } ;
struct TYPE_2__ {struct device* parent; } ;
struct rproc {TYPE_1__ dev; struct st_rproc* priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(struct rproc *VAR_3, int VAR_4)
{
 struct st_rproc *VAR_5 = VAR_3->priv;
 struct device *VAR_6 = VAR_3->dev.parent;
 int VAR_7;


 if (FUNC_0(VAR_4 >= VAR_2))
  return;

 VAR_7 = FUNC_2(VAR_5->mbox_chan[VAR_4 * VAR_0 + VAR_1],
    (void *)&VAR_4);
 if (VAR_7 < 0)
  FUNC_1(VAR_6, "failed to send message via mbox: %d\n", VAR_7);
}
