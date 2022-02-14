
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorchannel {int dummy; } ;
struct visor_vbus_headerinfo {int chp_info_offset; } ;
struct visor_vbus_deviceinfo {int dummy; } ;
struct channel_header {int dummy; } ;


 int FUNC_0 (struct visorchannel*,int,struct visor_vbus_deviceinfo*,int) ;

__attribute__((used)) static void FUNC_1(struct visorchannel *VAR_0,
    struct visor_vbus_headerinfo *VAR_1,
    struct visor_vbus_deviceinfo *VAR_2)
{
 int VAR_3;

 if (VAR_1->chp_info_offset == 0)
  return;

 VAR_3 = sizeof(struct channel_header) + VAR_1->chp_info_offset;
 FUNC_0(VAR_0, VAR_3, VAR_2, sizeof(*VAR_2));
}
