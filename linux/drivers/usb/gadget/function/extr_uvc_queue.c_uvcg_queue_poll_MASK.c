
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_queue {int queue; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (int *,struct file*,int *) ;

__poll_t FUNC_1(struct uvc_video_queue *VAR_0, struct file *VAR_1,
        poll_table *VAR_2)
{
 return FUNC_0(&VAR_0->queue, VAR_1, VAR_2);
}
