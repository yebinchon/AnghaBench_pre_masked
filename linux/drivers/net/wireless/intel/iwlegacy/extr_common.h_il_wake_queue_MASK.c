
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_tx_queue {int swq_id; } ;
struct il_priv {int queue_stopped; } ;


 int FUNC_0 (struct il_priv*,int) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct il_priv *VAR_0, struct il_tx_queue *VAR_1)
{
 u8 VAR_2 = VAR_1->swq_id;
 u8 VAR_3 = VAR_2 & 3;
 u8 VAR_4 = (VAR_2 >> 2) & 0x1f;

 if (FUNC_1(VAR_4, VAR_0->queue_stopped))
  FUNC_0(VAR_0, VAR_3);
}
