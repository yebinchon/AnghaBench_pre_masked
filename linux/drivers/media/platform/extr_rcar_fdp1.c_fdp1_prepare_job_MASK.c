
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct fdp1_job {TYPE_7__* active; TYPE_5__* dst; int next; TYPE_7__* previous; } ;
struct fdp1_dev {int dummy; } ;
struct TYPE_8__ {int m2m_ctx; } ;
struct fdp1_ctx {unsigned int buffers_queued; int translen; int deint_mode; TYPE_7__* previous; int sequence; TYPE_1__ fh; struct fdp1_dev* fdp1; } ;
struct fdp1_buffer {TYPE_5__* fields; } ;
struct TYPE_14__ {TYPE_6__* vb; } ;
struct TYPE_10__ {int timestamp; } ;
struct TYPE_13__ {int flags; TYPE_3__ vb2_buf; int sequence; } ;
struct TYPE_12__ {TYPE_4__* vb; } ;
struct TYPE_9__ {int timestamp; } ;
struct TYPE_11__ {int flags; TYPE_2__ vb2_buf; int sequence; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct fdp1_dev*,char*,...) ;
 TYPE_7__* FUNC_3 (struct fdp1_ctx*) ;
 struct fdp1_job* FUNC_4 (struct fdp1_dev*) ;
 int FUNC_5 (struct fdp1_dev*,struct fdp1_job*) ;
 int FUNC_6 (struct fdp1_ctx*) ;
 int FUNC_7 (struct fdp1_dev*,struct fdp1_job*) ;
 struct fdp1_buffer* FUNC_8 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_9 (int ) ;

__attribute__((used)) static struct fdp1_job *FUNC_10(struct fdp1_ctx *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2;
 struct fdp1_buffer *VAR_3;
 struct fdp1_dev *VAR_4 = VAR_1->fdp1;
 struct fdp1_job *VAR_5;
 unsigned int VAR_6 = 1;

 FUNC_2(VAR_4, "+\n");

 if (FUNC_0(VAR_1->deint_mode))
  VAR_6 = 2;

 if (VAR_1->buffers_queued < VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5) {
  FUNC_2(VAR_4, "No free jobs currently available\n");
  return ((void*)0);
 }

 VAR_5->active = FUNC_3(VAR_1);
 if (!VAR_5->active) {

  FUNC_2(VAR_4, "No input buffers currently available\n");

  FUNC_5(VAR_4, VAR_5);
  return ((void*)0);
 }

 FUNC_2(VAR_4, "+ Buffer en-route...\n");




 VAR_2 = FUNC_9(VAR_1->fh.m2m_ctx);
 VAR_3 = FUNC_8(VAR_2);
 VAR_5->dst = &VAR_3->fields[0];

 VAR_5->active->vb->sequence = VAR_1->sequence;
 VAR_5->dst->vb->sequence = VAR_1->sequence;
 VAR_1->sequence++;

 if (FUNC_1(VAR_1->deint_mode)) {
  VAR_5->previous = VAR_1->previous;


  VAR_1->previous = VAR_5->active;
 }

 if (FUNC_0(VAR_1->deint_mode)) {

  VAR_5->next = FUNC_6(VAR_1);
 }



 VAR_5->dst->vb->vb2_buf.timestamp = VAR_5->active->vb->vb2_buf.timestamp;

 VAR_5->dst->vb->flags = VAR_5->active->vb->flags &
    VAR_0;




 VAR_1->translen++;


 FUNC_7(VAR_4, VAR_5);

 FUNC_2(VAR_4, "Job Queued translen = %d\n", VAR_1->translen);

 return VAR_5;
}
