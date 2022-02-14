
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int type; } ;
struct mcu_msg_init_request {int suballoc_dma; size_t suballoc_size; int* l2_cache; TYPE_1__ header; } ;
struct allegro_dev {int mbox_command; } ;
typedef int msg ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct allegro_dev*,int *,struct mcu_msg_init_request*,int) ;
 int FUNC_1 (struct allegro_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mcu_msg_init_request*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct allegro_dev *VAR_2,
      dma_addr_t VAR_3, size_t VAR_4)
{
 struct mcu_msg_init_request VAR_5;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.header.type = VAR_1;
 VAR_5.header.length = sizeof(VAR_5) - sizeof(VAR_5.header);

 VAR_5.suballoc_dma = FUNC_2(VAR_3) | VAR_0;
 VAR_5.suballoc_size = VAR_4;


 VAR_5.l2_cache[0] = -1;
 VAR_5.l2_cache[1] = -1;
 VAR_5.l2_cache[2] = -1;

 FUNC_0(VAR_2, &VAR_2->mbox_command, &VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_2);
}
