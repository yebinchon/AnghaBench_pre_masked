
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct net_device {int name; } ;
struct de4x5_private {scalar_t__ chipset; int useSROM; scalar_t__ device; int infoleaf_offset; int srom; int infoleaf_fn; } ;
struct TYPE_2__ {scalar_t__ chipset; int fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 TYPE_1__* VAR_2 ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_3)
{
    struct de4x5_private *VAR_4 = FUNC_1(VAR_3);
    int VAR_5, VAR_6;
    u_char *VAR_7;


    for (VAR_5=0; VAR_5<VAR_1; VAR_5++) {
 if (VAR_4->chipset == VAR_2[VAR_5].chipset) break;
    }
    if (VAR_5 == VAR_1) {
 VAR_4->useSROM = 0;
 FUNC_2("%s: Cannot find correct chipset for SROM decoding!\n",
                                                           VAR_3->name);
 return -VAR_0;
    }

    VAR_4->infoleaf_fn = VAR_2[VAR_5].fn;


    VAR_6 = *((u_char *)&VAR_4->srom + 19);
    VAR_7 = (u_char *)&VAR_4->srom + 26;

    if (VAR_6 > 1) {
 for (VAR_5=VAR_6; VAR_5; --VAR_5, VAR_7+=3) {
     if (VAR_4->device == *VAR_7) break;
 }
 if (VAR_5 == 0) {
     VAR_4->useSROM = 0;
     FUNC_2("%s: Cannot find correct PCI device [%d] for SROM decoding!\n",
                                                VAR_3->name, VAR_4->device);
     return -VAR_0;
 }
    }

 VAR_4->infoleaf_offset = FUNC_0(VAR_7 + 1);

    return 0;
}
