
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dim_channel {scalar_t__ addr; } ;
struct async_tx_dbr {scalar_t__ ch_addr; int rest_size; scalar_t__ rpc; scalar_t__ wpc; scalar_t__* sz_queue; } ;
struct TYPE_2__ {struct async_tx_dbr atx_dbr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;

u16 FUNC_2(struct dim_channel *VAR_2)
{
 u16 VAR_3;
 struct async_tx_dbr *VAR_4 = &VAR_1.atx_dbr;

 if (VAR_2->addr != VAR_4->ch_addr)
  return 0xFFFF;

 VAR_3 = FUNC_0(VAR_2->addr);

 while (FUNC_1(VAR_4->rpc) != VAR_3) {
  VAR_4->rest_size += VAR_4->sz_queue[FUNC_1(VAR_4->rpc)];
  VAR_4->rpc++;
 }

 if ((u16)(VAR_4->wpc - VAR_4->rpc) >= VAR_0)
  return 0;

 return VAR_4->rest_size;
}
