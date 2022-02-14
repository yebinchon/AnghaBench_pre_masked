
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_bus {TYPE_1__* host_pci; } ;
struct ssb_boardinfo {int type; int vendor; } ;
struct TYPE_2__ {int subsystem_device; int subsystem_vendor; } ;



__attribute__((used)) static void FUNC_0(struct ssb_bus *VAR_0,
      struct ssb_boardinfo *VAR_1)
{
 VAR_1->vendor = VAR_0->host_pci->subsystem_vendor;
 VAR_1->type = VAR_0->host_pci->subsystem_device;
}
