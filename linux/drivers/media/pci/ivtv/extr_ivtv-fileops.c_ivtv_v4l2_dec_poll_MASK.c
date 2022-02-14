
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffers; } ;
struct ivtv_stream {TYPE_1__ q_free; int waitq; } ;
struct TYPE_4__ {int wait; int subscribed; } ;
struct ivtv_open_id {size_t type; TYPE_2__ fh; struct ivtv* itv; } ;
struct ivtv {int i_flags; struct ivtv_stream* streams; } ;
struct file {int private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 struct ivtv_open_id* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__poll_t FUNC_8(struct file *VAR_6, poll_table *VAR_7)
{
 struct ivtv_open_id *VAR_8 = FUNC_2(VAR_6->private_data);
 struct ivtv *VAR_9 = VAR_8->itv;
 struct ivtv_stream *VAR_10 = &VAR_9->streams[VAR_8->type];
 __poll_t VAR_11 = 0;


 FUNC_0("Decoder poll\n");



 if (!FUNC_3(&VAR_8->fh.subscribed)) {
  FUNC_4(VAR_6, &VAR_8->fh.wait, VAR_7);

  FUNC_1(VAR_5, &VAR_9->i_flags);
  if (FUNC_7(&VAR_8->fh))
   VAR_11 = VAR_1;
 } else {


  FUNC_4(VAR_6, &VAR_10->waitq, VAR_7);
  FUNC_5(VAR_5, &VAR_9->i_flags);
  if (FUNC_6(VAR_4, &VAR_9->i_flags) ||
      FUNC_6(VAR_3, &VAR_9->i_flags))
   VAR_11 = VAR_1;
 }


 if (VAR_10->q_free.buffers)
  VAR_11 |= VAR_0 | VAR_2;
 return VAR_11;
}
