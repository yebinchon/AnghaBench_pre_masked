
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cal_ctx*,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void FUNC_4(struct cal_ctx *VAR_9)
{
 u32 VAR_10;

 if (!VAR_9->dev->cm->base) {
  FUNC_0(VAR_9, "cm not mapped\n");
  return;
 }

 VAR_10 = FUNC_1(VAR_9->dev->cm, VAR_8);
 if (VAR_9->csi2_port == 1) {
  FUNC_3(&VAR_10, 1, VAR_1);
  FUNC_3(&VAR_10, 0, VAR_0);

  FUNC_3(&VAR_10, 0xf, VAR_2);
  FUNC_3(&VAR_10, 1, VAR_3);
 } else if (VAR_9->csi2_port == 2) {
  FUNC_3(&VAR_10, 1, VAR_5);
  FUNC_3(&VAR_10, 0, VAR_4);

  FUNC_3(&VAR_10, 0x3, VAR_6);
  FUNC_3(&VAR_10, 1, VAR_7);
 }
 FUNC_2(VAR_9->dev->cm, VAR_8, VAR_10);
}
