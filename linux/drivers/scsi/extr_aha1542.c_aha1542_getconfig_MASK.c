
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct Scsi_Host {int dma_channel; int irq; int this_id; int io_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct Scsi_Host*,char*) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct Scsi_Host *VAR_5)
{
 u8 VAR_6[3];
 int VAR_7;
 VAR_7 = FUNC_6(FUNC_2(VAR_5->io_port));
 if (VAR_7 & VAR_1) {
  VAR_7 = FUNC_6(FUNC_0(VAR_5->io_port));
 };
 FUNC_5(VAR_5->io_port, VAR_0);
 FUNC_3(VAR_5->io_port, VAR_6, 3, 0);
 if (!FUNC_8(FUNC_1(VAR_5->io_port), VAR_3, VAR_2, 0, 0))
  FUNC_7(VAR_4, VAR_5, "error querying board settings\n");
 FUNC_4(VAR_5->io_port);
 switch (VAR_6[0]) {
 case 0x80:
  VAR_5->dma_channel = 7;
  break;
 case 0x40:
  VAR_5->dma_channel = 6;
  break;
 case 0x20:
  VAR_5->dma_channel = 5;
  break;
 case 0x01:
  VAR_5->dma_channel = 0;
  break;
 case 0:


  VAR_5->dma_channel = 0xFF;
  break;
 default:
  FUNC_7(VAR_4, VAR_5, "Unable to determine DMA channel.\n");
  return -1;
 };
 switch (VAR_6[1]) {
 case 0x40:
  VAR_5->irq = 15;
  break;
 case 0x20:
  VAR_5->irq = 14;
  break;
 case 0x8:
  VAR_5->irq = 12;
  break;
 case 0x4:
  VAR_5->irq = 11;
  break;
 case 0x2:
  VAR_5->irq = 10;
  break;
 case 0x1:
  VAR_5->irq = 9;
  break;
 default:
  FUNC_7(VAR_4, VAR_5, "Unable to determine IRQ level.\n");
  return -1;
 };
 VAR_5->this_id = VAR_6[2] & 7;
 return 0;
}
