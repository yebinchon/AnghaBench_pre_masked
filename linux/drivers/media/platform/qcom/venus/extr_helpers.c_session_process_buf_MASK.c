
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {scalar_t__ session_type; int opb_buftype; } ;
struct venus_buffer {int dma_addr; int size; } ;
struct vb2_buffer {unsigned int type; TYPE_1__* planes; int index; int timestamp; } ;
struct vb2_v4l2_buffer {int flags; struct vb2_buffer vb2_buf; } ;
struct hfi_frame_data {scalar_t__ offset; scalar_t__ filled_len; int buffer_type; int flags; int clnt_data; int timestamp; int device_addr; int alloc_len; } ;
typedef int fdata ;
struct TYPE_2__ {scalar_t__ data_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct venus_inst*,struct hfi_frame_data*) ;
 int FUNC_2 (struct hfi_frame_data*,int ,int) ;
 int FUNC_3 (struct venus_inst*,struct vb2_v4l2_buffer*) ;
 struct venus_buffer* FUNC_4 (struct vb2_v4l2_buffer*) ;
 scalar_t__ FUNC_5 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int
FUNC_6(struct venus_inst *VAR_9, struct vb2_v4l2_buffer *VAR_10)
{
 struct venus_buffer *VAR_11 = FUNC_4(VAR_10);
 struct vb2_buffer *VAR_12 = &VAR_10->vb2_buf;
 unsigned int VAR_13 = VAR_12->type;
 struct hfi_frame_data VAR_14;
 int VAR_15;

 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.alloc_len = VAR_11->size;
 VAR_14.device_addr = VAR_11->dma_addr;
 VAR_14.timestamp = VAR_12->timestamp;
 FUNC_0(VAR_14.timestamp, VAR_3);
 VAR_14.flags = 0;
 VAR_14.clnt_data = VAR_10->vb2_buf.index;

 if (VAR_13 == VAR_6) {
  VAR_14.buffer_type = VAR_1;
  VAR_14.filled_len = FUNC_5(VAR_12, 0);
  VAR_14.offset = VAR_12->planes[0].data_offset;

  if (VAR_10->flags & VAR_4 || !VAR_14.filled_len)
   VAR_14.flags |= VAR_0;

  if (VAR_9->session_type == VAR_7)
   FUNC_3(VAR_9, VAR_10);
 } else if (VAR_13 == VAR_5) {
  if (VAR_9->session_type == VAR_8)
   VAR_14.buffer_type = VAR_2;
  else
   VAR_14.buffer_type = VAR_9->opb_buftype;
  VAR_14.filled_len = 0;
  VAR_14.offset = 0;
 }

 VAR_15 = FUNC_1(VAR_9, &VAR_14);
 if (VAR_15)
  return VAR_15;

 return 0;
}
