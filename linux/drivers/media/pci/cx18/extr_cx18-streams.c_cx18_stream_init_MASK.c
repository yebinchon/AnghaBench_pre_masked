
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cx18_videobuf_buffer {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct cx18_stream {int type; int buf_size; int bufs_per_mdl; int mdl_size; int id; int vb_bytes_per_frame; int vb_bytes_per_line; int pixelformat; int vbuf_q_lock; int vbuf_q; int vb_type; int vb_lock; int vb_timeout; int vb_capture; int out_work_order; TYPE_4__ q_idle; TYPE_4__ q_full; TYPE_4__ q_busy; TYPE_4__ q_free; int waitq; int buf_pool; int buffers; int v4l2_dev_caps; int dma; int handle; int name; struct cx18* cx; int * dvb; } ;
struct TYPE_6__ {int height; } ;
struct cx18 {int* stream_buf_size; TYPE_2__ cxhdl; int serialize_lock; TYPE_1__* pci_dev; int * stream_buffers; struct cx18_stream* streams; } ;
struct TYPE_7__ {int caps; int dma; int name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cx18_stream*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int *,int *,int *,int ,int ,int,struct cx18_stream*,int *) ;

__attribute__((used)) static void FUNC_8(struct cx18 *VAR_9, int VAR_10)
{
 struct cx18_stream *VAR_11 = &VAR_9->streams[VAR_10];

 FUNC_4(VAR_11, 0, sizeof(*VAR_11));


 VAR_11->dvb = ((void*)0);
 VAR_11->cx = VAR_9;
 VAR_11->type = VAR_10;
 VAR_11->name = VAR_6[VAR_10].name;
 VAR_11->handle = VAR_1;

 VAR_11->dma = VAR_6[VAR_10].dma;
 VAR_11->v4l2_dev_caps = VAR_6[VAR_10].caps;
 VAR_11->buffers = VAR_9->stream_buffers[VAR_10];
 VAR_11->buf_size = VAR_9->stream_buf_size[VAR_10];
 FUNC_0(&VAR_11->buf_pool);
 VAR_11->bufs_per_mdl = 1;
 VAR_11->mdl_size = VAR_11->buf_size * VAR_11->bufs_per_mdl;

 FUNC_3(&VAR_11->waitq);
 VAR_11->id = -1;
 FUNC_5(&VAR_11->q_free.lock);
 FUNC_2(&VAR_11->q_free);
 FUNC_5(&VAR_11->q_busy.lock);
 FUNC_2(&VAR_11->q_busy);
 FUNC_5(&VAR_11->q_full.lock);
 FUNC_2(&VAR_11->q_full);
 FUNC_5(&VAR_11->q_idle.lock);
 FUNC_2(&VAR_11->q_idle);

 FUNC_1(&VAR_11->out_work_order, VAR_5);

 FUNC_0(&VAR_11->vb_capture);
 FUNC_6(&VAR_11->vb_timeout, VAR_7, 0);
 FUNC_5(&VAR_11->vb_lock);
 if (VAR_10 == VAR_0) {
  FUNC_5(&VAR_11->vbuf_q_lock);

  VAR_11->vb_type = VAR_2;
  FUNC_7(&VAR_11->vbuf_q, &VAR_8,
   &VAR_9->pci_dev->dev, &VAR_11->vbuf_q_lock,
   VAR_2,
   VAR_3,
   sizeof(struct cx18_videobuf_buffer),
   VAR_11, &VAR_9->serialize_lock);


  VAR_11->pixelformat = VAR_4;
  VAR_11->vb_bytes_per_frame = VAR_9->cxhdl.height * 720 * 3 / 2;
  VAR_11->vb_bytes_per_line = 720;
 }
}
