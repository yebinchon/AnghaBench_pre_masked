
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct rt_channel_info {int ChannelNum; void* ScanType; } ;
struct TYPE_5__ {int wireless_mode; } ;
struct adapter {TYPE_1__ registrypriv; } ;
struct TYPE_8__ {size_t Index2G; } ;
struct TYPE_7__ {size_t Len; int* Channel; } ;
struct TYPE_6__ {size_t Index2G; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rt_channel_info*,int ,int) ;

__attribute__((used)) static u8 FUNC_2(struct adapter *VAR_13, u8 VAR_14,
      struct rt_channel_info *VAR_15)
{
 u8 VAR_16, VAR_17 = 0;
 u8 VAR_18 = 0;
 u8 VAR_19 = 0;

 FUNC_1(VAR_15, 0, sizeof(struct rt_channel_info) * VAR_0);

 if (VAR_14 >= VAR_7 && VAR_14 != VAR_8) {
  FUNC_0("ChannelPlan ID %x error !!!!!\n", VAR_14);
  return VAR_17;
 }

 if (VAR_13->registrypriv.wireless_mode & VAR_12) {
  VAR_18 = 1;
  if (VAR_14 == VAR_8)
   VAR_19 = VAR_1.Index2G;
  else
   VAR_19 = VAR_3[VAR_14].Index2G;
 }

 if (VAR_18) {
  for (VAR_16 = 0; VAR_16 < VAR_2[VAR_19].Len; VAR_16++) {
   VAR_15[VAR_17].ChannelNum = VAR_2[VAR_19].Channel[VAR_16];

   if ((VAR_14 == VAR_5) ||
       (VAR_14 == VAR_6)) {
    if (VAR_15[VAR_17].ChannelNum >= 1 && VAR_15[VAR_17].ChannelNum <= 11)
     VAR_15[VAR_17].ScanType = VAR_10;
    else if ((VAR_15[VAR_17].ChannelNum >= 12 && VAR_15[VAR_17].ChannelNum <= 14))
     VAR_15[VAR_17].ScanType = VAR_11;
   } else if (VAR_14 == VAR_9 ||
       VAR_19 == VAR_4) {
    if (VAR_15[VAR_17].ChannelNum <= 11)
     VAR_15[VAR_17].ScanType = VAR_10;
    else
     VAR_15[VAR_17].ScanType = VAR_11;
   } else {
    VAR_15[VAR_17].ScanType = VAR_10;
   }

   VAR_17++;
  }
 }
 return VAR_17;
}
