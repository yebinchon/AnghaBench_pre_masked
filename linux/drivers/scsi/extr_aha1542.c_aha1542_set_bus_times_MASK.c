
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct Scsi_Host*,char*) ;

__attribute__((used)) static void FUNC_5(struct Scsi_Host *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_5 > 0) {
  u8 VAR_8[] = { VAR_1, FUNC_2(VAR_5, 2, 15) };

  FUNC_0(VAR_4->io_port);
  if (FUNC_1(VAR_4->io_port, VAR_8, 2))
   goto fail;
 }

 if (VAR_6 > 0) {
  u8 VAR_9[] = { VAR_0, FUNC_2(VAR_6, 1, 64) };

  FUNC_0(VAR_4->io_port);
  if (FUNC_1(VAR_4->io_port, VAR_9, 2))
   goto fail;
 }

 if (FUNC_3(VAR_7) != 0xff) {
  u8 VAR_10[] = { VAR_2, FUNC_3(VAR_7) };

  FUNC_0(VAR_4->io_port);
  if (FUNC_1(VAR_4->io_port, VAR_10, 2))
   goto fail;
 }
 FUNC_0(VAR_4->io_port);
 return;
fail:
 FUNC_4(VAR_3, VAR_4, "setting bus on/off-time failed\n");
 FUNC_0(VAR_4->io_port);
}
