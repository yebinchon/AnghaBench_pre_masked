
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct secure_flash_update_block {int dummy; } ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_3, uint32_t *VAR_4,
    uint32_t VAR_5, uint32_t VAR_6, uint8_t *VAR_7)
{
 uint32_t *VAR_8, VAR_9 = 0;
 int VAR_10;

 VAR_8 = VAR_4 + VAR_6;


 FUNC_0(VAR_7, (uint8_t *)VAR_8,
     sizeof(struct secure_flash_update_block));

 for (VAR_10 = 0; VAR_10 < (sizeof(struct secure_flash_update_block) >> 2); VAR_10++)
  VAR_9 += VAR_8[VAR_10];

 VAR_9 = (~VAR_9) + 1;

 if (VAR_9 != VAR_8[VAR_10]) {
  FUNC_1(VAR_2, VAR_3, 0x7097,
      "SFUB checksum failed, 0x%x, 0x%x\n",
      VAR_9, VAR_8[VAR_10]);
  return VAR_0;
 }

 return VAR_1;
}
