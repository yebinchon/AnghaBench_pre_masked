
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct myrb_hba {int bus_width; int * fw_version; int * model_name; } ;


 int FUNC_0 (unsigned char*,int *,int) ;
 int FUNC_1 (struct scsi_cmnd*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct myrb_hba *VAR_0,
  struct scsi_cmnd *VAR_1)
{
 unsigned char VAR_2[36] = {
  0x00, 0x00, 0x03, 0x02, 0x20, 0x00, 0x01, 0x00,
  0x4d, 0x59, 0x4c, 0x45, 0x58, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
 };

 if (VAR_0->bus_width > 16)
  VAR_2[7] |= 1 << 6;
 if (VAR_0->bus_width > 8)
  VAR_2[7] |= 1 << 5;
 FUNC_0(&VAR_2[16], VAR_0->model_name, 16);
 FUNC_0(&VAR_2[32], VAR_0->fw_version, 1);
 FUNC_0(&VAR_2[33], &VAR_0->fw_version[2], 2);
 FUNC_0(&VAR_2[35], &VAR_0->fw_version[7], 1);

 FUNC_1(VAR_1, (void *)VAR_2, 36);
}
