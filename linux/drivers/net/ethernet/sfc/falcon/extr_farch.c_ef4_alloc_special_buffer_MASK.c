
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned int dma_addr; int addr; } ;
struct ef4_special_buffer {unsigned int entries; unsigned int index; TYPE_1__ buf; } ;
struct ef4_nic {unsigned int next_buffer_table; int net_dev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ef4_nic*,TYPE_1__*,unsigned int,int ) ;
 int FUNC_3 (struct ef4_nic*,int ,int ,char*,unsigned int,unsigned int,int ,unsigned int,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ef4_nic *VAR_4,
        struct ef4_special_buffer *VAR_5,
        unsigned int VAR_6)
{
 VAR_6 = FUNC_0(VAR_6, VAR_0);

 if (FUNC_2(VAR_4, &VAR_5->buf, VAR_6, VAR_2))
  return -VAR_1;
 VAR_5->entries = VAR_6 / VAR_0;
 FUNC_1(VAR_5->buf.dma_addr & (VAR_0 - 1));


 VAR_5->index = VAR_4->next_buffer_table;
 VAR_4->next_buffer_table += VAR_5->entries;

 FUNC_3(VAR_4, VAR_3, VAR_4->net_dev,
    "allocating special buffers %d-%d at %llx+%x "
    "(virt %p phys %llx)\n", VAR_5->index,
    VAR_5->index + VAR_5->entries - 1,
    (u64)VAR_5->buf.dma_addr, VAR_6,
    VAR_5->buf.addr, (u64)FUNC_4(VAR_5->buf.addr));

 return 0;
}
