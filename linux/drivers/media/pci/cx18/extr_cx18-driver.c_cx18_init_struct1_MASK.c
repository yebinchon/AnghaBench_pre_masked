
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_23__ {int buf_list; int list; } ;
struct TYPE_22__ {int list; } ;
struct TYPE_20__ {int sliced; } ;
struct TYPE_21__ {TYPE_12__ fmt; int type; } ;
struct TYPE_24__ {TYPE_15__ sliced_mpeg_mdl; TYPE_14__ sliced_mpeg_buf; TYPE_13__ in; int * sliced_in; } ;
struct TYPE_25__ {int capabilities; TYPE_11__* video_median_filter_type; TYPE_9__* video_temporal_filter_mode; TYPE_7__* video_spatial_filter_mode; TYPE_5__* video_spatial_filter; TYPE_3__* video_temporal_filter; int hdl; int * priv; int func; int * ops; int port; } ;
struct TYPE_26__ {int * ctrl_handler; } ;
struct cx18 {int open_id; int filter_mode; TYPE_16__ vbi; int dma_waitq; int mb_cpu_waitq; int mb_apu_waitq; int cap_w; TYPE_17__ cxhdl; int spatial_strength; int temporal_strength; TYPE_1__ v4l2_dev; int * streams; int epu2cpu_mb_lock; int epu2apu_mb_lock; int gpio_lock; int serialize_lock; int pci_dev; int base_addr; } ;
struct TYPE_33__ {int val; } ;
struct TYPE_34__ {TYPE_8__ cur; } ;
struct TYPE_31__ {int val; } ;
struct TYPE_32__ {TYPE_6__ cur; } ;
struct TYPE_29__ {int val; } ;
struct TYPE_30__ {TYPE_4__ cur; } ;
struct TYPE_27__ {int val; } ;
struct TYPE_28__ {TYPE_2__ cur; } ;
struct TYPE_18__ {int val; } ;
struct TYPE_19__ {TYPE_10__ cur; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cx18*) ;
 int VAR_6 ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (TYPE_17__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct cx18 *VAR_7)
{
 int VAR_8;

 VAR_7->base_addr = FUNC_7(VAR_7->pci_dev, 0);

 FUNC_6(&VAR_7->serialize_lock);
 FUNC_6(&VAR_7->gpio_lock);
 FUNC_6(&VAR_7->epu2apu_mb_lock);
 FUNC_6(&VAR_7->epu2cpu_mb_lock);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7);


 VAR_7->open_id = 1;


 VAR_7->cxhdl.port = VAR_3;
 VAR_7->cxhdl.capabilities = VAR_2 | VAR_1;
 VAR_7->cxhdl.ops = &VAR_6;
 VAR_7->cxhdl.func = VAR_5;
 VAR_7->cxhdl.priv = &VAR_7->streams[VAR_0];
 VAR_8 = FUNC_3(&VAR_7->cxhdl, 50);
 if (VAR_8)
  return VAR_8;
 VAR_7->v4l2_dev.ctrl_handler = &VAR_7->cxhdl.hdl;

 VAR_7->temporal_strength = VAR_7->cxhdl.video_temporal_filter->cur.val;
 VAR_7->spatial_strength = VAR_7->cxhdl.video_spatial_filter->cur.val;
 VAR_7->filter_mode = VAR_7->cxhdl.video_spatial_filter_mode->cur.val |
  (VAR_7->cxhdl.video_temporal_filter_mode->cur.val << 1) |
  (VAR_7->cxhdl.video_median_filter_type->cur.val << 2);

 FUNC_4(&VAR_7->cap_w);
 FUNC_4(&VAR_7->mb_apu_waitq);
 FUNC_4(&VAR_7->mb_cpu_waitq);
 FUNC_4(&VAR_7->dma_waitq);


 VAR_7->vbi.in.type = VAR_4;
 VAR_7->vbi.sliced_in = &VAR_7->vbi.in.fmt.sliced;


 FUNC_0(&VAR_7->vbi.sliced_mpeg_buf.list);
 FUNC_0(&VAR_7->vbi.sliced_mpeg_mdl.list);
 FUNC_0(&VAR_7->vbi.sliced_mpeg_mdl.buf_list);
 FUNC_5(&VAR_7->vbi.sliced_mpeg_buf.list,
   &VAR_7->vbi.sliced_mpeg_mdl.buf_list);
 return 0;
}
