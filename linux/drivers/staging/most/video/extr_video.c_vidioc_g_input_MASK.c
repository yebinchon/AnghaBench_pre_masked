
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_video_dev {unsigned int ctrl_input; } ;
struct file {int dummy; } ;
struct comp_fh {struct most_video_dev* mdev; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct comp_fh *VAR_3 = VAR_1;
 struct most_video_dev *VAR_4 = VAR_3->mdev;
 *VAR_2 = VAR_4->ctrl_input;
 return 0;
}
