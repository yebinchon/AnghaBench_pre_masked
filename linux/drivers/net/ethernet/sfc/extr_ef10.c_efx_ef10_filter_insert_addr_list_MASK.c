
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct efx_nic {int net_dev; int rss_context; struct efx_ef10_filter_table* filter_state; } ;
struct efx_filter_spec {int dummy; } ;
struct efx_ef10_filter_vlan {scalar_t__* default_filters; int vid; scalar_t__* uc; scalar_t__* mc; } ;
struct efx_ef10_filter_table {int dev_mc_count; int dev_uc_count; struct efx_ef10_dev_addr* dev_uc_list; struct efx_ef10_dev_addr* dev_mc_list; } ;
struct efx_ef10_dev_addr {int * addr; } ;
typedef enum efx_filter_flags { ____Placeholder_efx_filter_flags } efx_filter_flags ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct efx_nic*,struct efx_filter_spec*,int) ;
 int FUNC_3 (struct efx_nic*,int ,scalar_t__) ;
 int FUNC_4 (struct efx_filter_spec*,int ,int,int ) ;
 int FUNC_5 (struct efx_filter_spec*,int ,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_10(struct efx_nic *VAR_6,
         struct efx_ef10_filter_vlan *VAR_7,
         bool VAR_8, bool VAR_9)
{
 struct efx_ef10_filter_table *VAR_10 = VAR_6->filter_state;
 struct efx_ef10_dev_addr *VAR_11;
 enum efx_filter_flags VAR_12;
 struct efx_filter_spec VAR_13;
 u8 VAR_14[VAR_4];
 unsigned int VAR_15, VAR_16;
 int VAR_17;
 u16 *VAR_18;
 int VAR_19;

 if (VAR_8) {
  VAR_11 = VAR_10->dev_mc_list;
  VAR_17 = VAR_10->dev_mc_count;
  VAR_18 = VAR_7->mc;
 } else {
  VAR_11 = VAR_10->dev_uc_list;
  VAR_17 = VAR_10->dev_uc_count;
  VAR_18 = VAR_7->uc;
 }

 VAR_12 = FUNC_6(&VAR_6->rss_context) ? VAR_2 : 0;


 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  FUNC_0(VAR_18[VAR_15] != VAR_1);
  FUNC_4(&VAR_13, VAR_3, VAR_12, 0);
  FUNC_5(&VAR_13, VAR_7->vid, VAR_11[VAR_15].addr);
  VAR_19 = FUNC_2(VAR_6, &VAR_13, 1);
  if (VAR_19 < 0) {
   if (VAR_9) {
    FUNC_8(VAR_6, VAR_5, VAR_6->net_dev,
        "efx_ef10_filter_insert failed rc=%d\n",
        VAR_19);

    for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
     FUNC_3(
      VAR_6, VAR_3,
      VAR_18[VAR_16]);
     VAR_18[VAR_16] = VAR_1;
    }
    return VAR_19;
   } else {

   }
  } else {
   VAR_18[VAR_15] = FUNC_1(VAR_19);
  }
 }

 if (VAR_8 && VAR_9) {

  FUNC_0(VAR_7->default_filters[VAR_0] !=
         VAR_1);
  FUNC_4(&VAR_13, VAR_3, VAR_12, 0);
  FUNC_7(VAR_14);
  FUNC_5(&VAR_13, VAR_7->vid, VAR_14);
  VAR_19 = FUNC_2(VAR_6, &VAR_13, 1);
  if (VAR_19 < 0) {
   FUNC_9(VAR_6, VAR_5, VAR_6->net_dev,
       "Broadcast filter insert failed rc=%d\n", VAR_19);

   for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
    FUNC_3(
     VAR_6, VAR_3,
     VAR_18[VAR_16]);
    VAR_18[VAR_16] = VAR_1;
   }
   return VAR_19;
  } else {
   VAR_7->default_filters[VAR_0] =
    FUNC_1(VAR_19);
  }
 }

 return 0;
}
