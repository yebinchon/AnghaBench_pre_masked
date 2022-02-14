
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct atp_unit {unsigned char* host_id; int* global_map; unsigned int* ultra_map; int** sp; unsigned int* async; scalar_t__* pciport; scalar_t__* ioport; struct pci_dev* pdev; } ;
struct Scsi_Host {int max_id; unsigned char this_id; int irq; int io_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct atp_unit*,int ,int,int) ;
 int FUNC_1 (struct atp_unit*,int) ;
 int FUNC_2 (struct atp_unit*,int ,int) ;
 unsigned int FUNC_3 (struct atp_unit*,int) ;
 int FUNC_4 (struct atp_unit*,int ,unsigned char) ;
 int FUNC_5 (struct atp_unit*,int,int) ;
 int FUNC_6 (struct atp_unit*,int,unsigned int) ;
 int FUNC_7 (int *,char*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;
 struct atp_unit* FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*,int,int) ;

__attribute__((used)) static void FUNC_12(struct Scsi_Host *VAR_1)
{
 struct atp_unit *VAR_2 = FUNC_10(VAR_1);
 struct pci_dev *VAR_3 = VAR_2->pdev;
 unsigned char VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7;

 FUNC_9(VAR_3, VAR_0, 0x80);

 VAR_2->ioport[0] = VAR_1->io_port + 0x40;
 VAR_2->pciport[0] = VAR_1->io_port + 0x28;

 VAR_6 = FUNC_1(VAR_2, 0x39) >> 4;

 FUNC_7(&VAR_3->dev, "ACARD AEC-67160 PCI Ultra3 LVD Host Adapter: IO:%lx, IRQ:%d.\n",
   VAR_1->io_port, VAR_1->irq);
 VAR_2->host_id[0] = VAR_6;

 VAR_2->global_map[0] = FUNC_1(VAR_2, 0x35);
 VAR_2->ultra_map[0] = FUNC_3(VAR_2, 0x3c);

 VAR_7 = 0x3f09;
 while (VAR_7 < 0x4000) {
  VAR_5 = 0;
  FUNC_6(VAR_2, 0x34, VAR_7);
  VAR_7 += 0x0002;
  if (FUNC_1(VAR_2, 0x30) == 0xff)
   break;

  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x30);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x31);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x32);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x33);
  FUNC_6(VAR_2, 0x34, VAR_7);
  VAR_7 += 0x0002;
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x30);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x31);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x32);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x33);
  FUNC_6(VAR_2, 0x34, VAR_7);
  VAR_7 += 0x0002;
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x30);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x31);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x32);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x33);
  FUNC_6(VAR_2, 0x34, VAR_7);
  VAR_7 += 0x0002;
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x30);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x31);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x32);
  VAR_2->sp[0][VAR_5++] = FUNC_1(VAR_2, 0x33);
  VAR_7 += 0x0018;
 }
 FUNC_6(VAR_2, 0x34, 0);
 VAR_2->ultra_map[0] = 0;
 VAR_2->async[0] = 0;
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  VAR_7 = 1 << VAR_4;
  if (VAR_2->sp[0][VAR_4] > 1)
   VAR_2->ultra_map[0] |= VAR_7;
  else
   if (VAR_2->sp[0][VAR_4] == 0)
    VAR_2->async[0] |= VAR_7;
 }
 VAR_2->async[0] = ~(VAR_2->async[0]);
 FUNC_5(VAR_2, 0x35, VAR_2->global_map[0]);

 VAR_4 = FUNC_1(VAR_2, 0x38) & 0x80;
 FUNC_5(VAR_2, 0x38, VAR_4);
 FUNC_5(VAR_2, 0x3b, 0x20);
 FUNC_8(32);
 FUNC_5(VAR_2, 0x3b, 0);
 FUNC_8(32);
 FUNC_2(VAR_2, 0, 0x1b);
 FUNC_2(VAR_2, 0, 0x17);

 FUNC_4(VAR_2, 0, VAR_6);

 FUNC_11(VAR_1, 1, FUNC_1(VAR_2, 0x22));
 FUNC_0(VAR_2, 0, 1, FUNC_1(VAR_2, 0x3f) & 0x40);
 FUNC_5(VAR_2, 0x38, 0xb0);
 VAR_1->max_id = 16;
 VAR_1->this_id = VAR_6;
}
