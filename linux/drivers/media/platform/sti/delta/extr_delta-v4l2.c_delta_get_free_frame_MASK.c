
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct delta_frame {int index; int state; } ;
struct delta_dev {int dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct delta_ctx {int name; TYPE_1__ fh; struct delta_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (struct delta_ctx*) ;
 struct delta_frame* FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;

int FUNC_5(struct delta_ctx *VAR_4,
    struct delta_frame **VAR_5)
{
 struct delta_dev *VAR_6 = VAR_4->dev;
 struct vb2_v4l2_buffer *VAR_7;
 struct delta_frame *VAR_8;

 *VAR_5 = ((void*)0);

 VAR_7 = FUNC_4(VAR_4->fh.m2m_ctx);
 if (!VAR_7) {
  FUNC_1(VAR_6->dev, "%s no frame available",
   VAR_4->name);
  return -VAR_2;
 }

 VAR_8 = FUNC_3(VAR_7);
 VAR_8->state &= ~VAR_1;
 if (VAR_8->state != VAR_0) {
  FUNC_1(VAR_6->dev,
   "%s frame[%d] is not free\n",
   VAR_4->name, VAR_8->index);
  FUNC_2(VAR_4);
  return -VAR_3;
 }

 FUNC_0(VAR_6->dev,
  "%s get free frame[%d]\n", VAR_4->name, VAR_8->index);

 *VAR_5 = VAR_8;
 return 0;
}
