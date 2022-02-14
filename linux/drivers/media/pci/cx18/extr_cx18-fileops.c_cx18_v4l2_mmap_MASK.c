
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct file {struct cx18_open_id* private_data; } ;
struct cx18_stream {scalar_t__ vb_type; int vbuf_q; int name; int s_flags; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct cx18 {int serialize_lock; struct cx18_stream* streams; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct cx18_open_id*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,struct vm_area_struct*) ;

int FUNC_7(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 struct cx18_open_id *VAR_7 = VAR_5->private_data;
 struct cx18 *VAR_8 = VAR_7->cx;
 struct cx18_stream *VAR_9 = &VAR_8->streams[VAR_7->type];
 int VAR_10 = FUNC_5(VAR_2, &VAR_9->s_flags);

 if ((VAR_9->vb_type == VAR_4) &&
  (VAR_7->type == VAR_0)) {


  if (!VAR_10 && !FUNC_5(VAR_1, &VAR_9->s_flags)) {
   int VAR_11;

   FUNC_3(&VAR_8->serialize_lock);
   VAR_11 = FUNC_2(VAR_7);
   FUNC_4(&VAR_8->serialize_lock);
   if (VAR_11) {
    FUNC_1(
     "Could not start capture for %s (%d)\n",
     VAR_9->name, VAR_11);
    return -VAR_3;
   }
   FUNC_0("Encoder mmap started capture\n");
  }

  return FUNC_6(&VAR_9->vbuf_q, VAR_6);
 }

 return -VAR_3;
}
