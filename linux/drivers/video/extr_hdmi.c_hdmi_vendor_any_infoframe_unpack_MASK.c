
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_vendor_infoframe {size_t length; int s3d_struct; int s3d_ext_data; int vic; } ;
union hdmi_vendor_any_infoframe {struct hdmi_vendor_infoframe hdmi; } ;
typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_0 (void const*,size_t) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*) ;

__attribute__((used)) static int
FUNC_2(union hdmi_vendor_any_infoframe *VAR_4,
     const void *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7 = VAR_5;
 size_t VAR_8;
 int VAR_9;
 u8 VAR_10;
 struct hdmi_vendor_infoframe *VAR_11 = &VAR_4->hdmi;

 if (VAR_6 < VAR_2)
  return -VAR_0;

 if (VAR_7[0] != VAR_3 ||
     VAR_7[1] != 1 ||
     (VAR_7[2] != 4 && VAR_7[2] != 5 && VAR_7[2] != 6))
  return -VAR_0;

 VAR_8 = VAR_7[2];

 if (VAR_6 < VAR_2 + VAR_8)
  return -VAR_0;

 if (FUNC_0(VAR_5,
        VAR_2 + VAR_8) != 0)
  return -VAR_0;

 VAR_7 += VAR_2;


 if ((VAR_7[0] != 0x03) ||
     (VAR_7[1] != 0x0c) ||
     (VAR_7[2] != 0x00))
  return -VAR_0;

 VAR_10 = VAR_7[3] >> 5;

 if (VAR_10 > 0x2)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_11);
 if (VAR_9)
  return VAR_9;

 VAR_11->length = VAR_8;

 if (VAR_10 == 0x2) {
  if (VAR_8 != 5 && VAR_8 != 6)
   return -VAR_0;
  VAR_11->s3d_struct = VAR_7[4] >> 4;
  if (VAR_11->s3d_struct >= VAR_1) {
   if (VAR_8 != 6)
    return -VAR_0;
   VAR_11->s3d_ext_data = VAR_7[5] >> 4;
  }
 } else if (VAR_10 == 0x1) {
  if (VAR_8 != 5)
   return -VAR_0;
  VAR_11->vic = VAR_7[4];
 } else {
  if (VAR_8 != 4)
   return -VAR_0;
 }

 return 0;
}
