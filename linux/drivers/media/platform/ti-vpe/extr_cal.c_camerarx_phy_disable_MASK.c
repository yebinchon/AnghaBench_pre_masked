
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct cal_ctx {int csi2_port; TYPE_1__* dev; } ;
struct TYPE_5__ {int base; } ;
struct TYPE_4__ {TYPE_2__* cm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cal_ctx*,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void FUNC_4(struct cal_ctx *VAR_3)
{
 u32 VAR_4;

 if (!VAR_3->dev->cm->base) {
  FUNC_0(VAR_3, "cm not mapped\n");
  return;
 }

 VAR_4 = FUNC_1(VAR_3->dev->cm, VAR_2);
 if (VAR_3->csi2_port == 1)
  FUNC_3(&VAR_4, 0x0, VAR_0);
 else if (VAR_3->csi2_port == 2)
  FUNC_3(&VAR_4, 0x0, VAR_1);
 FUNC_2(VAR_3->dev->cm, VAR_2, VAR_4);
}
