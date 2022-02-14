
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; } ;
struct xgbe_prv_data {unsigned int tx_q_count; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct xgbe_prv_data*,unsigned int,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,unsigned int,int ,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (FUNC_0(VAR_5->hw_feat.version, VAR_2, VAR_4) < 0x21)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->tx_q_count; VAR_6++)
  FUNC_2(VAR_5, VAR_6, VAR_3, VAR_1, 1);


 for (VAR_6 = 0; VAR_6 < VAR_5->tx_q_count; VAR_6++) {
  VAR_7 = 2000;
  while (--VAR_7 && FUNC_1(VAR_5, VAR_6,
       VAR_3, VAR_1))
   FUNC_3(500, 600);

  if (!VAR_7)
   return -VAR_0;
 }

 return 0;
}
