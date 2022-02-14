
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esp_cmd_entry {uintptr_t sense_dma; scalar_t__ sense_ptr; TYPE_1__* cmd; } ;
struct esp {int flags; int dev; } ;
struct TYPE_2__ {scalar_t__ sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_3, struct esp_cmd_entry *VAR_4)
{
 VAR_4->sense_ptr = VAR_4->cmd->sense_buffer;
 if (VAR_3->flags & VAR_1) {
  VAR_4->sense_dma = (uintptr_t)VAR_4->sense_ptr;
  return;
 }

 VAR_4->sense_dma = FUNC_0(VAR_3->dev, VAR_4->sense_ptr,
     VAR_2, VAR_0);
}
