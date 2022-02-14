
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwifiex_private {int data_rate; int tx_htinfo; int tx_rate; scalar_t__ is_data_rate_auto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_private*,int ,int ) ;
 int FUNC_1 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

int FUNC_2(struct mwifiex_private *VAR_2, u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
          VAR_0, 0, ((void*)0), 1);

 if (!VAR_4) {
  if (VAR_2->is_data_rate_auto)
   *VAR_3 = FUNC_0(VAR_2, VAR_2->tx_rate,
          VAR_2->tx_htinfo);
  else
   *VAR_3 = VAR_2->data_rate;
 }

 return VAR_4;
}
