
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct atp_unit {int* global_map; int** sp; unsigned int* ultra_map; unsigned int* async; unsigned char* host_id; scalar_t__* pciport; scalar_t__* ioport; struct pci_dev* pdev; } ;
struct Scsi_Host {int max_id; int max_lun; int max_channel; unsigned char this_id; int io_port; int irq; } ;


 int FUNC_0 (struct atp_unit*,int,int,int) ;
 int FUNC_1 (struct atp_unit*,int) ;
 int FUNC_2 (struct atp_unit*,int,int) ;
 int FUNC_3 (struct atp_unit*,int) ;
 int FUNC_4 (struct atp_unit*,int,unsigned char) ;
 int FUNC_5 (struct atp_unit*,int,unsigned char) ;
 int FUNC_6 (struct atp_unit*,int,int,int) ;
 int FUNC_7 (struct atp_unit*,int,int,int) ;
 int FUNC_8 (struct atp_unit*,int,unsigned int) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int) ;
 struct atp_unit* FUNC_11 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_12(struct Scsi_Host *VAR_0)
{
 struct atp_unit *VAR_1 = FUNC_11(VAR_0);
 struct pci_dev *VAR_2 = VAR_1->pdev;
 unsigned char VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6;
 unsigned char VAR_7[2][16];

 FUNC_9(&VAR_2->dev, "ACARD AEC-67162 PCI Ultra3 LVD Host Adapter: IO:%lx, IRQ:%d.\n",
   VAR_0->io_port, VAR_0->irq);

 VAR_1->ioport[0] = VAR_0->io_port + 0x80;
 VAR_1->ioport[1] = VAR_0->io_port + 0xc0;
 VAR_1->pciport[0] = VAR_0->io_port + 0x40;
 VAR_1->pciport[1] = VAR_0->io_port + 0x50;

 VAR_5 = FUNC_1(VAR_1, 0x29);
 FUNC_5(VAR_1, 0x29, VAR_5 | 0x04);

 VAR_6 = 0x1f80;
 while (VAR_6 < 0x2000) {
  FUNC_8(VAR_1, 0x3c, VAR_6);
  if (FUNC_3(VAR_1, 0x38) == 0xffffffff)
   break;
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   VAR_1->global_map[VAR_4] = 0;
   for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    FUNC_8(VAR_1, 0x3c, VAR_6++);
    ((u32 *)&VAR_7[VAR_4][0])[VAR_3] = FUNC_3(VAR_1, 0x38);
   }
   for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
    FUNC_8(VAR_1, 0x3c, VAR_6++);
    ((u32 *)&VAR_1->sp[VAR_4][0])[VAR_3] = FUNC_3(VAR_1, 0x38);
   }
   VAR_6 += 8;
  }
 }
 VAR_5 = FUNC_1(VAR_1, 0x29);
 FUNC_5(VAR_1, 0x29, VAR_5 & 0xfb);
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_1->ultra_map[VAR_5] = 0;
  VAR_1->async[VAR_5] = 0;
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   VAR_6 = 1 << VAR_3;
   if (VAR_1->sp[VAR_5][VAR_3] > 1)
    VAR_1->ultra_map[VAR_5] |= VAR_6;
   else
    if (VAR_1->sp[VAR_5][VAR_3] == 0)
     VAR_1->async[VAR_5] |= VAR_6;
  }
  VAR_1->async[VAR_5] = ~(VAR_1->async[VAR_5]);

  if (VAR_1->global_map[VAR_5] == 0) {
   VAR_3 = VAR_7[VAR_5][1];
   if ((VAR_3 & 0x40) != 0)
    VAR_1->global_map[VAR_5] |= 0x20;
   VAR_3 &= 0x07;
   VAR_1->global_map[VAR_5] |= VAR_3;
   if ((VAR_7[VAR_5][2] & 0x04) != 0)
    VAR_1->global_map[VAR_5] |= 0x08;
   VAR_1->host_id[VAR_5] = VAR_7[VAR_5][0] & 0x07;
  }
 }

 VAR_3 = FUNC_1(VAR_1, 0x28) & 0x8f;
 VAR_3 |= 0x10;
 FUNC_5(VAR_1, 0x28, VAR_3);
 FUNC_7(VAR_1, 0, 1, 0x80);
 FUNC_7(VAR_1, 1, 1, 0x80);
 FUNC_10(100);
 FUNC_7(VAR_1, 0, 1, 0);
 FUNC_7(VAR_1, 1, 1, 0);
 FUNC_10(1000);
 FUNC_2(VAR_1, 0, 0x1b);
 FUNC_2(VAR_1, 0, 0x17);
 FUNC_2(VAR_1, 1, 0x1b);
 FUNC_2(VAR_1, 1, 0x17);

 VAR_3 = VAR_1->host_id[0];
 if (VAR_3 > 7)
  VAR_3 = (VAR_3 & 0x07) | 0x40;
 FUNC_4(VAR_1, 0, VAR_3);

 VAR_3 = VAR_1->host_id[1];
 if (VAR_3 > 7)
  VAR_3 = (VAR_3 & 0x07) | 0x40;
 FUNC_4(VAR_1, 1, VAR_3);

 FUNC_10(600);
 FUNC_9(&VAR_2->dev, "Scanning Channel A SCSI Device ...\n");
 FUNC_0(VAR_1, 0, 1, FUNC_2(VAR_1, 0, 0x1b) >> 7);
 FUNC_6(VAR_1, 0, 0x16, 0x80);
 FUNC_9(&VAR_2->dev, "Scanning Channel B SCSI Device ...\n");
 FUNC_0(VAR_1, 1, 1, FUNC_2(VAR_1, 1, 0x1b) >> 7);
 FUNC_6(VAR_1, 1, 0x16, 0x80);
 VAR_3 = FUNC_1(VAR_1, 0x28) & 0xcf;
 VAR_3 |= 0xc0;
 FUNC_5(VAR_1, 0x28, VAR_3);
 VAR_3 = FUNC_1(VAR_1, 0x1f) | 0x80;
 FUNC_5(VAR_1, 0x1f, VAR_3);
 VAR_3 = FUNC_1(VAR_1, 0x29) | 0x01;
 FUNC_5(VAR_1, 0x29, VAR_3);
 VAR_0->max_id = 16;
 VAR_0->max_lun = (VAR_1->global_map[0] & 0x07) + 1;
 VAR_0->max_channel = 1;
 VAR_0->this_id = VAR_1->host_id[0];
}
