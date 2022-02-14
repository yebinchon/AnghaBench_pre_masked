
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int flags; } ;
struct vivid_dev {int * radio_tx_rds_owner; scalar_t__ radio_tx_rds_last_block; int * radio_rx_rds_owner; scalar_t__ radio_rx_rds_last_block; int * overlay_cap_owner; int mutex; TYPE_7__ radio_tx_dev; TYPE_6__ radio_rx_dev; TYPE_5__ sdr_cap_dev; TYPE_4__ vbi_out_dev; TYPE_3__ vbi_cap_dev; TYPE_2__ vid_out_dev; TYPE_1__ vid_cap_dev; int v4l2_dev; } ;
struct video_device {scalar_t__ queue; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct file*) ;
 struct video_device* FUNC_7 (struct file*) ;
 struct vivid_dev* FUNC_8 (struct file*) ;
 int FUNC_9 (struct video_device*) ;
 scalar_t__ FUNC_10 (struct vivid_dev*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2)
{
 struct vivid_dev *VAR_3 = FUNC_8(VAR_2);
 struct video_device *VAR_4 = FUNC_7(VAR_2);

 FUNC_0(&VAR_3->mutex);
 if (!VAR_1 && FUNC_3(VAR_2) &&
     !FUNC_9(VAR_4) && FUNC_10(VAR_3)) {





  FUNC_5(&VAR_3->v4l2_dev, "reconnect\n");
  FUNC_2(VAR_0, &VAR_3->vid_cap_dev.flags);
  FUNC_2(VAR_0, &VAR_3->vid_out_dev.flags);
  FUNC_2(VAR_0, &VAR_3->vbi_cap_dev.flags);
  FUNC_2(VAR_0, &VAR_3->vbi_out_dev.flags);
  FUNC_2(VAR_0, &VAR_3->sdr_cap_dev.flags);
  FUNC_2(VAR_0, &VAR_3->radio_rx_dev.flags);
  FUNC_2(VAR_0, &VAR_3->radio_tx_dev.flags);
 }
 FUNC_1(&VAR_3->mutex);
 if (VAR_2->private_data == VAR_3->overlay_cap_owner)
  VAR_3->overlay_cap_owner = ((void*)0);
 if (VAR_2->private_data == VAR_3->radio_rx_rds_owner) {
  VAR_3->radio_rx_rds_last_block = 0;
  VAR_3->radio_rx_rds_owner = ((void*)0);
 }
 if (VAR_2->private_data == VAR_3->radio_tx_rds_owner) {
  VAR_3->radio_tx_rds_last_block = 0;
  VAR_3->radio_tx_rds_owner = ((void*)0);
 }
 if (VAR_4->queue)
  return FUNC_6(VAR_2);
 return FUNC_4(VAR_2);
}
