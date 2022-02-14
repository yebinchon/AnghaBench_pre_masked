
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_pci_info {scalar_t__ (* translate ) (struct map_pci_info*,unsigned long) ;scalar_t__ base; } ;
struct map_info {int dummy; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct map_pci_info*,unsigned long) ;

__attribute__((used)) static map_word FUNC_2(struct map_info *VAR_0, unsigned long VAR_1)
{
 struct map_pci_info *VAR_2 = (struct map_pci_info *)VAR_0;
 map_word VAR_3;
 VAR_3.x[0]= FUNC_0(VAR_2->base + VAR_2->translate(VAR_2, VAR_1));
 return VAR_3;
}
