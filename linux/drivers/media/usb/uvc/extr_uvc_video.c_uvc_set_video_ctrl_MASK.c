
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct uvc_streaming_control {scalar_t__ bMaxVersion; scalar_t__ bMinVersion; scalar_t__ bPreferedVersion; scalar_t__ bmFramingInfo; int dwClockFrequency; int dwMaxPayloadTransferSize; int dwMaxVideoFrameSize; int wDelay; int wCompWindowSize; int wCompQuality; int wPFrameRate; int wKeyFrameRate; int dwFrameInterval; scalar_t__ bFrameIndex; scalar_t__ bFormatIndex; int bmHint; } ;
struct uvc_streaming {int intfnum; int dev; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,char*,char*,int,int) ;
 int VAR_7 ;
 int FUNC_7 (struct uvc_streaming*) ;

__attribute__((used)) static int FUNC_8(struct uvc_streaming *VAR_8,
 struct uvc_streaming_control *VAR_9, int VAR_10)
{
 u16 VAR_11 = FUNC_7(VAR_8);
 u8 *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_11, VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 *(__le16 *)&VAR_12[0] = FUNC_1(VAR_9->bmHint);
 VAR_12[2] = VAR_9->bFormatIndex;
 VAR_12[3] = VAR_9->bFrameIndex;
 *(__le32 *)&VAR_12[4] = FUNC_2(VAR_9->dwFrameInterval);
 *(__le16 *)&VAR_12[8] = FUNC_1(VAR_9->wKeyFrameRate);
 *(__le16 *)&VAR_12[10] = FUNC_1(VAR_9->wPFrameRate);
 *(__le16 *)&VAR_12[12] = FUNC_1(VAR_9->wCompQuality);
 *(__le16 *)&VAR_12[14] = FUNC_1(VAR_9->wCompWindowSize);
 *(__le16 *)&VAR_12[16] = FUNC_1(VAR_9->wDelay);
 FUNC_5(VAR_9->dwMaxVideoFrameSize, &VAR_12[18]);
 FUNC_5(VAR_9->dwMaxPayloadTransferSize, &VAR_12[22]);

 if (VAR_11 >= 34) {
  FUNC_5(VAR_9->dwClockFrequency, &VAR_12[26]);
  VAR_12[30] = VAR_9->bmFramingInfo;
  VAR_12[31] = VAR_9->bPreferedVersion;
  VAR_12[32] = VAR_9->bMinVersion;
  VAR_12[33] = VAR_9->bMaxVersion;
 }

 VAR_13 = FUNC_0(VAR_8->dev, VAR_4, 0, VAR_8->intfnum,
  VAR_10 ? VAR_6 : VAR_5, VAR_12,
  VAR_11, VAR_7);
 if (VAR_13 != VAR_11) {
  FUNC_6(VAR_3, "Failed to set UVC %s control : "
   "%d (exp. %u).\n", VAR_10 ? "probe" : "commit",
   VAR_13, VAR_11);
  VAR_13 = -VAR_0;
 }

 FUNC_3(VAR_12);
 return VAR_13;
}
