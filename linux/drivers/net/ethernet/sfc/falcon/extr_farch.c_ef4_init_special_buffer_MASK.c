
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_addr; int addr; } ;
struct ef4_special_buffer {int entries; int index; TYPE_1__ buf; } ;
struct ef4_nic {int net_dev; } ;
typedef int ef4_qword_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ef4_nic*,int *,unsigned int) ;
 int FUNC_3 (struct ef4_nic*,int ,int ,char*,unsigned int,unsigned long long) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct ef4_nic *VAR_5, struct ef4_special_buffer *VAR_6)
{
 ef4_qword_t VAR_7;
 unsigned int VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;

 FUNC_0(!VAR_6->buf.addr);


 for (VAR_10 = 0; VAR_10 < VAR_6->entries; VAR_10++) {
  VAR_8 = VAR_6->index + VAR_10;
  VAR_9 = VAR_6->buf.dma_addr + (VAR_10 * VAR_0);
  FUNC_3(VAR_5, VAR_4, VAR_5->net_dev,
     "mapping special buffer %d at %llx\n",
     VAR_8, (unsigned long long)VAR_9);
  FUNC_1(VAR_7,
         VAR_2, 0,
         VAR_1, VAR_9 >> 12,
         VAR_3, 0);
  FUNC_2(VAR_5, &VAR_7, VAR_8);
 }
}
