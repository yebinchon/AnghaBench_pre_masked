
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_video_fh {int queue; } ;
struct file {int private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 struct iss_video_fh* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct file*,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_0, poll_table *VAR_1)
{
 struct iss_video_fh *VAR_2 = FUNC_0(VAR_0->private_data);

 return FUNC_1(&VAR_2->queue, VAR_0, VAR_1);
}
