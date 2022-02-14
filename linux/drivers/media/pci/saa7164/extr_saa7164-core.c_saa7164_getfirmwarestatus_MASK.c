
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7164_fw_status {void* remainheap; void* cpuload; void* inst; void* spec; void* mode; void* status; } ;
struct saa7164_dev {struct saa7164_fw_status fw_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 void* FUNC_1 (int ) ;

void FUNC_2(struct saa7164_dev *VAR_6)
{
 struct saa7164_fw_status *VAR_7 = &VAR_6->fw_status;

 VAR_6->fw_status.status = FUNC_1(VAR_5);
 VAR_6->fw_status.mode = FUNC_1(VAR_2);
 VAR_6->fw_status.spec = FUNC_1(VAR_4);
 VAR_6->fw_status.inst = FUNC_1(VAR_1);
 VAR_6->fw_status.cpuload = FUNC_1(VAR_0);
 VAR_6->fw_status.remainheap =
  FUNC_1(VAR_3);

 FUNC_0(1, "Firmware status:\n");
 FUNC_0(1, " .status     = 0x%08x\n", VAR_7->status);
 FUNC_0(1, " .mode       = 0x%08x\n", VAR_7->mode);
 FUNC_0(1, " .spec       = 0x%08x\n", VAR_7->spec);
 FUNC_0(1, " .inst       = 0x%08x\n", VAR_7->inst);
 FUNC_0(1, " .cpuload    = 0x%08x\n", VAR_7->cpuload);
 FUNC_0(1, " .remainheap = 0x%08x\n", VAR_7->remainheap);
}
