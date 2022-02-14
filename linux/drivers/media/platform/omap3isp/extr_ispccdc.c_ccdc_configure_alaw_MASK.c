
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isp_format_info {int width; } ;
struct isp_device {int dummy; } ;
struct isp_ccdc_device {scalar_t__ alaw; TYPE_1__* formats; } ;
struct TYPE_2__ {int code; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 struct isp_format_info* FUNC_1 (int ) ;
 struct isp_device* FUNC_2 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_ccdc_device *VAR_8)
{
 struct isp_device *VAR_9 = FUNC_2(VAR_8);
 const struct isp_format_info *VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = FUNC_1(VAR_8->formats[VAR_0].code);

 switch (VAR_10->width) {
 case 8:
  return;

 case 10:
  VAR_11 = VAR_6;
  break;
 case 11:
  VAR_11 = VAR_3;
  break;
 case 12:
  VAR_11 = VAR_4;
  break;
 case 13:
  VAR_11 = VAR_5;
  break;
 }

 if (VAR_8->alaw)
  VAR_11 |= VAR_2;

 FUNC_0(VAR_9, VAR_11, VAR_7, VAR_1);
}
