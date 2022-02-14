
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct most_video_dev {int dummy; } ;
struct file {int dummy; } ;
struct comp_fh {struct most_video_dev* mdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct most_video_dev*,int ,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct comp_fh *VAR_4 = VAR_2;
 struct most_video_dev *VAR_5 = VAR_4->mdev;

 return FUNC_0(VAR_5, VAR_0, VAR_3);
}
