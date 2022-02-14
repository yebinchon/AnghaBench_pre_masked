
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct cdrom_device_info*,void*) ;
 int FUNC_1 (struct cdrom_device_info*,void*) ;
 int FUNC_2 (struct cdrom_device_info*,void*) ;

int FUNC_3(struct cdrom_device_info *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 switch (VAR_2) {
 case 128:
  return FUNC_2(VAR_1, VAR_3);
 case 129:
  return FUNC_1(VAR_1, VAR_3);
 case 130:
  return FUNC_0(VAR_1, VAR_3);
 default:
  return -VAR_0;
 }
}
