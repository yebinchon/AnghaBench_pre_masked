
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_i2c_image_header {int Length; } ;
struct ti_i2c_firmware_rec {int Ver_Minor; int Ver_Major; } ;
struct ti_i2c_desc {scalar_t__ CheckSum; int Size; int Type; scalar_t__ Data; } ;
struct firmware {int * data; } ;
struct edgeport_fw_hdr {int minor_version; int major_version; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int *,int ) ;
 int FUNC_5 (scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_6(u8 *VAR_3, const struct firmware *VAR_4)
{
 __u8 *VAR_5;
 int VAR_6;
 int VAR_7;
 __u8 VAR_8 = 0;
 struct ti_i2c_desc *VAR_9;
 struct ti_i2c_image_header *VAR_10;
 struct ti_i2c_firmware_rec *VAR_11;
 struct edgeport_fw_hdr *VAR_12 = (struct edgeport_fw_hdr *)VAR_4->data;
 VAR_6 = (((1024 * 16) - 512 ) +
   sizeof(struct ti_i2c_firmware_rec));

 VAR_5 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_5)
  return -VAR_0;


 FUNC_5(VAR_5, 0xff, VAR_6);


 VAR_11 = (struct ti_i2c_firmware_rec *)VAR_5;

 VAR_11->Ver_Major = VAR_12->major_version;
 VAR_11->Ver_Minor = VAR_12->minor_version;


 VAR_10 = (struct ti_i2c_image_header *)&VAR_4->data[4];

 FUNC_4(VAR_5 + sizeof(struct ti_i2c_firmware_rec),
  &VAR_4->data[4 + sizeof(struct ti_i2c_image_header)],
  FUNC_3(VAR_10->Length));

 for (VAR_7=0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = (__u8)(VAR_8 + VAR_5[VAR_7]);
 }

 FUNC_1(VAR_5);


 VAR_9 = (struct ti_i2c_desc *)VAR_3;
 VAR_11 = (struct ti_i2c_firmware_rec*)VAR_9->Data;

 VAR_9->Type = VAR_2;
 VAR_9->Size = FUNC_0(VAR_6);
 VAR_9->CheckSum = VAR_8;
 VAR_11->Ver_Major = VAR_12->major_version;
 VAR_11->Ver_Minor = VAR_12->minor_version;

 return 0;
}
