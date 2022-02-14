
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct Scsi_Host {int io_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int*,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct Scsi_Host*,char*) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_7)
{
 static u8 VAR_8[3];
 static u8 VAR_9[2];
 int VAR_10;

 VAR_10 = VAR_1;

 FUNC_4(VAR_7->io_port, VAR_2);
 if (FUNC_1(VAR_7->io_port, VAR_9, 2, 100))
  return VAR_10;
 if (!FUNC_6(FUNC_0(VAR_7->io_port), VAR_5, VAR_4, 0, 100))
  goto fail;
 FUNC_2(VAR_7->io_port);

 if ((VAR_9[0] & 0x08) || VAR_9[1]) {
  VAR_8[0] = VAR_3;
  VAR_8[1] = 0;
  VAR_8[2] = VAR_9[1];

  if ((VAR_9[0] & 0x08) && (VAR_9[1] & 0x03))
   VAR_10 = VAR_0;

  if (FUNC_3(VAR_7->io_port, VAR_8, 3))
   goto fail;
 };
 while (0) {
fail:
  FUNC_5(VAR_6, VAR_7, "Mailbox init failed\n");
 }
 FUNC_2(VAR_7->io_port);
 return VAR_10;
}
