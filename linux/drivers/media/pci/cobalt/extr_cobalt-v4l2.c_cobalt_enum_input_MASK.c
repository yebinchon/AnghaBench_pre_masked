
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; int status; int capabilities; int type; int name; } ;
struct file {int dummy; } ;
struct cobalt_stream {int video_channel; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int VAR_4 ;
 struct cobalt_stream* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
     struct v4l2_input *VAR_7)
{
 struct cobalt_stream *VAR_8 = FUNC_2(VAR_5);

 if (VAR_7->index > 1)
  return -VAR_0;
 if (VAR_7->index == 0)
  FUNC_0(VAR_7->name, sizeof(VAR_7->name),
    "HDMI-%d", VAR_8->video_channel);
 else
  FUNC_0(VAR_7->name, sizeof(VAR_7->name),
    "Generator-%d", VAR_8->video_channel);
 VAR_7->type = VAR_1;
 VAR_7->capabilities = VAR_2;
 if (VAR_7->index == 1)
  return 0;
 return FUNC_1(VAR_8->sd,
   VAR_4, VAR_3, &VAR_7->status);
}
