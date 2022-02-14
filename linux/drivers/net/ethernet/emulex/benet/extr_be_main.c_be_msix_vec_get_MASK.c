
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_eq_obj {size_t msix_idx; } ;
struct be_adapter {TYPE_1__* msix_entries; } ;
struct TYPE_2__ {int vector; } ;



__attribute__((used)) static inline int FUNC_0(struct be_adapter *VAR_0,
      struct be_eq_obj *VAR_1)
{
 return VAR_0->msix_entries[VAR_1->msix_idx].vector;
}
