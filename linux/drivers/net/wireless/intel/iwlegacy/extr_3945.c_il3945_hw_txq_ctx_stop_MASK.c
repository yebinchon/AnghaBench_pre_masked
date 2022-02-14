
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_txq_num; } ;
struct il_priv {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_3 (struct il_priv*,int ,int) ;
 int FUNC_4 (struct il_priv*,int ,int ) ;

void
FUNC_5(struct il_priv *VAR_3)
{
 int VAR_4;


 FUNC_4(VAR_3, VAR_0, 0);
 FUNC_4(VAR_3, VAR_1, 0);


 for (VAR_4 = 0; VAR_4 < VAR_3->hw_params.max_txq_num; VAR_4++) {
  FUNC_3(VAR_3, FUNC_0(VAR_4), 0x0);
  FUNC_2(VAR_3, VAR_2,
        FUNC_1(VAR_4),
        FUNC_1(VAR_4),
        1000);
 }
}
