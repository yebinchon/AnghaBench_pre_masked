
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {TYPE_1__* hw_params; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ tbuf_offset; } ;


 scalar_t__ FUNC_0 (struct bcmgenet_priv*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct bcmgenet_priv *VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2, VAR_3, VAR_1);
 else
  FUNC_2(VAR_3, VAR_2->base +
    VAR_2->hw_params->tbuf_offset + VAR_0);
}
