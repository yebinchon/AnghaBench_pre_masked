
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_video_fh {int queue; } ;
struct isp_video {int queue_lock; } ;
struct file {int private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct isp_video_fh* FUNC_2 (int ) ;
 int FUNC_3 (int *,struct file*,int *) ;
 struct isp_video* FUNC_4 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_0, poll_table *VAR_1)
{
 struct isp_video_fh *VAR_2 = FUNC_2(VAR_0->private_data);
 struct isp_video *VAR_3 = FUNC_4(VAR_0);
 __poll_t VAR_4;

 FUNC_0(&VAR_3->queue_lock);
 VAR_4 = FUNC_3(&VAR_2->queue, VAR_0, VAR_1);
 FUNC_1(&VAR_3->queue_lock);

 return VAR_4;
}
