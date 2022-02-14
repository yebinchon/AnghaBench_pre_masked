
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int flags; int ap; int* supported_rates; int tx_supp_rates; int tx_rate; int tx_max_rate; int tx_rate_idx; } ;
struct ap_data {int sta_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sta_info* FUNC_0 (struct ap_data*,int *) ;
 struct sta_info* FUNC_1 (struct ap_data*,int *) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ap_data *VAR_6, u8 *VAR_7)
{
 struct sta_info *VAR_8;
 int VAR_9 = 1;

 if (!VAR_6)
  return -1;

 FUNC_3(&VAR_6->sta_table_lock);
 VAR_8 = FUNC_1(VAR_6, VAR_7);
 if (VAR_8)
  VAR_9 = 0;
 FUNC_4(&VAR_6->sta_table_lock);

 if (VAR_9 == 1) {
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  if (!VAR_8)
   return -1;
  VAR_8->flags = VAR_5 | VAR_4;
  VAR_8->ap = 1;
  FUNC_2(VAR_8->supported_rates, 0, sizeof(VAR_8->supported_rates));



  VAR_8->supported_rates[0] = 0x82;
  VAR_8->supported_rates[1] = 0x84;
  VAR_8->supported_rates[2] = 0x0b;
  VAR_8->supported_rates[3] = 0x16;
  VAR_8->tx_supp_rates = VAR_1 | VAR_2 |
   VAR_3 | VAR_0;
  VAR_8->tx_rate = 110;
  VAR_8->tx_max_rate = VAR_8->tx_rate_idx = 3;
 }

 return VAR_9;
}
