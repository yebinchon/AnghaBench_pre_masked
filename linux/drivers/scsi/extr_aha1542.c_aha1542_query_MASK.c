
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aha1542_hostdata {int bios_translation; } ;
struct Scsi_Host {int io_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct Scsi_Host*,char*) ;
 struct aha1542_hostdata* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct Scsi_Host *VAR_7)
{
 struct aha1542_hostdata *VAR_8 = FUNC_9(VAR_7);
 u8 VAR_9[4];
 int VAR_10;
 VAR_10 = FUNC_7(FUNC_2(VAR_7->io_port));
 if (VAR_10 & VAR_2) {
  VAR_10 = FUNC_7(FUNC_0(VAR_7->io_port));
 };
 FUNC_6(VAR_7->io_port, VAR_1);
 FUNC_3(VAR_7->io_port, VAR_9, 4, 0);
 if (!FUNC_10(FUNC_1(VAR_7->io_port), VAR_4, VAR_3, 0, 0))
  FUNC_8(VAR_5, VAR_7, "error querying card type\n");
 FUNC_4(VAR_7->io_port);

 VAR_8->bios_translation = VAR_0;







 if (VAR_9[0] == 0x43) {
  FUNC_8(VAR_6, VAR_7, "Emulation mode not supported for AHA-1740 hardware, use aha1740 driver instead.\n");
  return 1;
 };




 VAR_8->bios_translation = FUNC_5(VAR_7);

 return 0;
}
