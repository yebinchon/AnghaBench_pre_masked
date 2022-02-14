
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct TYPE_2__ {scalar_t__ rx_hash_key; } ;
struct efx_nic {TYPE_1__ rss_context; } ;
typedef int efx_oword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int FUNC_2 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_4)
{
 efx_oword_t VAR_5;





 FUNC_1(VAR_4, &VAR_5, VAR_1);
 FUNC_2(VAR_4->rss_context.rx_hash_key, &VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_4, &VAR_5, VAR_2);
 FUNC_2(VAR_4->rss_context.rx_hash_key + sizeof(VAR_5), &VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_4, &VAR_5, VAR_3);
 FUNC_2(VAR_4->rss_context.rx_hash_key + 2 * sizeof(VAR_5), &VAR_5,
        VAR_0 / 8);
 FUNC_0(VAR_4);
 return 0;
}
