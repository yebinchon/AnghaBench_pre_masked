
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int timestamp; } ;
struct TYPE_2__ {struct vb2_buffer vb2_buf; } ;
struct imx_media_buffer {TYPE_1__ vbuf; } ;
struct imx7_csi {struct imx_media_buffer** active_vb2_buf; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int FUNC_0 () ;
 int FUNC_1 (struct vb2_buffer*,int) ;

__attribute__((used)) static void FUNC_2(struct imx7_csi *VAR_0,
      enum vb2_buffer_state VAR_1)
{
 struct imx_media_buffer *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_2 = VAR_0->active_vb2_buf[VAR_3];
  if (VAR_2) {
   struct vb2_buffer *VAR_4 = &VAR_2->vbuf.vb2_buf;

   VAR_4->timestamp = FUNC_0();
   FUNC_1(VAR_4, VAR_1);
  }
 }
}
