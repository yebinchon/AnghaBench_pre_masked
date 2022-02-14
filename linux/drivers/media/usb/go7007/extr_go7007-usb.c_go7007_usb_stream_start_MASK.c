
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_usb {int * video_urbs; int * audio_urbs; } ;
struct go7007 {int dev; int audio_enabled; struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct go7007 *VAR_1)
{
 struct go7007_usb *VAR_2 = VAR_1->hpi_context;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
  VAR_4 = FUNC_2(VAR_2->video_urbs[VAR_3], VAR_0);
  if (VAR_4 < 0) {
   FUNC_0(VAR_1->dev, "error submitting video urb %d: %d\n", VAR_3, VAR_4);
   goto video_submit_failed;
  }
 }
 if (!VAR_1->audio_enabled)
  return 0;

 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
  VAR_4 = FUNC_2(VAR_2->audio_urbs[VAR_3], VAR_0);
  if (VAR_4 < 0) {
   FUNC_0(VAR_1->dev, "error submitting audio urb %d: %d\n", VAR_3, VAR_4);
   goto audio_submit_failed;
  }
 }
 return 0;

audio_submit_failed:
 for (VAR_3 = 0; VAR_3 < 7; ++VAR_3)
  FUNC_1(VAR_2->audio_urbs[VAR_3]);
video_submit_failed:
 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3)
  FUNC_1(VAR_2->video_urbs[VAR_3]);
 return -1;
}
