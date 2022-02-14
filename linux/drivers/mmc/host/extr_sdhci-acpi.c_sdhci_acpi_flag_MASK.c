
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_acpi_host {TYPE_1__* slot; } ;
struct TYPE_2__ {unsigned int flags; } ;



__attribute__((used)) static inline bool FUNC_0(struct sdhci_acpi_host *VAR_0, unsigned int VAR_1)
{
 return VAR_0->slot && (VAR_0->slot->flags & VAR_1);
}
