
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {int uop; } ;
struct scif_dev {int node; TYPE_1__* sdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct scif_dev *VAR_0, struct scifmsg *VAR_1)
{

 FUNC_0(&VAR_0->sdev->dev,
  "Unknown message 0x%xn scifdev->node 0x%x\n",
  VAR_1->uop, VAR_0->node);
}
