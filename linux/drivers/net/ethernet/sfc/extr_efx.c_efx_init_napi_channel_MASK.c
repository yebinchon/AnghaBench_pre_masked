
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;
struct efx_channel {int napi_str; int napi_dev; struct efx_nic* efx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct efx_channel *VAR_2)
{
 struct efx_nic *VAR_3 = VAR_2->efx;

 VAR_2->napi_dev = VAR_3->net_dev;
 FUNC_0(VAR_2->napi_dev, &VAR_2->napi_str,
         VAR_0, VAR_1);
}
