
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct coda_dev {TYPE_2__* devtype; } ;
struct TYPE_3__ {int * vaddr; } ;
struct coda_ctx {TYPE_1__ parabuf; struct coda_dev* dev; } ;
struct TYPE_4__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct coda_ctx *VAR_1, int VAR_2, u32 VAR_3)
{
 struct coda_dev *VAR_4 = VAR_1->dev;
 u32 *VAR_5 = VAR_1->parabuf.vaddr;

 if (VAR_4->devtype->product == VAR_0)
  VAR_5[VAR_2] = VAR_3;
 else
  VAR_5[VAR_2 ^ 1] = VAR_3;
}
