
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {scalar_t__ id; struct mic_bootparam* dp; } ;
struct mic_bootparam {int h2c_config_db; int scif_host_dma_addr; int scif_card_dma_addr; int c2h_scif_db; int h2c_scif_db; scalar_t__ node_id; int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct mic_device *VAR_1)
{
 struct mic_bootparam *VAR_2 = VAR_1->dp;

 VAR_2->magic = FUNC_0(VAR_0);
 VAR_2->h2c_config_db = -1;
 VAR_2->node_id = VAR_1->id + 1;
 VAR_2->scif_host_dma_addr = 0x0;
 VAR_2->scif_card_dma_addr = 0x0;
 VAR_2->c2h_scif_db = -1;
 VAR_2->h2c_scif_db = -1;
}
