
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_4__ {scalar_t__ length; } ;
struct ivtv_stream {scalar_t__ type; TYPE_2__ q_io; TYPE_1__ q_full; int waitq; int name; int s_flags; } ;
struct TYPE_6__ {int wait; } ;
struct ivtv_open_id {size_t type; TYPE_3__ fh; struct ivtv* itv; } ;
struct ivtv {int serialize_lock; struct ivtv_stream* streams; } ;
struct file {int private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ivtv_open_id* FUNC_3 (int ) ;
 int FUNC_4 (struct ivtv_open_id*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct file*,int *,int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;

__poll_t FUNC_11(struct file *VAR_8, poll_table *VAR_9)
{
 __poll_t VAR_10 = FUNC_7(VAR_9);
 struct ivtv_open_id *VAR_11 = FUNC_3(VAR_8->private_data);
 struct ivtv *VAR_12 = VAR_11->itv;
 struct ivtv_stream *VAR_13 = &VAR_12->streams[VAR_11->type];
 int VAR_14 = FUNC_9(VAR_7, &VAR_13->s_flags);
 __poll_t VAR_15 = 0;


 if (!VAR_14 && !FUNC_9(VAR_6, &VAR_13->s_flags) &&
   VAR_13->type != VAR_5 &&
   (VAR_10 & (VAR_2 | VAR_4))) {
  int VAR_16;

  FUNC_5(&VAR_12->serialize_lock);
  VAR_16 = FUNC_4(VAR_11);
  FUNC_6(&VAR_12->serialize_lock);
  if (VAR_16) {
   FUNC_2("Could not start capture for %s (%d)\n",
     VAR_13->name, VAR_16);
   return VAR_0;
  }
  FUNC_0("Encoder poll started capture\n");
 }


 FUNC_1("Encoder poll\n");
 FUNC_8(VAR_8, &VAR_13->waitq, VAR_9);
 if (FUNC_10(&VAR_11->fh))
  VAR_15 |= VAR_3;
 else
  FUNC_8(VAR_8, &VAR_11->fh.wait, VAR_9);

 if (VAR_13->q_full.length || VAR_13->q_io.length)
  return VAR_15 | VAR_2 | VAR_4;
 if (VAR_14)
  return VAR_15 | VAR_1;
 return VAR_15;
}
