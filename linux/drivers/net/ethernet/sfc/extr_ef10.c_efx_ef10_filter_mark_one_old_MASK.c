
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct efx_nic {int net_dev; struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_table {TYPE_1__* entry; int lock; } ;
struct TYPE_2__ {int spec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_3, uint16_t *VAR_4)
{
 struct efx_ef10_filter_table *VAR_5 = VAR_3->filter_state;
 unsigned int VAR_6;

 FUNC_1(&VAR_5->lock);

 if (*VAR_4 != VAR_1) {
  VAR_6 = FUNC_0(*VAR_4);
  if (!VAR_5->entry[VAR_6].spec)
   FUNC_2(VAR_3, VAR_2, VAR_3->net_dev,
      "marked null spec old %04x:%04x\n", *VAR_4,
      VAR_6);
  VAR_5->entry[VAR_6].spec |= VAR_0;
  *VAR_4 = VAR_1;
 }
}
