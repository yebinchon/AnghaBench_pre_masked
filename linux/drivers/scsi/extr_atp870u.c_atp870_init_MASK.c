
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ device; int revision; int dev; } ;
struct atp_unit {unsigned char* host_id; int* global_map; int* ultra_map; scalar_t__* pciport; int * ioport; struct pci_dev* pdev; } ;
struct Scsi_Host {int max_id; unsigned char this_id; int io_port; int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct atp_unit*,int ,int,int ) ;
 int FUNC_1 (struct atp_unit*,int) ;
 int FUNC_2 (struct atp_unit*,int ,int) ;
 int FUNC_3 (struct atp_unit*,int) ;
 int FUNC_4 (struct atp_unit*,int ,unsigned char) ;
 int FUNC_5 (struct atp_unit*,int,int) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct pci_dev*,int,unsigned char*) ;
 struct atp_unit* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*,int,int) ;

__attribute__((used)) static void FUNC_11(struct Scsi_Host *VAR_3)
{
 struct atp_unit *VAR_4 = FUNC_9(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->pdev;
 unsigned char VAR_6, VAR_7;
 u8 VAR_8;
 bool VAR_9 =
  (VAR_5->device == VAR_0 &&
   VAR_5->revision == 4) ||
  (VAR_5->device == VAR_2) ||
  (VAR_5->device == VAR_1);

 FUNC_8(VAR_5, 0x49, &VAR_7);

 FUNC_6(&VAR_5->dev, "ACARD AEC-671X PCI Ultra/W SCSI-2/3 Host Adapter: IO:%lx, IRQ:%d.\n",
   VAR_3->io_port, VAR_3->irq);

 VAR_4->ioport[0] = VAR_3->io_port;
 VAR_4->pciport[0] = VAR_3->io_port + 0x20;
 VAR_7 &= 0x07;
 VAR_4->host_id[0] = VAR_7;
 VAR_8 = FUNC_2(VAR_4, 0, 2);
 VAR_4->global_map[0] = FUNC_1(VAR_4, 0x2d);
 VAR_4->ultra_map[0] = FUNC_3(VAR_4, 0x2e);

 if (VAR_4->ultra_map[0] == 0) {
  VAR_8 = 0x00;
  VAR_4->global_map[0] = 0x20;
  VAR_4->ultra_map[0] = 0xffff;
 }

 if (VAR_5->revision > 0x07)
  FUNC_5(VAR_4, 0x3e, 0x00);

 VAR_6 = (FUNC_1(VAR_4, 0x3a) & 0xf3) | 0x10;
 FUNC_5(VAR_4, 0x3a, VAR_6);
 FUNC_5(VAR_4, 0x3a, VAR_6 & 0xdf);
 FUNC_7(32);
 FUNC_5(VAR_4, 0x3a, VAR_6);
 FUNC_7(32);
 FUNC_4(VAR_4, 0, VAR_7);

 FUNC_10(VAR_3, VAR_9, VAR_8);
 FUNC_5(VAR_4, 0x3a, FUNC_1(VAR_4, 0x3a) | 0x10);
 FUNC_0(VAR_4, 0, VAR_9, 0);
 FUNC_5(VAR_4, 0x3a, FUNC_1(VAR_4, 0x3a) & 0xef);
 FUNC_5(VAR_4, 0x3b, FUNC_1(VAR_4, 0x3b) | 0x20);
 VAR_3->max_id = VAR_9 ? 16 : 8;
 VAR_3->this_id = VAR_7;
}
