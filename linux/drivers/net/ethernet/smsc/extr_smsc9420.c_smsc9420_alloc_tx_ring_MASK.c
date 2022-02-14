
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smsc9420_ring_info {int dummy; } ;
struct smsc9420_pdata {int tx_dma_addr; scalar_t__ tx_ring_tail; scalar_t__ tx_ring_head; TYPE_1__* tx_ring; TYPE_2__* tx_buffers; } ;
struct TYPE_4__ {scalar_t__ mapping; int * skb; } ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ buffer2; scalar_t__ buffer1; scalar_t__ status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct smsc9420_pdata*) ;
 int FUNC_3 (struct smsc9420_pdata*,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct smsc9420_pdata *VAR_5)
{
 int VAR_6;

 FUNC_0(!VAR_5->tx_ring);

 VAR_5->tx_buffers = FUNC_1(VAR_4,
           sizeof(struct smsc9420_ring_info),
           VAR_1);
 if (!VAR_5->tx_buffers)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5->tx_buffers[VAR_6].skb = ((void*)0);
  VAR_5->tx_buffers[VAR_6].mapping = 0;
  VAR_5->tx_ring[VAR_6].status = 0;
  VAR_5->tx_ring[VAR_6].length = 0;
  VAR_5->tx_ring[VAR_6].buffer1 = 0;
  VAR_5->tx_ring[VAR_6].buffer2 = 0;
 }
 VAR_5->tx_ring[VAR_4 - 1].length = VAR_2;
 FUNC_4();

 VAR_5->tx_ring_head = 0;
 VAR_5->tx_ring_tail = 0;

 FUNC_3(VAR_5, VAR_3, VAR_5->tx_dma_addr);
 FUNC_2(VAR_5);

 return 0;
}
