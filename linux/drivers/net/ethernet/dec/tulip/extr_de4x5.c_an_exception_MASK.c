
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {scalar_t__ sub_system_id; scalar_t__ sub_vendor_id; } ;
struct de4x5_private {TYPE_1__ srom; } ;



__attribute__((used)) static int
FUNC_0(struct de4x5_private *VAR_0)
{
    if ((*(u_short *)VAR_0->srom.sub_vendor_id == 0x00c0) &&
 (*(u_short *)VAR_0->srom.sub_system_id == 0x95e0)) {
 return -1;
    }

    return 0;
}
