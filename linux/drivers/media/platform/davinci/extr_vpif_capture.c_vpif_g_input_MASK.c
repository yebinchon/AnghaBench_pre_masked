
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct file {int dummy; } ;
struct channel_obj {unsigned int input_idx; } ;


 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct video_device *VAR_3 = FUNC_0(VAR_0);
 struct channel_obj *VAR_4 = FUNC_1(VAR_3);

 *VAR_2 = VAR_4->input_idx;
 return 0;
}
