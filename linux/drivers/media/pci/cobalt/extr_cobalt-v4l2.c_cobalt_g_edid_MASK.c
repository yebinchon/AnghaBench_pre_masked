
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_edid {int pad; } ;
struct file {int dummy; } ;
struct cobalt_stream {int sd; scalar_t__ is_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,struct v4l2_edid*) ;
 struct cobalt_stream* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_edid *VAR_4)
{
 struct cobalt_stream *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = VAR_4->pad;
 int VAR_7;

 if (VAR_4->pad >= (VAR_5->is_output ? 1 : 2))
  return -VAR_0;
 VAR_4->pad = 0;
 VAR_7 = FUNC_0(VAR_5->sd, VAR_6, VAR_1, VAR_4);
 VAR_4->pad = VAR_6;
 return VAR_7;
}
