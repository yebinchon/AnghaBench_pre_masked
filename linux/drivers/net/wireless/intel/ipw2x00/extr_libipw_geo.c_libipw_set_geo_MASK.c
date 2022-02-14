
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libipw_geo {int bg_channels; int a_channels; int a; int bg; int name; } ;
struct TYPE_2__ {char* name; int bg_channels; int a_channels; char* bg; char* a; } ;
struct libipw_device {TYPE_1__ geo; } ;
struct libipw_channel {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;

void FUNC_1(struct libipw_device *VAR_0,
        const struct libipw_geo *VAR_1)
{
 FUNC_0(VAR_0->geo.name, VAR_1->name, 3);
 VAR_0->geo.name[3] = '\0';
 VAR_0->geo.bg_channels = VAR_1->bg_channels;
 VAR_0->geo.a_channels = VAR_1->a_channels;
 FUNC_0(VAR_0->geo.bg, VAR_1->bg, VAR_1->bg_channels *
        sizeof(struct libipw_channel));
 FUNC_0(VAR_0->geo.a, VAR_1->a, VAR_0->geo.a_channels *
        sizeof(struct libipw_channel));
}
