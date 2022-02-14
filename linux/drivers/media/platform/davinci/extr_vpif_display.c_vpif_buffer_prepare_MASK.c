
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {TYPE_4__* vb2_queue; } ;
struct TYPE_5__ {int field; int sizeimage; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
struct common_obj {scalar_t__ cbtm_off; scalar_t__ ctop_off; scalar_t__ ybtm_off; scalar_t__ ytop_off; TYPE_3__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 unsigned long FUNC_2 (struct vb2_buffer*,int ) ;
 struct channel_obj* FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_5 (struct vb2_buffer*,int ) ;
 int FUNC_6 (struct vb2_buffer*,int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4 = FUNC_1(VAR_3);
 struct channel_obj *VAR_5 = FUNC_3(VAR_3->vb2_queue);
 struct common_obj *VAR_6;

 VAR_6 = &VAR_5->common[VAR_2];

 FUNC_6(VAR_3, 0, VAR_6->fmt.fmt.pix.sizeimage);
 if (FUNC_4(VAR_3, 0) > FUNC_5(VAR_3, 0))
  return -VAR_0;

 VAR_4->field = VAR_6->fmt.fmt.pix.field;

 if (VAR_3->vb2_queue->type != VAR_1) {
  unsigned long VAR_7 = FUNC_2(VAR_3, 0);

  if (!FUNC_0(VAR_7 + VAR_6->ytop_off) ||
   !FUNC_0(VAR_7 + VAR_6->ybtm_off) ||
   !FUNC_0(VAR_7 + VAR_6->ctop_off) ||
   !FUNC_0(VAR_7 + VAR_6->cbtm_off)) {
   FUNC_7("buffer offset not aligned to 8 bytes\n");
   return -VAR_0;
  }
 }

 return 0;
}
