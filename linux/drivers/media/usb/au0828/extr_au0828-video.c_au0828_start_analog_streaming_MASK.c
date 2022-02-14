
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; } ;
struct au0828_dev {scalar_t__ streaming_users; int vid_timeout_running; int vbi_timeout_running; int vbi_timeout; int vid_timeout; int v4l2_dev; int max_pkt_size; scalar_t__ vbi_frame_count; scalar_t__ frame_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char*) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ,int) ;
 struct au0828_dev* FUNC_6 (struct vb2_queue*) ;
 int VAR_8 ;

int FUNC_7(struct vb2_queue *VAR_9, unsigned int VAR_10)
{
 struct au0828_dev *VAR_11 = FUNC_6(VAR_9);
 int VAR_12 = 0;

 FUNC_2(1, "au0828_start_analog_streaming called %d\n",
  VAR_11->streaming_users);

 if (VAR_9->type == VAR_4)
  VAR_11->frame_count = 0;
 else
  VAR_11->vbi_frame_count = 0;

 if (VAR_11->streaming_users == 0) {

  FUNC_0(VAR_11);
  VAR_12 = FUNC_1(VAR_11, VAR_0,
       VAR_1, VAR_11->max_pkt_size,
       VAR_5);
  if (VAR_12 < 0) {
   FUNC_4("au0828_init_isoc failed\n");
   return VAR_12;
  }

  FUNC_5(&VAR_11->v4l2_dev, 0, VAR_8, VAR_7, 1);

  if (VAR_9->type == VAR_4) {
   VAR_11->vid_timeout_running = 1;
   FUNC_3(&VAR_11->vid_timeout, VAR_6 + (VAR_2 / 10));
  } else if (VAR_9->type == VAR_3) {
   VAR_11->vbi_timeout_running = 1;
   FUNC_3(&VAR_11->vbi_timeout, VAR_6 + (VAR_2 / 10));
  }
 }
 VAR_11->streaming_users++;
 return VAR_12;
}
