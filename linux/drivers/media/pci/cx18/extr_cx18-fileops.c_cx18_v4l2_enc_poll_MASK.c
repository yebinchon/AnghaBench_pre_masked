
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int depth; } ;
struct cx18_stream {scalar_t__ vb_type; TYPE_1__ q_full; int waitq; int vbuf_q; int name; int s_flags; } ;
struct cx18_open_id {size_t type; int fh; struct cx18* cx; } ;
struct cx18 {int serialize_lock; struct cx18_stream* streams; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct cx18_open_id*) ;
 struct cx18_open_id* FUNC_5 (struct file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct file*,int *,int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (struct file*,int *,int *) ;

__poll_t FUNC_13(struct file *VAR_9, poll_table *VAR_10)
{
 __poll_t VAR_11 = FUNC_8(VAR_10);
 struct cx18_open_id *VAR_12 = FUNC_5(VAR_9);
 struct cx18 *VAR_13 = VAR_12->cx;
 struct cx18_stream *VAR_14 = &VAR_13->streams[VAR_12->type];
 int VAR_15 = FUNC_10(VAR_2, &VAR_14->s_flags);
 __poll_t VAR_16 = 0;


 if (!VAR_15 && !FUNC_10(VAR_1, &VAR_14->s_flags) &&
   (VAR_11 & (VAR_5 | VAR_7))) {
  int VAR_17;

  FUNC_6(&VAR_13->serialize_lock);
  VAR_17 = FUNC_4(VAR_12);
  FUNC_7(&VAR_13->serialize_lock);
  if (VAR_17) {
   FUNC_2("Could not start capture for %s (%d)\n",
     VAR_14->name, VAR_17);
   return VAR_3;
  }
  FUNC_0("Encoder poll started capture\n");
 }

 if ((VAR_14->vb_type == VAR_8) &&
  (VAR_12->type == VAR_0)) {
  __poll_t VAR_18 = FUNC_12(VAR_9, &VAR_14->vbuf_q, VAR_10);

  if (FUNC_11(&VAR_12->fh))
   VAR_16 |= VAR_6;
  if (VAR_15 && VAR_18 == VAR_3)
   return VAR_16 | VAR_4;
  return VAR_16 | VAR_18;
 }


 FUNC_1("Encoder poll\n");
 if (FUNC_11(&VAR_12->fh))
  VAR_16 |= VAR_6;
 else
  FUNC_9(VAR_9, &VAR_14->waitq, VAR_10);

 if (FUNC_3(&VAR_14->q_full.depth))
  return VAR_16 | VAR_5 | VAR_7;
 if (VAR_15)
  return VAR_16 | VAR_4;
 return VAR_16;
}
