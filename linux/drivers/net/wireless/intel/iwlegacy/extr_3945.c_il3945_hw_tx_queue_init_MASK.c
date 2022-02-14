
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int id; scalar_t__ dma_addr; } ;
struct il_tx_queue {TYPE_1__ q; } ;
struct TYPE_4__ {struct il3945_shared* shared_virt; } ;
struct il_priv {TYPE_2__ _3945; } ;
struct il3945_shared {int * tx_base_ptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct il_priv*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct il_priv*,int ,int) ;

int
FUNC_6(struct il_priv *VAR_6, struct il_tx_queue *VAR_7)
{
 int VAR_8 = VAR_7->q.id;

 struct il3945_shared *VAR_9 = VAR_6->_3945.shared_virt;

 VAR_9->tx_base_ptr[VAR_8] = FUNC_4((u32) VAR_7->q.dma_addr);

 FUNC_5(VAR_6, FUNC_1(VAR_8), 0);
 FUNC_5(VAR_6, FUNC_0(VAR_8), 0);

 FUNC_5(VAR_6, FUNC_2(VAR_8),
       VAR_1 |
       VAR_4 |
       VAR_0 |
       VAR_3 |
       VAR_2);


 FUNC_3(VAR_6, VAR_5);

 return 0;
}
