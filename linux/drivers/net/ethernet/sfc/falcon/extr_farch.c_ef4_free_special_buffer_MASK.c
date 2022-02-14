
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int addr; int len; scalar_t__ dma_addr; } ;
struct ef4_special_buffer {scalar_t__ entries; TYPE_1__ buf; scalar_t__ index; } ;
struct ef4_nic {int net_dev; } ;


 int FUNC_0 (struct ef4_nic*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct ef4_nic*,int ,int ,char*,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ef4_nic *VAR_1, struct ef4_special_buffer *VAR_2)
{
 if (!VAR_2->buf.addr)
  return;

 FUNC_1(VAR_1, VAR_0, VAR_1->net_dev,
    "deallocating special buffers %d-%d at %llx+%x "
    "(virt %p phys %llx)\n", VAR_2->index,
    VAR_2->index + VAR_2->entries - 1,
    (u64)VAR_2->buf.dma_addr, VAR_2->buf.len,
    VAR_2->buf.addr, (u64)FUNC_2(VAR_2->buf.addr));

 FUNC_0(VAR_1, &VAR_2->buf);
 VAR_2->entries = 0;
}
