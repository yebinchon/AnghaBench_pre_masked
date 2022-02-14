
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int flags; } ;
struct v4l2_event {int type; } ;
struct allegro_channel {int fh; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct allegro_channel*) ;
 int FUNC_1 (struct allegro_channel*,int ) ;
 int FUNC_2 (int *,struct v4l2_event const*) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int) ;

__attribute__((used)) static void FUNC_4(struct allegro_channel *VAR_3,
         struct vb2_v4l2_buffer *VAR_4,
         enum vb2_buffer_state VAR_5)
{
 const struct v4l2_event VAR_6 = {
  .type = VAR_2
 };

 if (FUNC_0(VAR_3)) {
  VAR_4->flags |= VAR_1;
  FUNC_2(&VAR_3->fh, &VAR_6);

  FUNC_1(VAR_3, VAR_0);
 }

 FUNC_3(VAR_4, VAR_5);
}
