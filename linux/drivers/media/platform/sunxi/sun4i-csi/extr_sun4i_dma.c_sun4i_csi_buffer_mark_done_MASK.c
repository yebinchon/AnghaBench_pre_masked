
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
struct vb2_v4l2_buffer {unsigned int sequence; TYPE_2__ vb2_buf; int field; } ;
struct TYPE_3__ {int field; } ;
struct sun4i_csi {struct vb2_v4l2_buffer** current_buf; TYPE_1__ fmt; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(struct sun4i_csi *VAR_1,
           unsigned int VAR_2,
           unsigned int VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4;

 if (!VAR_1->current_buf[VAR_2]) {
  FUNC_0(VAR_1->dev, "Scratch buffer was used, ignoring..\n");
  return;
 }

 VAR_4 = VAR_1->current_buf[VAR_2];
 VAR_4->field = VAR_1->fmt.field;
 VAR_4->sequence = VAR_3;
 VAR_4->vb2_buf.timestamp = FUNC_1();
 FUNC_2(&VAR_4->vb2_buf, VAR_0);

 VAR_1->current_buf[VAR_2] = ((void*)0);
}
