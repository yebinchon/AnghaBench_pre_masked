
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_vendor_infoframe {size_t length; int type; int version; int s3d_struct; int s3d_ext_data; size_t vic; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (struct hdmi_vendor_infoframe const*) ;
 int FUNC_2 (void*,int ,size_t) ;

ssize_t FUNC_3(const struct hdmi_vendor_infoframe *VAR_4,
     void *VAR_5, size_t VAR_6)
{
 u8 *VAR_7 = VAR_5;
 size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_3 + VAR_4->length;

 if (VAR_6 < VAR_8)
  return -VAR_0;

 FUNC_2(VAR_5, 0, VAR_6);

 VAR_7[0] = VAR_4->type;
 VAR_7[1] = VAR_4->version;
 VAR_7[2] = VAR_4->length;
 VAR_7[3] = 0;


 VAR_7[4] = 0x03;
 VAR_7[5] = 0x0c;
 VAR_7[6] = 0x00;

 if (VAR_4->s3d_struct != VAR_1) {
  VAR_7[7] = 0x2 << 5;
  VAR_7[8] = (VAR_4->s3d_struct & 0xf) << 4;
  if (VAR_4->s3d_struct >= VAR_2)
   VAR_7[9] = (VAR_4->s3d_ext_data & 0xf) << 4;
 } else if (VAR_4->vic) {
  VAR_7[7] = 0x1 << 5;
  VAR_7[8] = VAR_4->vic;
 } else {
  VAR_7[7] = 0x0 << 5;
 }

 FUNC_0(VAR_5, VAR_8);

 return VAR_8;
}
