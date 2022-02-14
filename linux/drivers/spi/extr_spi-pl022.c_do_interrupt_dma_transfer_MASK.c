
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pl022 {int virtbase; TYPE_3__* adev; TYPE_2__* cur_chip; TYPE_1__* cur_msg; int cur_transfer; int next_msg_cs_active; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ enable_dma; } ;
struct TYPE_4__ {int status; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct pl022*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pl022*) ;
 int FUNC_5 (struct pl022*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct pl022*,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct pl022 *VAR_7)
{




 u32 VAR_8 = (u32)(VAR_2 & ~VAR_5);


 if (!VAR_7->next_msg_cs_active)
  FUNC_5(VAR_7, VAR_3);

 if (FUNC_7(VAR_7, VAR_7->cur_transfer)) {

  VAR_7->cur_msg->state = VAR_6;
  VAR_7->cur_msg->status = -VAR_1;
  FUNC_4(VAR_7);
  return;
 }

 if (VAR_7->cur_chip->enable_dma) {

  if (FUNC_2(VAR_7)) {
   FUNC_3(&VAR_7->adev->dev,
    "configuration of DMA failed, fall back to interrupt mode\n");
   goto err_config_dma;
  }

  VAR_8 = VAR_0;
 }
err_config_dma:

 FUNC_8((FUNC_6(FUNC_0(VAR_7->virtbase)) | VAR_4),
        FUNC_0(VAR_7->virtbase));
 FUNC_8(VAR_8, FUNC_1(VAR_7->virtbase));
}
