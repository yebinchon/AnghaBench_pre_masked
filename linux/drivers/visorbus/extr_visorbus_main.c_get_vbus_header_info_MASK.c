
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorchannel {int dummy; } ;
struct visor_vbus_headerinfo {int struct_bytes; int device_info_struct_bytes; } ;
struct visor_vbus_deviceinfo {int dummy; } ;
struct visor_vbus_channel {int dummy; } ;
struct device {int dummy; } ;
struct channel_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct device*,int *,char*,int,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct visorchannel*) ;
 int FUNC_2 (struct visorchannel*,int,struct visor_vbus_headerinfo*,int) ;

__attribute__((used)) static int FUNC_3(struct visorchannel *VAR_4,
    struct device *VAR_5,
    struct visor_vbus_headerinfo *VAR_6)
{
 int VAR_7;

 if (!FUNC_0(FUNC_1(VAR_4),
     VAR_5,
     &VAR_3,
     "vbus",
     sizeof(struct visor_vbus_channel),
     VAR_2,
     VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4, sizeof(struct channel_header), VAR_6,
    sizeof(*VAR_6));
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_6->struct_bytes < sizeof(struct visor_vbus_headerinfo))
  return -VAR_0;
 if (VAR_6->device_info_struct_bytes <
     sizeof(struct visor_vbus_deviceinfo))
  return -VAR_0;
 return 0;
}
