
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct il_queue {size_t write_ptr; } ;
struct il_tx_queue {scalar_t__ tfds; struct il_queue q; } ;
struct il_priv {int dummy; } ;
struct il3945_tfd {void* control_flags; TYPE_1__* tbs; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* len; void* addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct il3945_tfd*,int ,int) ;

int
FUNC_7(struct il_priv *VAR_2, struct il_tx_queue *VAR_3,
    dma_addr_t VAR_4, u16 VAR_5, u8 VAR_6, u8 VAR_7)
{
 int VAR_8;
 struct il_queue *VAR_9;
 struct il3945_tfd *VAR_10, *VAR_11;

 VAR_9 = &VAR_3->q;
 VAR_11 = (struct il3945_tfd *)VAR_3->tfds;
 VAR_10 = &VAR_11[VAR_9->write_ptr];

 if (VAR_6)
  FUNC_6(VAR_10, 0, sizeof(*VAR_10));

 VAR_8 = FUNC_1(FUNC_5(VAR_10->control_flags));

 if (VAR_8 >= VAR_1 || VAR_8 < 0) {
  FUNC_0("Error can not send more than %d chunks\n",
         VAR_1);
  return -VAR_0;
 }

 VAR_10->tbs[VAR_8].addr = FUNC_4(VAR_4);
 VAR_10->tbs[VAR_8].len = FUNC_4(VAR_5);

 VAR_8++;

 VAR_10->control_flags =
     FUNC_4(FUNC_2(VAR_8) | FUNC_3(VAR_7));

 return 0;
}
