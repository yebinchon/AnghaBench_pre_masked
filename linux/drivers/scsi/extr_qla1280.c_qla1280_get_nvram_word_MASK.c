
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_qla_host*,int) ;

__attribute__((used)) static uint16_t
FUNC_3(struct scsi_qla_host *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 uint16_t VAR_4;

 VAR_3 = VAR_2 << 16;
 VAR_3 |= VAR_0;

 VAR_4 = FUNC_1(FUNC_2(VAR_1, VAR_3));

 FUNC_0(8, "qla1280_get_nvram_word: exiting normally NVRAM data = "
  "0x%x", VAR_4);

 return VAR_4;
}
