
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct uvc_streaming_control {scalar_t__ bMaxVersion; scalar_t__ bMinVersion; scalar_t__ bPreferedVersion; scalar_t__ bmFramingInfo; void* dwClockFrequency; void* dwMaxPayloadTransferSize; void* dwMaxVideoFrameSize; void* wDelay; void* wCompWindowSize; void* wCompQuality; void* wPFrameRate; void* wKeyFrameRate; int dwFrameInterval; scalar_t__ bFrameIndex; scalar_t__ bFormatIndex; void* bmHint; } ;
struct uvc_streaming {TYPE_1__* dev; int intfnum; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_3__ {int quirks; void* clock_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ,int ,int ,scalar_t__*,int,int ) ;
 void* FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int ) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uvc_streaming_control*,int ,int) ;
 int FUNC_7 (struct uvc_streaming*,struct uvc_streaming_control*) ;
 int FUNC_8 (int ,char*,scalar_t__,char*,int,int) ;
 int VAR_12 ;
 int FUNC_9 (struct uvc_streaming*) ;
 int FUNC_10 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static int FUNC_11(struct uvc_streaming *VAR_13,
 struct uvc_streaming_control *VAR_14, int VAR_15, u8 VAR_16)
{
 u16 VAR_17 = FUNC_9(VAR_13);
 u8 *VAR_18;
 int VAR_19;

 if ((VAR_13->dev->quirks & VAR_7) &&
   VAR_16 == VAR_4)
  return -VAR_0;

 VAR_18 = FUNC_3(VAR_17, VAR_2);
 if (VAR_18 == ((void*)0))
  return -VAR_1;

 VAR_19 = FUNC_0(VAR_13->dev, VAR_16, 0, VAR_13->intfnum,
  VAR_15 ? VAR_9 : VAR_8, VAR_18,
  VAR_17, VAR_12);

 if ((VAR_16 == VAR_6 || VAR_16 == VAR_5) && VAR_19 == 2) {




  FUNC_10(VAR_13->dev, VAR_10, "UVC non "
   "compliance - GET_MIN/MAX(PROBE) incorrectly "
   "supported. Enabling workaround.\n");
  FUNC_6(VAR_14, 0, sizeof(*VAR_14));
  VAR_14->wCompQuality = FUNC_4((__le16 *)VAR_18);
  VAR_19 = 0;
  goto out;
 } else if (VAR_16 == VAR_4 && VAR_15 == 1 && VAR_19 != VAR_17) {




  FUNC_10(VAR_13->dev, VAR_11, "UVC non "
   "compliance - GET_DEF(PROBE) not supported. "
   "Enabling workaround.\n");
  VAR_19 = -VAR_0;
  goto out;
 } else if (VAR_19 != VAR_17) {
  FUNC_8(VAR_3, "Failed to query (%u) UVC %s control : "
   "%d (exp. %u).\n", VAR_16, VAR_15 ? "probe" : "commit",
   VAR_19, VAR_17);
  VAR_19 = -VAR_0;
  goto out;
 }

 VAR_14->bmHint = FUNC_4((__le16 *)&VAR_18[0]);
 VAR_14->bFormatIndex = VAR_18[2];
 VAR_14->bFrameIndex = VAR_18[3];
 VAR_14->dwFrameInterval = FUNC_5((__le32 *)&VAR_18[4]);
 VAR_14->wKeyFrameRate = FUNC_4((__le16 *)&VAR_18[8]);
 VAR_14->wPFrameRate = FUNC_4((__le16 *)&VAR_18[10]);
 VAR_14->wCompQuality = FUNC_4((__le16 *)&VAR_18[12]);
 VAR_14->wCompWindowSize = FUNC_4((__le16 *)&VAR_18[14]);
 VAR_14->wDelay = FUNC_4((__le16 *)&VAR_18[16]);
 VAR_14->dwMaxVideoFrameSize = FUNC_1(&VAR_18[18]);
 VAR_14->dwMaxPayloadTransferSize = FUNC_1(&VAR_18[22]);

 if (VAR_17 >= 34) {
  VAR_14->dwClockFrequency = FUNC_1(&VAR_18[26]);
  VAR_14->bmFramingInfo = VAR_18[30];
  VAR_14->bPreferedVersion = VAR_18[31];
  VAR_14->bMinVersion = VAR_18[32];
  VAR_14->bMaxVersion = VAR_18[33];
 } else {
  VAR_14->dwClockFrequency = VAR_13->dev->clock_frequency;
  VAR_14->bmFramingInfo = 0;
  VAR_14->bPreferedVersion = 0;
  VAR_14->bMinVersion = 0;
  VAR_14->bMaxVersion = 0;
 }





 FUNC_7(VAR_13, VAR_14);
 VAR_19 = 0;

out:
 FUNC_2(VAR_18);
 return VAR_19;
}
