
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct imgu_css_pipe {TYPE_8__** abi_buffers; int qlock; TYPE_6__* queue; } ;
struct imgu_css_buffer {size_t queue; size_t queue_pos; int list; int state; int daddr; } ;
struct imgu_css {int dev; struct imgu_css_pipe* pipes; int streaming; } ;
struct imgu_addr_t {int dummy; } ;
struct TYPE_12__ {int padded_width; } ;
struct TYPE_9__ {int s3a_tbl; } ;
struct TYPE_10__ {TYPE_1__ dmem; } ;
struct TYPE_11__ {TYPE_2__ data; } ;
struct TYPE_13__ {TYPE_4__ frame; TYPE_3__ s3a; } ;
struct imgu_abi_buffer {TYPE_5__ payload; } ;
typedef int imgu_addr_t ;
struct TYPE_16__ {int daddr; struct imgu_abi_buffer* vaddr; } ;
struct TYPE_15__ {int ptr_ofs; int qid; } ;
struct TYPE_14__ {int bufs; int width_pad; } ;


 size_t FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int ,char*,struct imgu_css_buffer*,size_t,unsigned int) ;
 int FUNC_3 (struct imgu_css*,int ,unsigned int,int ) ;
 size_t FUNC_4 (struct imgu_css*,int ,unsigned int) ;
 TYPE_7__* VAR_13 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct imgu_abi_buffer*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct imgu_css *VAR_14, unsigned int VAR_15,
         struct imgu_css_buffer *VAR_16)
{
 struct imgu_abi_buffer *VAR_17;
 struct imgu_addr_t *VAR_18;
 u32 VAR_19;
 int VAR_20;
 struct imgu_css_pipe *VAR_21 = &VAR_14->pipes[VAR_15];

 if (!VAR_14->streaming)
  return -VAR_4;

 if (VAR_16->queue >= VAR_9 || !VAR_13[VAR_16->queue].qid)
  return -VAR_2;

 VAR_16->queue_pos = FUNC_4(VAR_14, VAR_13[VAR_16->queue].qid,
       VAR_15);

 if (VAR_16->queue_pos >= FUNC_0(VAR_14->pipes[VAR_15].abi_buffers[VAR_16->queue]))
  return -VAR_3;
 VAR_17 = VAR_14->pipes[VAR_15].abi_buffers[VAR_16->queue][VAR_16->queue_pos].vaddr;


 FUNC_7(VAR_17, 0, sizeof(*VAR_17));

 VAR_18 = (void *)VAR_17 + VAR_13[VAR_16->queue].ptr_ofs;
 *(imgu_addr_t *)VAR_18 = VAR_16->daddr;

 if (VAR_16->queue == VAR_11)
  VAR_17->payload.s3a.data.dmem.s3a_tbl = VAR_16->daddr;

 if (VAR_16->queue == VAR_10)
  VAR_17->payload.frame.padded_width =
    VAR_21->queue[VAR_10].width_pad;

 if (VAR_16->queue == VAR_12)
  VAR_17->payload.frame.padded_width =
     VAR_21->queue[VAR_12].width_pad;

 FUNC_8(&VAR_21->qlock);
 FUNC_5(&VAR_16->list, &VAR_21->queue[VAR_16->queue].bufs);
 FUNC_9(&VAR_21->qlock);
 VAR_16->state = VAR_8;

 VAR_19 = VAR_14->pipes[VAR_15].abi_buffers[VAR_16->queue][VAR_16->queue_pos].daddr;
 VAR_20 = FUNC_3(VAR_14, VAR_13[VAR_16->queue].qid,
    VAR_15, VAR_19);
 if (VAR_20 < 0)
  goto queueing_failed;

 VAR_19 = FUNC_1(VAR_15,
           VAR_13[VAR_16->queue].qid);
 VAR_20 = FUNC_3(VAR_14, VAR_5, VAR_15, VAR_19);
 if (VAR_20 < 0)
  goto queueing_failed;

 FUNC_2(VAR_14->dev, "queued buffer %p to css queue %i in pipe %d\n",
  VAR_16, VAR_16->queue, VAR_15);

 return 0;

queueing_failed:
 VAR_16->state = (VAR_20 == -VAR_1 || VAR_20 == -VAR_0) ?
  VAR_7 : VAR_6;
 FUNC_6(&VAR_16->list);

 return VAR_20;
}
