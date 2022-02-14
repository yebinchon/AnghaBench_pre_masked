
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {int blocks_in_rx_queue; struct r3964_block_header* rx_first; int lock; struct r3964_block_header* rx_last; } ;
struct r3964_block_header {int length; struct r3964_block_header* next; } ;


 int FUNC_0 (char*,struct r3964_block_header*,int ,struct r3964_block_header*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct r3964_info *VAR_0,
    struct r3964_block_header *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);

 VAR_1->next = ((void*)0);

 if (VAR_0->rx_last == ((void*)0)) {
  VAR_0->rx_first = VAR_0->rx_last = VAR_1;
 } else {
  VAR_0->rx_last->next = VAR_1;
  VAR_0->rx_last = VAR_1;
 }
 VAR_0->blocks_in_rx_queue++;

 FUNC_2(&VAR_0->lock, VAR_2);

 FUNC_0("add_rx_queue: %p, length = %d, rx_first = %p, count = %d",
  VAR_1, VAR_1->length,
  VAR_0->rx_first, VAR_0->blocks_in_rx_queue);
}
