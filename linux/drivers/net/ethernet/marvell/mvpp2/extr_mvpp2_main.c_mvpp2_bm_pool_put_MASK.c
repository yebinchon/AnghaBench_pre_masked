
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_port {int * bm_lock; TYPE_1__* priv; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {scalar_t__ hw_version; int lock_map; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,unsigned int,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned int,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static inline void FUNC_9(struct mvpp2_port *VAR_6, int VAR_7,
         dma_addr_t VAR_8,
         phys_addr_t VAR_9)
{
 unsigned int VAR_10 = FUNC_2(VAR_6->priv, FUNC_1());
 unsigned long VAR_11 = 0;

 if (FUNC_7(VAR_10, &VAR_6->priv->lock_map))
  FUNC_5(&VAR_6->bm_lock[VAR_10], VAR_11);

 if (VAR_6->priv->hw_version == VAR_0) {
  u32 VAR_12 = 0;

  if (sizeof(dma_addr_t) == 8)
   VAR_12 |= FUNC_8(VAR_8) &
    VAR_1;

  if (sizeof(phys_addr_t) == 8)
   VAR_12 |= (FUNC_8(VAR_9)
    << VAR_4) &
    VAR_3;

  FUNC_3(VAR_6->priv, VAR_10,
        VAR_2, VAR_12);
 }






 FUNC_3(VAR_6->priv, VAR_10,
       VAR_5, VAR_9);
 FUNC_3(VAR_6->priv, VAR_10,
       FUNC_0(VAR_7), VAR_8);

 if (FUNC_7(VAR_10, &VAR_6->priv->lock_map))
  FUNC_6(&VAR_6->bm_lock[VAR_10], VAR_11);

 FUNC_4();
}
