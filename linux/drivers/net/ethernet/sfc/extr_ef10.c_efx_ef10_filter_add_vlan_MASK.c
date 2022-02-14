
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct efx_nic {int net_dev; int filter_sem; struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_vlan {int list; void** default_filters; void** mc; void** uc; int vid; } ;
struct efx_ef10_filter_table {int vlan_list; } ;


 unsigned int FUNC_0 (void**) ;
 int VAR_0 ;
 void* VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct efx_ef10_filter_vlan*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 struct efx_ef10_filter_vlan* FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*,struct efx_ef10_filter_vlan*) ;
 int FUNC_5 (int *) ;
 struct efx_ef10_filter_vlan* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_7, u16 VAR_8)
{
 struct efx_ef10_filter_table *VAR_9 = VAR_7->filter_state;
 struct efx_ef10_filter_vlan *VAR_10;
 unsigned int VAR_11;

 if (!FUNC_5(&VAR_7->filter_sem))
  return -VAR_3;

 VAR_10 = FUNC_3(VAR_7, VAR_8);
 if (FUNC_1(VAR_10)) {
  FUNC_8(VAR_7, VAR_6, VAR_7->net_dev,
     "VLAN %u already added\n", VAR_8);
  return -VAR_0;
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_10->vid = VAR_8;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10->uc); VAR_11++)
  VAR_10->uc[VAR_11] = VAR_1;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10->mc); VAR_11++)
  VAR_10->mc[VAR_11] = VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_10->default_filters[VAR_11] = VAR_1;

 FUNC_7(&VAR_10->list, &VAR_9->vlan_list);

 if (FUNC_2(VAR_7))
  FUNC_4(VAR_7, VAR_10);

 return 0;
}
