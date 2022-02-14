
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_cfg_pad_mii_id {int txc_pd; int txc_bypass; int txc_delay; int txc_stable_ovr; int rxc_pd; int rxc_bypass; int rxc_delay; int rxc_stable_ovr; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int,int,int const,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct sja1105_cfg_pad_mii_id *VAR_2,
          enum packing_op VAR_3)
{
 const int VAR_4 = VAR_0;

 FUNC_0(VAR_1, &VAR_2->rxc_stable_ovr, 15, 15, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->rxc_delay, 14, 10, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->rxc_bypass, 9, 9, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->rxc_pd, 8, 8, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->txc_stable_ovr, 7, 7, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->txc_delay, 6, 2, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->txc_bypass, 1, 1, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_2->txc_pd, 0, 0, VAR_4, VAR_3);
}
