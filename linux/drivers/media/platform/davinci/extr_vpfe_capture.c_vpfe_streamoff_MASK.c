
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_subdev_info {int grp_id; } ;
struct vpfe_fh {int io_allowed; } ;
struct vpfe_device {int lock; int buffer_queue; int v4l2_dev; struct vpfe_subdev_info* current_subdev; int started; } ;
struct file {struct vpfe_fh* private_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int,int ,int *,char*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_6 ;
 struct vpfe_device* FUNC_5 (struct file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vpfe_device*) ;
 int FUNC_8 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_7, void *VAR_8,
     enum v4l2_buf_type VAR_9)
{
 struct vpfe_device *VAR_10 = FUNC_5(VAR_7);
 struct vpfe_fh *VAR_11 = VAR_7->private_data;
 struct vpfe_subdev_info *VAR_12;
 int VAR_13;

 FUNC_2(1, VAR_4, &VAR_10->v4l2_dev, "vpfe_streamoff\n");

 if (VAR_3 != VAR_9) {
  FUNC_4(&VAR_10->v4l2_dev, "Invalid buf type\n");
  return -VAR_1;
 }


 if (!VAR_11->io_allowed) {
  FUNC_4(&VAR_10->v4l2_dev, "fh->io_allowed\n");
  return -VAR_0;
 }


 if (!VAR_10->started) {
  FUNC_4(&VAR_10->v4l2_dev, "device started\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_0(&VAR_10->lock);
 if (VAR_13)
  return VAR_13;

 FUNC_8(VAR_10);
 FUNC_7(VAR_10);

 VAR_12 = VAR_10->current_subdev;
 VAR_13 = FUNC_3(&VAR_10->v4l2_dev, VAR_12->grp_id,
     VAR_6, VAR_5, 0);

 if (VAR_13 && (VAR_13 != -VAR_2))
  FUNC_4(&VAR_10->v4l2_dev, "stream off failed in subdev\n");
 VAR_13 = FUNC_6(&VAR_10->buffer_queue);
 FUNC_1(&VAR_10->lock);
 return VAR_13;
}
