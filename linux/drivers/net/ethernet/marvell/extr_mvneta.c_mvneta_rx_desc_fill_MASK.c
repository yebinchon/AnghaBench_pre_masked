
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_rx_queue {void** buf_virt_addr; struct mvneta_rx_desc* descs; } ;
struct mvneta_rx_desc {int buf_phys_addr; } ;



__attribute__((used)) static void FUNC_0(struct mvneta_rx_desc *VAR_0,
    u32 VAR_1, void *VAR_2,
    struct mvneta_rx_queue *VAR_3)
{
 int VAR_4;

 VAR_0->buf_phys_addr = VAR_1;
 VAR_4 = VAR_0 - VAR_3->descs;
 VAR_3->buf_virt_addr[VAR_4] = VAR_2;
}
