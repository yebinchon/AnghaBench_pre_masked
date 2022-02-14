
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorchannel {int dummy; } ;
struct visor_vbus_headerinfo {int dev_info_offset; unsigned int device_info_struct_bytes; } ;
struct visor_vbus_deviceinfo {int dummy; } ;
struct channel_header {int dummy; } ;


 int FUNC_0 (struct visorchannel*,int,struct visor_vbus_deviceinfo*,int) ;

__attribute__((used)) static void FUNC_1(struct visorchannel *VAR_0,
    struct visor_vbus_headerinfo *VAR_1,
    struct visor_vbus_deviceinfo *VAR_2,
    unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_1->dev_info_offset == 0)
  return;
 VAR_4 = (sizeof(struct channel_header) + VAR_1->dev_info_offset) +
       (VAR_1->device_info_struct_bytes * VAR_3);
 FUNC_0(VAR_0, VAR_4, VAR_2, sizeof(*VAR_2));
}
