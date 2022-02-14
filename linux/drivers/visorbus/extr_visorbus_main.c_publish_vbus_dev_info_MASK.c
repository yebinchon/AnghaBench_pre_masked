
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct visor_vbus_headerinfo {int dummy; } ;
struct visor_vbus_deviceinfo {int dummy; } ;
struct visor_driver {int name; TYPE_2__* channel_types; } ;
struct TYPE_3__ {int driver; } ;
struct visor_device {int visorchannel; int channel_type_guid; TYPE_1__ device; scalar_t__ vbus_hdr_info; int chipset_dev_no; int chipset_bus_no; } ;
struct TYPE_4__ {char* name; int guid; } ;


 int VAR_0 ;
 int FUNC_0 (struct visor_vbus_deviceinfo*,char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 struct visor_driver* FUNC_2 (int ) ;
 struct visor_device* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,struct visor_vbus_headerinfo*,int *) ;
 int FUNC_5 (int ,struct visor_vbus_headerinfo*,int *) ;
 int FUNC_6 (int ,struct visor_vbus_headerinfo*,struct visor_vbus_deviceinfo*,int ) ;

__attribute__((used)) static void FUNC_7(struct visor_device *VAR_3)
{
 int VAR_4;
 struct visor_device *VAR_5;
 struct visor_driver *VAR_6;
 u32 VAR_7 = VAR_3->chipset_bus_no;
 u32 VAR_8 = VAR_3->chipset_dev_no;
 struct visor_vbus_deviceinfo VAR_9;
 const char *VAR_10 = ((void*)0);
 struct visor_vbus_headerinfo *VAR_11;

 if (!VAR_3->device.driver)
  return;
 VAR_5 = FUNC_3(VAR_7, VAR_0, ((void*)0));
 if (!VAR_5)
  return;
 VAR_11 = (struct visor_vbus_headerinfo *)VAR_5->vbus_hdr_info;
 if (!VAR_11)
  return;
 VAR_6 = FUNC_2(VAR_3->device.driver);







 for (VAR_4 = 0; VAR_6->channel_types[VAR_4].name; VAR_4++) {
  if (FUNC_1(&VAR_6->channel_types[VAR_4].guid,
          &VAR_3->channel_type_guid)) {
   VAR_10 = VAR_6->channel_types[VAR_4].name;
   break;
  }
 }
 FUNC_0(&VAR_9, VAR_10, VAR_6->name);
 FUNC_6(VAR_5->visorchannel, VAR_11, &VAR_9, VAR_8);
 FUNC_5(VAR_5->visorchannel, VAR_11, &VAR_1);
 FUNC_4(VAR_5->visorchannel, VAR_11,
       &VAR_2);
}
