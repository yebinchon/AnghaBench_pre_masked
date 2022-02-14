
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int handle_kick; } ;
struct vhost_dev {int dummy; } ;
struct vhost_test {struct vhost_virtqueue* vqs; struct vhost_dev dev; } ;
struct inode {int dummy; } ;
struct file {struct vhost_test* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vhost_test*) ;
 struct vhost_test* FUNC_1 (int,int ) ;
 struct vhost_virtqueue** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct vhost_dev*,struct vhost_virtqueue**,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_8, struct file *VAR_9)
{
 struct vhost_test *VAR_10 = FUNC_1(sizeof *VAR_10, VAR_1);
 struct vhost_dev *VAR_11;
 struct vhost_virtqueue **VAR_12;

 if (!VAR_10)
  return -VAR_0;
 VAR_12 = FUNC_2(VAR_5, sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  FUNC_0(VAR_10);
  return -VAR_0;
 }

 VAR_11 = &VAR_10->dev;
 VAR_12[VAR_4] = &VAR_10->vqs[VAR_4];
 VAR_10->vqs[VAR_4].handle_kick = VAR_7;
 FUNC_3(VAR_11, VAR_12, VAR_5, VAR_2,
         VAR_3, VAR_6);

 VAR_9->private_data = VAR_10;

 return 0;
}
