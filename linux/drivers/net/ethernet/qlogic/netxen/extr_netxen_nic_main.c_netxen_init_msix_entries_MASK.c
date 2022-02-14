
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netxen_adapter {TYPE_1__* msix_entries; } ;
struct TYPE_2__ {int entry; } ;



__attribute__((used)) static void FUNC_0(struct netxen_adapter *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_0->msix_entries[VAR_2].entry = VAR_2;
}
