
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe_q_data {int nplanes; int flags; scalar_t__* sizeimage; } ;
struct vpe_ctx {int dev; } ;
struct vb2_v4l2_buffer {scalar_t__ field; } ;
struct vb2_buffer {TYPE_1__* vb2_queue; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct vpe_q_data* FUNC_0 (struct vpe_ctx*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 struct vpe_ctx* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct vb2_buffer*,int) ;
 int FUNC_4 (struct vb2_buffer*,int,scalar_t__) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,scalar_t__,long) ;

__attribute__((used)) static int FUNC_7(struct vb2_buffer *VAR_7)
{
 struct vb2_v4l2_buffer *VAR_8 = FUNC_1(VAR_7);
 struct vpe_ctx *VAR_9 = FUNC_2(VAR_7->vb2_queue);
 struct vpe_q_data *VAR_10;
 int VAR_11, VAR_12;

 FUNC_5(VAR_9->dev, "type: %d\n", VAR_7->vb2_queue->type);

 VAR_10 = FUNC_0(VAR_9, VAR_7->vb2_queue->type);
 VAR_12 = VAR_10->nplanes;

 if (VAR_7->vb2_queue->type == VAR_2) {
  if (!(VAR_10->flags & VAR_1)) {
   VAR_8->field = VAR_4;
  } else {
   if (VAR_8->field != VAR_6 &&
       VAR_8->field != VAR_3 &&
       VAR_8->field != VAR_5)
    return -VAR_0;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  if (FUNC_3(VAR_7, VAR_11) < VAR_10->sizeimage[VAR_11]) {
   FUNC_6(VAR_9->dev,
    "data will not fit into plane (%lu < %lu)\n",
    FUNC_3(VAR_7, VAR_11),
    (long) VAR_10->sizeimage[VAR_11]);
   return -VAR_0;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  FUNC_4(VAR_7, VAR_11, VAR_10->sizeimage[VAR_11]);

 return 0;
}
