
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_pci_info {scalar_t__ (* translate ) (struct map_pci_info*,unsigned long) ;scalar_t__ base; } ;
struct map_info {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (void*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct map_pci_info*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, void *VAR_1, unsigned long VAR_2, ssize_t VAR_3)
{
 struct map_pci_info *VAR_4 = (struct map_pci_info *)VAR_0;
 FUNC_0(VAR_1, VAR_4->base + VAR_4->translate(VAR_4, VAR_2), VAR_3);
}
