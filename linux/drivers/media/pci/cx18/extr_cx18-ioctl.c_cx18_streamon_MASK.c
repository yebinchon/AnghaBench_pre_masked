
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx18_open_id* private_data; } ;
struct cx18_stream {scalar_t__ vb_type; int vb_timeout; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct cx18 {struct cx18_stream* streams; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cx18_open_id*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
 enum v4l2_buf_type VAR_7)
{
 struct cx18_open_id *VAR_8 = VAR_5->private_data;
 struct cx18 *VAR_9 = VAR_8->cx;
 struct cx18_stream *VAR_10 = &VAR_9->streams[VAR_8->type];


 if ((VAR_10->vb_type != VAR_3) &&
  (VAR_10->vb_type != VAR_2))
  return -VAR_1;

 if (VAR_8->type != VAR_0)
  return -VAR_1;


 FUNC_1(&VAR_10->vb_timeout, FUNC_2(2000) + VAR_4);

 return FUNC_3(FUNC_0(VAR_8));
}
