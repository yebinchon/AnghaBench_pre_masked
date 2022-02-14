
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; } ;
struct allegro_dev {int v4l2_dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct allegro_channel {TYPE_1__ fh; struct allegro_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct allegro_channel*) ;
 int FUNC_2 (struct allegro_channel*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int,int ,int *,char*,char*) ;
 int FUNC_4 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;
 struct allegro_channel* FUNC_7 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_8(struct vb2_queue *VAR_4)
{
 struct allegro_channel *VAR_5 = FUNC_7(VAR_4);
 struct allegro_dev *VAR_6 = VAR_5->dev;
 struct vb2_v4l2_buffer *VAR_7;

 FUNC_3(2, VAR_3, &VAR_6->v4l2_dev,
   "%s: stop streaming\n",
   FUNC_0(VAR_4->type) ? "output" : "capture");

 if (FUNC_0(VAR_4->type)) {
  FUNC_2(VAR_5, VAR_0);
  while ((VAR_7 = FUNC_6(VAR_5->fh.m2m_ctx)))
   FUNC_4(VAR_7, VAR_2);
 } else if (VAR_4->type == VAR_1) {
  FUNC_1(VAR_5);
  while ((VAR_7 = FUNC_5(VAR_5->fh.m2m_ctx)))
   FUNC_4(VAR_7, VAR_2);
 }
}
