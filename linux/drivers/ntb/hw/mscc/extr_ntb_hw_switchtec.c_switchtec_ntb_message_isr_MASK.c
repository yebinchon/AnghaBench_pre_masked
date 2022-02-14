
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct switchtec_ntb {TYPE_2__* mmio_self_dbmsg; TYPE_1__* stdev; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int status; } ;
struct TYPE_6__ {TYPE_3__* imsg; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct switchtec_ntb*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 int VAR_5;
 struct switchtec_ntb *VAR_6 = VAR_4;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6->mmio_self_dbmsg->imsg); VAR_5++) {
  u64 VAR_7 = FUNC_2(&VAR_6->mmio_self_dbmsg->imsg[VAR_5]);

  if (VAR_7 & VAR_2) {
   FUNC_1(&VAR_6->stdev->dev, "message: %d %08x\n",
    VAR_5, (u32)VAR_7);
   FUNC_3(1, &VAR_6->mmio_self_dbmsg->imsg[VAR_5].status);

   if (VAR_5 == VAR_1)
    FUNC_4(VAR_6, VAR_7);
  }
 }

 return VAR_0;
}
