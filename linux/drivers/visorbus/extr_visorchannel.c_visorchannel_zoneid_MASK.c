
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zone_guid; } ;
struct visorchannel {TYPE_1__ chan_hdr; } ;


 char* FUNC_0 (int *,char*) ;

char *FUNC_1(struct visorchannel *VAR_0, char *VAR_1)
{
 return FUNC_0(&VAR_0->chan_hdr.zone_guid, VAR_1);
}
