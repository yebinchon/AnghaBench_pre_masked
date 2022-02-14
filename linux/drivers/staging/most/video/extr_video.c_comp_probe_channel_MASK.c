
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int release; } ;
struct most_video_dev {int ch_idx; TYPE_1__ v4l2_dev; int list; struct most_interface* iface; int pending_mbos; int list_lock; int access_ref; int lock; } ;
struct most_interface {int dummy; } ;
struct most_channel_config {scalar_t__ direction; scalar_t__ data_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct most_video_dev*) ;
 int VAR_7 ;
 struct most_video_dev* FUNC_3 (struct most_interface*,int) ;
 int FUNC_4 (struct most_video_dev*) ;
 struct most_video_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(struct most_interface *VAR_10, int VAR_11,
         struct most_channel_config *VAR_12, char *VAR_13,
         char *VAR_14)
{
 int VAR_15;
 struct most_video_dev *VAR_16 = FUNC_3(VAR_10, VAR_11);

 if (VAR_16) {
  FUNC_8("channel already linked\n");
  return -VAR_0;
 }

 if (VAR_12->direction != VAR_5) {
  FUNC_8("wrong direction, expect rx\n");
  return -VAR_1;
 }

 if (VAR_12->data_type != VAR_6 &&
     VAR_12->data_type != VAR_4) {
  FUNC_8("wrong channel type, expect sync or isoc\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 FUNC_7(&VAR_16->lock);
 FUNC_1(&VAR_16->access_ref, -1);
 FUNC_9(&VAR_16->list_lock);
 FUNC_0(&VAR_16->pending_mbos);
 VAR_16->iface = VAR_10;
 VAR_16->ch_idx = VAR_11;
 VAR_16->v4l2_dev.release = VAR_7;


 FUNC_12(VAR_16->v4l2_dev.name, VAR_13, sizeof(VAR_16->v4l2_dev.name));
 VAR_15 = FUNC_15(((void*)0), &VAR_16->v4l2_dev);
 if (VAR_15) {
  FUNC_8("v4l2_device_register() failed\n");
  FUNC_4(VAR_16);
  return VAR_15;
 }

 VAR_15 = FUNC_2(VAR_16);
 if (VAR_15)
  goto err_unreg;

 FUNC_10(&VAR_8);
 FUNC_6(&VAR_16->list, &VAR_9);
 FUNC_11(&VAR_8);
 return 0;

err_unreg:
 FUNC_13(&VAR_16->v4l2_dev);
 FUNC_14(&VAR_16->v4l2_dev);
 return VAR_15;
}
