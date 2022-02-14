
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rx_queue {int bd_dma; int rb_stts_dma; } ;
struct il_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct il_priv*,int ) ;
 int FUNC_5 (struct il_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_10, struct il_rx_queue *VAR_11)
{
 FUNC_5(VAR_10, FUNC_1(0), VAR_11->bd_dma);
 FUNC_5(VAR_10, FUNC_2(0), VAR_11->rb_stts_dma);
 FUNC_5(VAR_10, FUNC_3(0), 0);
 FUNC_5(VAR_10, FUNC_0(0),
       VAR_3 |
       VAR_7 |
       VAR_0 |
       VAR_5 | (VAR_9
              <<
              VAR_2)
       | VAR_4 | (1 <<
         VAR_1)
       | VAR_6);


 FUNC_4(VAR_10, VAR_8);

 return 0;
}
