
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int rx_scatter; struct efx_farch_filter_state* filter_state; } ;
struct efx_farch_filter_table {int* search_limit; TYPE_1__* spec; scalar_t__ size; } ;
struct efx_farch_filter_state {struct efx_farch_filter_table* table; } ;
typedef int efx_oword_t ;
struct TYPE_2__ {int dmaq_id; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_27)
{
 struct efx_farch_filter_state *VAR_28 = VAR_27->filter_state;
 struct efx_farch_filter_table *VAR_29;
 efx_oword_t VAR_30;

 FUNC_1(VAR_27, &VAR_30, VAR_26);

 VAR_29 = &VAR_28->table[VAR_7];
 FUNC_0(VAR_30, VAR_16,
       VAR_29->search_limit[VAR_9] +
       VAR_0);
 FUNC_0(VAR_30, VAR_17,
       VAR_29->search_limit[VAR_10] +
       VAR_1);
 FUNC_0(VAR_30, VAR_18,
       VAR_29->search_limit[VAR_11] +
       VAR_0);
 FUNC_0(VAR_30, VAR_19,
       VAR_29->search_limit[VAR_12] +
       VAR_1);

 VAR_29 = &VAR_28->table[VAR_8];
 if (VAR_29->size) {
  FUNC_0(
   VAR_30, VAR_20,
   VAR_29->search_limit[VAR_4] +
   VAR_0);
  FUNC_0(
   VAR_30, VAR_21,
   VAR_29->search_limit[VAR_5] +
   VAR_1);
 }

 VAR_29 = &VAR_28->table[VAR_6];
 if (VAR_29->size) {
  FUNC_0(
   VAR_30, VAR_24,
   VAR_29->spec[VAR_3].dmaq_id);
  FUNC_0(
   VAR_30, VAR_25,
   !!(VAR_29->spec[VAR_3].flags &
      VAR_13));
  FUNC_0(
   VAR_30, VAR_22,
   VAR_29->spec[VAR_2].dmaq_id);
  FUNC_0(
   VAR_30, VAR_23,
   !!(VAR_29->spec[VAR_2].flags &
      VAR_13));





  FUNC_0(
   VAR_30, VAR_15,
   !!(VAR_29->spec[VAR_3].flags &
      VAR_29->spec[VAR_2].flags &
      VAR_14));
 } else {





  FUNC_0(
   VAR_30, VAR_15,
   VAR_27->rx_scatter);
 }

 FUNC_2(VAR_27, &VAR_30, VAR_26);
}
