
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int field; } ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct TYPE_4__ {int field; int sizeimage; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct common_obj {scalar_t__ cbtm_off; scalar_t__ ctop_off; scalar_t__ ybtm_off; scalar_t__ ytop_off; TYPE_3__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 unsigned long FUNC_2 (struct vb2_buffer*,int ) ;
 struct channel_obj* FUNC_3 (struct vb2_queue*) ;
 scalar_t__ FUNC_4 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_5 (struct vb2_buffer*,int ) ;
 int FUNC_6 (struct vb2_buffer*,int ,int ) ;
 int FUNC_7 (int,int ,char*) ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4 = FUNC_1(VAR_3);
 struct vb2_queue *VAR_5 = VAR_3->vb2_queue;
 struct channel_obj *VAR_6 = FUNC_3(VAR_5);
 struct common_obj *VAR_7;
 unsigned long VAR_8;

 FUNC_7(2, VAR_2, "vpif_buffer_prepare\n");

 VAR_7 = &VAR_6->common[VAR_1];

 FUNC_6(VAR_3, 0, VAR_7->fmt.fmt.pix.sizeimage);
 if (FUNC_4(VAR_3, 0) > FUNC_5(VAR_3, 0))
  return -VAR_0;

 VAR_4->field = VAR_7->fmt.fmt.pix.field;

 VAR_8 = FUNC_2(VAR_3, 0);
 if (!FUNC_0((VAR_8 + VAR_7->ytop_off), 8) ||
  !FUNC_0((VAR_8 + VAR_7->ybtm_off), 8) ||
  !FUNC_0((VAR_8 + VAR_7->ctop_off), 8) ||
  !FUNC_0((VAR_8 + VAR_7->cbtm_off), 8)) {
  FUNC_7(1, VAR_2, "offset is not aligned\n");
  return -VAR_0;
 }

 return 0;
}
