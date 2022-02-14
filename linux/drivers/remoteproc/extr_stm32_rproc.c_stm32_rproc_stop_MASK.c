
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask; int reg; scalar_t__ map; } ;
struct stm32_rproc {TYPE_2__ pdds; int rst; TYPE_1__* mb; } ;
struct rproc {scalar_t__ state; int dev; struct stm32_rproc* priv; } ;
struct TYPE_3__ {scalar_t__ chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rproc*,int ) ;
 int FUNC_6 (struct rproc*,int) ;

__attribute__((used)) static int FUNC_7(struct rproc *VAR_2)
{
 struct stm32_rproc *VAR_3 = VAR_2->priv;
 int VAR_4, VAR_5, VAR_6;


 if (VAR_2->state != VAR_0) {
  VAR_6 = FUNC_5(VAR_2, VAR_1);
  if (VAR_6 >= 0 && VAR_3->mb[VAR_6].chan) {

   VAR_4 = FUNC_2(VAR_3->mb[VAR_6].chan,
      &VAR_5);
   if (VAR_4 < 0)
    FUNC_1(&VAR_2->dev, "warning: remote FW shutdown without ack\n");
  }
 }

 VAR_4 = FUNC_6(VAR_2, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3->rst);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "failed to assert the reset\n");
  return VAR_4;
 }


 if (VAR_3->pdds.map) {
  VAR_4 = FUNC_3(VAR_3->pdds.map, VAR_3->pdds.reg,
      VAR_3->pdds.mask, 1);
  if (VAR_4) {
   FUNC_0(&VAR_2->dev, "failed to set pdds\n");
   return VAR_4;
  }
 }

 return 0;
}
