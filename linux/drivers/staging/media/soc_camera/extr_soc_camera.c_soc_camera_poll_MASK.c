
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {int host_lock; TYPE_1__* ops; } ;
struct soc_camera_device {struct file* streamer; int parent; } ;
struct file {struct soc_camera_device* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll ) (struct file*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_1, poll_table *VAR_2)
{
 struct soc_camera_device *VAR_3 = VAR_1->private_data;
 struct soc_camera_host *VAR_4 = FUNC_3(VAR_3->parent);
 __poll_t VAR_5 = VAR_0;

 if (VAR_3->streamer != VAR_1)
  return VAR_0;

 FUNC_0(&VAR_4->host_lock);
 VAR_5 = VAR_4->ops->poll(VAR_1, VAR_2);
 FUNC_1(&VAR_4->host_lock);
 return VAR_5;
}
