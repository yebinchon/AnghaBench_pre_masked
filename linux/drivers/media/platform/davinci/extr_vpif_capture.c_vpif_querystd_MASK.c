
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct video_device {int dummy; } ;
struct file {int dummy; } ;
struct channel_obj {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_5 ;
 struct video_device* FUNC_1 (struct file*) ;
 struct channel_obj* FUNC_2 (struct video_device*) ;
 int FUNC_3 (int,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, v4l2_std_id *VAR_8)
{
 struct video_device *VAR_9 = FUNC_1(VAR_6);
 struct channel_obj *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;

 FUNC_3(2, VAR_3, "vpif_querystd\n");


 VAR_11 = FUNC_0(VAR_10->sd, VAR_5, VAR_4, VAR_8);

 if (VAR_11 == -VAR_2 || VAR_11 == -VAR_1)
  return -VAR_0;
 if (VAR_11) {
  FUNC_3(1, VAR_3, "Failed to query standard for sub devices\n");
  return VAR_11;
 }

 return 0;
}
