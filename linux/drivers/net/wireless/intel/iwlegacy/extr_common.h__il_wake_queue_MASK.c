
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct il_priv {int hw; int * queue_stop_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static inline void
FUNC_2(struct il_priv *VAR_0, u8 VAR_1)
{
 if (FUNC_0(&VAR_0->queue_stop_count[VAR_1]) <= 0)
  FUNC_1(VAR_0->hw, VAR_1);
}
