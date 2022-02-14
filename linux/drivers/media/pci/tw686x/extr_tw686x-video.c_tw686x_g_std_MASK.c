
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tw686x_video_channel {int video_standard; } ;
struct file {int dummy; } ;


 struct tw686x_video_channel* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct tw686x_video_channel *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->video_standard;
 return 0;
}
