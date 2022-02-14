
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_qla_host*,char*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,int,int*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct scsi_qla_host *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 while ((FUNC_2(VAR_2) != 0) && (VAR_6 < 50000)) {
  FUNC_4(100);
  VAR_6++;
 }
 if (VAR_6 >= 50000) {
  FUNC_0(VAR_1, VAR_2, "%s: qla4_82xx_rom_lock failed\n",
      VAR_0);
  return -1;
 }
 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_2);
 return VAR_5;
}
