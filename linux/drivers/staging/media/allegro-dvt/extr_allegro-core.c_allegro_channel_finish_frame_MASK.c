
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vb2_v4l2_buffer {scalar_t__ sequence; int flags; int vb2_buf; } ;
struct mcu_msg_encode_frame_response {int partition_table_size; scalar_t__ partition_table_offset; scalar_t__ slice_type; scalar_t__ is_idr; int error_code; } ;
struct allegro_dev {int m2m_dev; int v4l2_dev; TYPE_1__* plat_dev; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct allegro_channel {scalar_t__ mcu_channel_id; TYPE_2__ fh; int csequence; struct allegro_dev* dev; } ;
typedef scalar_t__ ssize_t ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct allegro_channel*,struct vb2_v4l2_buffer*,int) ;
 scalar_t__ FUNC_1 (struct allegro_channel*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct allegro_channel*,char*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int,int ,int *,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_5 (int *,char*,scalar_t__,...) ;
 int FUNC_6 (struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*,int) ;
 int FUNC_7 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,scalar_t__,int) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 void* FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct allegro_channel *VAR_7,
  struct mcu_msg_encode_frame_response *VAR_8)
{
 struct allegro_dev *VAR_9 = VAR_7->dev;
 struct vb2_v4l2_buffer *VAR_10;
 struct vb2_v4l2_buffer *VAR_11;
 struct {
  u32 offset;
  u32 size;
 } *VAR_12;
 enum vb2_buffer_state VAR_13 = VAR_5;
 char *VAR_14;
 ssize_t VAR_15;
 ssize_t VAR_16;

 VAR_10 = FUNC_10(VAR_7->fh.m2m_ctx);

 VAR_11 = FUNC_8(VAR_7->fh.m2m_ctx);
 VAR_11->sequence = VAR_7->csequence++;

 if (VAR_8->error_code) {
  FUNC_5(&VAR_9->v4l2_dev,
    "channel %d: error while encoding frame: %x\n",
    VAR_7->mcu_channel_id, VAR_8->error_code);
  goto err;
 }

 if (VAR_8->partition_table_size != 1) {
  FUNC_11(&VAR_9->v4l2_dev,
     "channel %d: only handling first partition table entry (%d entries)\n",
     VAR_7->mcu_channel_id, VAR_8->partition_table_size);
 }

 if (VAR_8->partition_table_offset +
     VAR_8->partition_table_size * sizeof(*VAR_12) >
     FUNC_12(&VAR_11->vb2_buf, 0)) {
  FUNC_5(&VAR_9->v4l2_dev,
    "channel %d: partition table outside of dst_buf\n",
    VAR_7->mcu_channel_id);
  goto err;
 }

 VAR_12 =
     FUNC_13(&VAR_11->vb2_buf, 0) + VAR_8->partition_table_offset;
 if (VAR_12->offset + VAR_12->size >
     FUNC_12(&VAR_11->vb2_buf, 0)) {
  FUNC_5(&VAR_9->v4l2_dev,
    "channel %d: encoded frame is outside of dst_buf (offset 0x%x, size 0x%x)\n",
    VAR_7->mcu_channel_id, VAR_12->offset,
    VAR_12->size);
  goto err;
 }

 FUNC_4(2, VAR_6, &VAR_9->v4l2_dev,
   "channel %d: encoded frame of size %d is at offset 0x%x\n",
   VAR_7->mcu_channel_id, VAR_12->size, VAR_12->offset);





 FUNC_14(&VAR_11->vb2_buf, 0,
         VAR_12->offset + VAR_12->size);

 VAR_14 = FUNC_13(&VAR_11->vb2_buf, 0);
 VAR_16 = VAR_12->offset;
 if (VAR_8->is_idr) {
  VAR_15 = FUNC_2(VAR_7, VAR_14, VAR_16);
  if (VAR_15 < 0) {
   FUNC_5(&VAR_9->v4l2_dev,
     "not enough space for sequence parameter set: %zd left\n",
     VAR_16);
   goto err;
  }
  VAR_14 += VAR_15;
  VAR_16 -= VAR_15;
  FUNC_4(1, VAR_6, &VAR_9->v4l2_dev,
    "channel %d: wrote %zd byte SPS nal unit\n",
    VAR_7->mcu_channel_id, VAR_15);
 }

 if (VAR_8->slice_type == VAR_0) {
  VAR_15 = FUNC_1(VAR_7, VAR_14, VAR_16);
  if (VAR_15 < 0) {
   FUNC_5(&VAR_9->v4l2_dev,
     "not enough space for picture parameter set: %zd left\n",
     VAR_16);
   goto err;
  }
  VAR_14 += VAR_15;
  VAR_16 -= VAR_15;
  FUNC_4(1, VAR_6, &VAR_9->v4l2_dev,
    "channel %d: wrote %zd byte PPS nal unit\n",
    VAR_7->mcu_channel_id, VAR_15);
 }

 VAR_15 = FUNC_3(&VAR_9->plat_dev->dev, VAR_14, VAR_16);
 if (VAR_15 < 0) {
  FUNC_5(&VAR_9->v4l2_dev,
    "failed to write %zd filler data\n", VAR_16);
  goto err;
 }
 VAR_14 += VAR_15;
 VAR_16 -= VAR_15;
 FUNC_4(2, VAR_6, &VAR_9->v4l2_dev,
   "channel %d: wrote %zd bytes filler nal unit\n",
   VAR_7->mcu_channel_id, VAR_15);

 if (VAR_16 != 0) {
  FUNC_5(&VAR_9->v4l2_dev,
    "non-VCL NAL units do not fill space until VCL NAL unit: %zd bytes left\n",
    VAR_16);
  goto err;
 }

 VAR_13 = VAR_4;

 FUNC_6(VAR_10, VAR_11, 0);
 if (VAR_8->is_idr)
  VAR_11->flags |= VAR_2;
 else
  VAR_11->flags |= VAR_3;

 FUNC_4(1, VAR_6, &VAR_9->v4l2_dev,
   "channel %d: encoded frame #%03d (%s%s, %d bytes)\n",
   VAR_7->mcu_channel_id,
   VAR_11->sequence,
   VAR_8->is_idr ? "IDR, " : "",
   VAR_8->slice_type == VAR_0 ? "I slice" :
   VAR_8->slice_type == VAR_1 ? "P slice" : "unknown",
   VAR_12->size);

err:
 FUNC_7(VAR_10, VAR_4);

 FUNC_0(VAR_7, VAR_11, VAR_13);

 FUNC_9(VAR_9->m2m_dev, VAR_7->fh.m2m_ctx);
}
