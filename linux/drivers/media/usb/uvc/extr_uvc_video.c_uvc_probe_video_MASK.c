
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct uvc_streaming_control {scalar_t__ dwMaxPayloadTransferSize; int wCompWindowSize; int wCompQuality; int wPFrameRate; int wKeyFrameRate; } ;
struct uvc_streaming {scalar_t__ maxpsize; TYPE_2__* dev; TYPE_1__* intf; } ;
struct TYPE_4__ {int quirks; } ;
struct TYPE_3__ {int num_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uvc_streaming*,struct uvc_streaming_control*,int,int ) ;
 int FUNC_1 (struct uvc_streaming*,struct uvc_streaming_control*,int) ;

int FUNC_2(struct uvc_streaming *VAR_5,
 struct uvc_streaming_control *VAR_6)
{
 struct uvc_streaming_control VAR_7, VAR_8;
 u16 VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 VAR_11 = FUNC_1(VAR_5, VAR_6, 1);
 if (VAR_11 < 0)
  goto done;


 if (!(VAR_5->dev->quirks & VAR_4)) {
  VAR_11 = FUNC_0(VAR_5, &VAR_7, 1, VAR_3);
  if (VAR_11 < 0)
   goto done;
  VAR_11 = FUNC_0(VAR_5, &VAR_8, 1, VAR_2);
  if (VAR_11 < 0)
   goto done;

  VAR_6->wCompQuality = VAR_8.wCompQuality;
 }

 for (VAR_10 = 0; VAR_10 < 2; ++VAR_10) {
  VAR_11 = FUNC_1(VAR_5, VAR_6, 1);
  if (VAR_11 < 0)
   goto done;
  VAR_11 = FUNC_0(VAR_5, VAR_6, 1, VAR_1);
  if (VAR_11 < 0)
   goto done;

  if (VAR_5->intf->num_altsetting == 1)
   break;

  VAR_9 = VAR_6->dwMaxPayloadTransferSize;
  if (VAR_9 <= VAR_5->maxpsize)
   break;

  if (VAR_5->dev->quirks & VAR_4) {
   VAR_11 = -VAR_0;
   goto done;
  }


  VAR_6->wKeyFrameRate = VAR_7.wKeyFrameRate;
  VAR_6->wPFrameRate = VAR_7.wPFrameRate;
  VAR_6->wCompQuality = VAR_8.wCompQuality;
  VAR_6->wCompWindowSize = VAR_7.wCompWindowSize;
 }

done:
 return VAR_11;
}
