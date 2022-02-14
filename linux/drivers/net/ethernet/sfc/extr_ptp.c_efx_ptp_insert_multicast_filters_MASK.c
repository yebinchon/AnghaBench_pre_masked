
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {int rxfilter_installed; int rxfilter_event; int rxfilter_general; int channel; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;
struct efx_filter_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct efx_filter_spec*,int ,int ,int ) ;
 int FUNC_2 (struct efx_nic*,struct efx_filter_spec*,int) ;
 int FUNC_3 (struct efx_nic*,int ,int) ;
 int FUNC_4 (struct efx_filter_spec*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct efx_nic *VAR_5)
{
 struct efx_ptp_data *VAR_6 = VAR_5->ptp_data;
 struct efx_filter_spec VAR_7;
 int VAR_8;

 if (!VAR_6->channel || VAR_6->rxfilter_installed)
  return 0;




 FUNC_1(&VAR_7, VAR_0, 0,
      FUNC_5(
       FUNC_0(VAR_6->channel)));
 VAR_8 = FUNC_4(&VAR_7, VAR_1,
           FUNC_6(VAR_2),
           FUNC_7(VAR_3));
 if (VAR_8 != 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_5, &VAR_7, 1);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_6->rxfilter_event = VAR_8;

 FUNC_1(&VAR_7, VAR_0, 0,
      FUNC_5(
       FUNC_0(VAR_6->channel)));
 VAR_8 = FUNC_4(&VAR_7, VAR_1,
           FUNC_6(VAR_2),
           FUNC_7(VAR_4));
 if (VAR_8 != 0)
  goto fail;

 VAR_8 = FUNC_2(VAR_5, &VAR_7, 1);
 if (VAR_8 < 0)
  goto fail;
 VAR_6->rxfilter_general = VAR_8;

 VAR_6->rxfilter_installed = 1;
 return 0;

fail:
 FUNC_3(VAR_5, VAR_0,
      VAR_6->rxfilter_event);
 return VAR_8;
}
