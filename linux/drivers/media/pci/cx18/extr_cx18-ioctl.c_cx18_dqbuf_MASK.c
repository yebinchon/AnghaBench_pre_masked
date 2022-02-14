
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; struct cx18_open_id* private_data; } ;
struct cx18_stream {scalar_t__ vb_type; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct cx18 {struct cx18_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cx18_open_id*) ;
 int FUNC_1 (int ,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, struct v4l2_buffer *VAR_6)
{
 struct cx18_open_id *VAR_7 = VAR_4->private_data;
 struct cx18 *VAR_8 = VAR_7->cx;
 struct cx18_stream *VAR_9 = &VAR_8->streams[VAR_7->type];

 if ((VAR_9->vb_type != VAR_3) &&
  (VAR_9->vb_type != VAR_2))
  return -VAR_0;

 return FUNC_1(FUNC_0(VAR_7), VAR_6, VAR_4->f_flags & VAR_1);
}
