
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlr_net_priv {int adapter; int ndev; int base_addr; TYPE_1__* nd; } ;
struct xlr_fmn_info {int start_stn_id; int end_stn_id; int* credit_config; } ;
struct TYPE_2__ {int* bucket_size; struct xlr_fmn_info* gmac_fmn_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct xlr_net_priv *VAR_9)
{
 struct xlr_fmn_info *VAR_10 = VAR_9->nd->gmac_fmn_info;
 int VAR_11 = VAR_10->start_stn_id;
 int VAR_12 = VAR_10->end_stn_id;
 int *VAR_13 = VAR_9->nd->bucket_size;
 int VAR_14, VAR_15, VAR_16;


 for (VAR_14 = VAR_11; VAR_14 <= VAR_12; VAR_14++) {
  FUNC_1(VAR_9->base_addr,
        VAR_6 + VAR_14 - VAR_11,
        VAR_13[VAR_14]);
 }





 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
   FUNC_1(VAR_9->base_addr,
         (VAR_0 + (VAR_14 * 8)) + VAR_15,
         VAR_10->credit_config[(VAR_14 * 8) + VAR_15]);
 }

 FUNC_1(VAR_9->base_addr, VAR_7, 3);
 FUNC_1(VAR_9->base_addr, VAR_1, 0xffffffff);
 FUNC_1(VAR_9->base_addr, VAR_2, 0xffffffff);
 FUNC_1(VAR_9->base_addr, VAR_3, 0xffffffff);
 FUNC_1(VAR_9->base_addr, VAR_4, 0xffffffff);
 FUNC_1(VAR_9->base_addr, VAR_5, 0);

 VAR_16 = FUNC_2(VAR_9->ndev);
 if (VAR_16)
  return VAR_16;
 FUNC_0(VAR_11, VAR_12, VAR_8,
     VAR_9->adapter);
 return 0;
}
