
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; int device; int class_revision; int intpin; void* pref_mem_limit; void* pref_mem_base; void* iolimit; void* iobase; } ;
struct pci_bridge_emul {int has_pcie; int * ops; struct advk_pcie* data; TYPE_1__ conf; } ;
struct advk_pcie {struct pci_bridge_emul bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct advk_pcie*,int ) ;
 int FUNC_1 (struct pci_bridge_emul*,int ) ;

__attribute__((used)) static void FUNC_2(struct advk_pcie *VAR_6)
{
 struct pci_bridge_emul *VAR_7 = &VAR_6->bridge;

 VAR_7->conf.vendor = FUNC_0(VAR_6, VAR_0) & 0xffff;
 VAR_7->conf.device = FUNC_0(VAR_6, VAR_0) >> 16;
 VAR_7->conf.class_revision =
  FUNC_0(VAR_6, VAR_1) & 0xff;


 VAR_7->conf.iobase = VAR_3;
 VAR_7->conf.iolimit = VAR_3;


 VAR_7->conf.pref_mem_base = VAR_4;
 VAR_7->conf.pref_mem_limit = VAR_4;


 VAR_7->conf.intpin = VAR_2;

 VAR_7->has_pcie = 1;
 VAR_7->data = VAR_6;
 VAR_7->ops = &VAR_5;

 FUNC_1(VAR_7, 0);

}
