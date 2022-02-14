
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {unsigned char device_identifier_code_set; char* device_identifier; size_t device_identifier_type; } ;


 int FUNC_0 (struct t10_vpd*,int *,int ) ;

int
FUNC_1(struct t10_vpd *VAR_0, unsigned char *VAR_1)
{
 static const char VAR_2[] = "0123456789abcdef";
 int VAR_3 = 0, VAR_4 = 4;






 VAR_0->device_identifier_code_set = (VAR_1[0] & 0x0f);
 switch (VAR_0->device_identifier_code_set) {
 case 0x01:
  VAR_0->device_identifier[VAR_3++] =
    VAR_2[VAR_0->device_identifier_type];
  while (VAR_4 < (4 + VAR_1[3])) {
   VAR_0->device_identifier[VAR_3++] =
    VAR_2[(VAR_1[VAR_4] & 0xf0) >> 4];
   VAR_0->device_identifier[VAR_3++] =
    VAR_2[VAR_1[VAR_4] & 0x0f];
   VAR_4++;
  }
  break;
 case 0x02:
 case 0x03:
  while (VAR_4 < (4 + VAR_1[3]))
   VAR_0->device_identifier[VAR_3++] = VAR_1[VAR_4++];
  break;
 default:
  break;
 }

 return FUNC_0(VAR_0, ((void*)0), 0);
}
