
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coda_dev {TYPE_1__* devtype; } ;
struct coda_ctx {int parabuf; int workbuf; int psbuf; int slicebuf; struct coda_dev* dev; } ;
struct TYPE_2__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct coda_dev*,int *) ;

__attribute__((used)) static void FUNC_1(struct coda_ctx *VAR_1)
{
 struct coda_dev *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2, &VAR_1->slicebuf);
 FUNC_0(VAR_2, &VAR_1->psbuf);
 if (VAR_2->devtype->product != VAR_0)
  FUNC_0(VAR_2, &VAR_1->workbuf);
 FUNC_0(VAR_2, &VAR_1->parabuf);
}
