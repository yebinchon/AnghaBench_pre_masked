
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rx_indir_table; } ;
struct efx_nic {TYPE_1__ rss_context; } ;
typedef int efx_dword_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (struct efx_nic*,int *,scalar_t__) ;

void FUNC_4(struct efx_nic *VAR_4)
{
 size_t VAR_5 = 0;
 efx_dword_t VAR_6;

 FUNC_1(FUNC_0(VAR_4->rss_context.rx_indir_table) !=
       VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_2(VAR_6, VAR_0,
         VAR_4->rss_context.rx_indir_table[VAR_5]);
  FUNC_3(VAR_4, &VAR_6,
      VAR_1 +
      VAR_3 * VAR_5);
 }
}
