
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int vfl_type; } ;
struct most_video_dev {int access_ref; int v4l2_dev; int ch_idx; int iface; } ;
struct file {struct comp_fh* private_data; } ;
struct comp_fh {int fh; struct most_video_dev* mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct comp_fh*) ;
 struct comp_fh* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct video_device*) ;
 struct video_device* FUNC_10 (struct file*) ;
 struct most_video_dev* FUNC_11 (struct file*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_5)
{
 int VAR_6;
 struct video_device *VAR_7 = FUNC_10(VAR_5);
 struct most_video_dev *VAR_8 = FUNC_11(VAR_5);
 struct comp_fh *VAR_9;

 switch (VAR_7->vfl_type) {
 case 128:
  break;
 default:
  return -VAR_1;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 if (!FUNC_1(&VAR_8->access_ref)) {
  FUNC_5(&VAR_8->v4l2_dev, "too many clients\n");
  VAR_6 = -VAR_0;
  goto err_dec;
 }

 VAR_9->mdev = VAR_8;
 FUNC_9(&VAR_9->fh, VAR_7);
 VAR_5->private_data = VAR_9;

 FUNC_6(&VAR_9->fh);

 VAR_6 = FUNC_4(VAR_8->iface, VAR_8->ch_idx, &VAR_4);
 if (VAR_6) {
  FUNC_5(&VAR_8->v4l2_dev, "most_start_channel() failed\n");
  goto err_rm;
 }

 return 0;

err_rm:
 FUNC_7(&VAR_9->fh);
 FUNC_8(&VAR_9->fh);

err_dec:
 FUNC_0(&VAR_8->access_ref);
 FUNC_2(VAR_9);
 return VAR_6;
}
