
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vdev {int vdev_mutex; scalar_t__ poll_wake; int waitq; } ;
struct file {struct vop_vdev* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 scalar_t__ FUNC_3 (struct vop_vdev*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct vop_vdev *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_0(&VAR_5->vdev_mutex);
 if (FUNC_3(VAR_5)) {
  VAR_6 = VAR_0;
  goto done;
 }
 FUNC_2(VAR_3, &VAR_5->waitq, VAR_4);
 if (FUNC_3(VAR_5)) {
  VAR_6 = VAR_0;
 } else if (VAR_5->poll_wake) {
  VAR_5->poll_wake = 0;
  VAR_6 = VAR_1 | VAR_2;
 }
done:
 FUNC_1(&VAR_5->vdev_mutex);
 return VAR_6;
}
