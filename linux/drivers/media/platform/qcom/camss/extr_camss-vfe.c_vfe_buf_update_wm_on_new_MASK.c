
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_output {int state; struct camss_buffer** buf; int active_buf; } ;
struct vfe_device {TYPE_1__* camss; } ;
struct camss_buffer {int dummy; } ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vfe_output*,struct camss_buffer*) ;
 int FUNC_2 (struct vfe_device*,struct vfe_output*,int) ;
 int FUNC_3 (struct vfe_device*,struct vfe_output*,int) ;
 int FUNC_4 (struct vfe_device*,struct vfe_output*,int ) ;
 int FUNC_5 (struct vfe_device*,struct vfe_output*,int ) ;

__attribute__((used)) static void FUNC_6(struct vfe_device *VAR_0,
         struct vfe_output *VAR_1,
         struct camss_buffer *VAR_2)
{
 int VAR_3;

 switch (VAR_1->state) {
 case 128:
  VAR_3 = !VAR_1->active_buf;

  if (!VAR_1->buf[VAR_3]) {
   VAR_1->buf[VAR_3] = VAR_2;

   if (VAR_3)
    FUNC_5(VAR_0, VAR_1, 0);
   else
    FUNC_4(VAR_0, VAR_1, 0);

   FUNC_2(VAR_0, VAR_1, 3);
   VAR_1->state = 130;
  } else {
   FUNC_1(VAR_1, VAR_2);
   FUNC_0(VAR_0->camss->dev,
         "Inactive buffer is busy\n");
  }
  break;

 case 129:
  if (!VAR_1->buf[0]) {
   VAR_1->buf[0] = VAR_2;

   FUNC_3(VAR_0, VAR_1, 1);

   FUNC_2(VAR_0, VAR_1, 1);
   VAR_1->state = 128;
  } else {
   FUNC_1(VAR_1, VAR_2);
   FUNC_0(VAR_0->camss->dev,
         "Output idle with buffer set!\n");
  }
  break;

 case 130:
 default:
  FUNC_1(VAR_1, VAR_2);
  break;
 }
}
