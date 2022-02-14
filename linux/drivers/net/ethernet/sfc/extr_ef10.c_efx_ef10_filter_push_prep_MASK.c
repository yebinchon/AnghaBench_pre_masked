
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct efx_rss_context {scalar_t__ context_id; } ;
struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_filter_spec {int flags; scalar_t__ dmaq_id; } ;
struct efx_ef10_nic_data {scalar_t__ vport_id; } ;
typedef int efx_dword_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct efx_nic*,struct efx_filter_spec const*,int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_19,
          const struct efx_filter_spec *VAR_20,
          efx_dword_t *VAR_21, u64 VAR_22,
          struct efx_rss_context *VAR_23,
          bool VAR_24)
{
 struct efx_ef10_nic_data *VAR_25 = VAR_19->nic_data;
 u32 VAR_26 = VAR_20->flags;

 FUNC_4(VAR_21, 0, VAR_12);


 if (VAR_26 & VAR_1) {



  if (FUNC_2(!VAR_23))
   VAR_26 &= ~VAR_1;
  else if (FUNC_2(VAR_23->context_id == VAR_0))
   VAR_26 &= ~VAR_1;
 }

 if (VAR_24) {
  FUNC_0(VAR_21, VAR_4,
          VAR_13);
  FUNC_1(VAR_21, VAR_3, VAR_22);
 } else {
  FUNC_3(VAR_19, VAR_20, VAR_21);
 }

 FUNC_0(VAR_21, VAR_5, VAR_25->vport_id);
 FUNC_0(VAR_21, VAR_7,
         VAR_20->dmaq_id == VAR_2 ?
         VAR_14 :
         VAR_15);
 FUNC_0(VAR_21, VAR_11, 0);
 FUNC_0(VAR_21, VAR_10,
         VAR_18);
 FUNC_0(VAR_21, VAR_9,
         VAR_20->dmaq_id == VAR_2 ?
         0 : VAR_20->dmaq_id);
 FUNC_0(VAR_21, VAR_8,
         (VAR_26 & VAR_1) ?
         VAR_16 :
         VAR_17);
 if (VAR_26 & VAR_1)
  FUNC_0(VAR_21, VAR_6, VAR_23->context_id);
}
