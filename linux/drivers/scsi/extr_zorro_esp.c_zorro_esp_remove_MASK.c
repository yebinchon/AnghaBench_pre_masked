
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_esp_priv {int board_base; scalar_t__ zorro3; struct esp* esp; } ;
struct zorro_dev {int dev; } ;
struct esp {int regs; int dma_regs; int command_block_dma; int command_block; int dev; struct Scsi_Host* host; } ;
struct Scsi_Host {int base; int irq; } ;


 struct zorro_esp_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,struct esp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct zorro_esp_priv*) ;
 int FUNC_5 (struct esp*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct zorro_dev*) ;

__attribute__((used)) static void FUNC_8(struct zorro_dev *VAR_0)
{
 struct zorro_esp_priv *VAR_1 = FUNC_0(&VAR_0->dev);
 struct esp *VAR_2 = VAR_1->esp;
 struct Scsi_Host *VAR_3 = VAR_2->host;

 FUNC_5(VAR_2);

 FUNC_2(VAR_3->irq, VAR_2);
 FUNC_1(VAR_2->dev, 16,
     VAR_2->command_block,
     VAR_2->command_block_dma);

 if (VAR_1->zorro3) {
  FUNC_3(VAR_1->board_base);
  FUNC_3(VAR_2->dma_regs);
 }

 if (VAR_3->base > 0xffffff)
  FUNC_3(VAR_2->regs);

 FUNC_6(VAR_3);

 FUNC_7(VAR_0);

 FUNC_4(VAR_1);
}
