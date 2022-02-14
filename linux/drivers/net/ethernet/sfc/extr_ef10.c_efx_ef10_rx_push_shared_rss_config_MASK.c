
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int rss_context; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int rx_rss_context_exclusive; } ;


 int FUNC_0 (struct efx_nic*,int,int *,unsigned int*) ;
 int FUNC_1 (struct efx_nic*,int *) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_0,
           unsigned *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_0->nic_data;
 int VAR_3 = FUNC_0(VAR_0, 0, &VAR_0->rss_context,
         VAR_1);

 if (VAR_3 != 0)
  return VAR_3;

 VAR_2->rx_rss_context_exclusive = 0;
 FUNC_1(VAR_0, &VAR_0->rss_context);
 return 0;
}
