
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct scsi_qla_host {void* nx_reset_timeout; void* nx_dev_init_timeout; scalar_t__ request_ring; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*,void*) ;
 int FUNC_5 (struct scsi_qla_host*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct scsi_qla_host *VAR_4)
{

 uint32_t *VAR_5;

 if (!FUNC_2(VAR_4))
  return;
 VAR_5 = (uint32_t *)VAR_4->request_ring;
 FUNC_5(VAR_4, (uint8_t *)VAR_4->request_ring,
   0x003e885c , 8);

 if (*VAR_5 == FUNC_1(0xffffffff)) {
  VAR_4->nx_dev_init_timeout = VAR_2;
  VAR_4->nx_reset_timeout = VAR_3;
 } else {
  VAR_4->nx_dev_init_timeout = FUNC_3(*VAR_5++);
  VAR_4->nx_reset_timeout = FUNC_3(*VAR_5);
 }

 FUNC_0(FUNC_4(VAR_0, VAR_4,
  "ha->nx_dev_init_timeout = %d\n", VAR_4->nx_dev_init_timeout));
 FUNC_0(FUNC_4(VAR_0, VAR_4,
  "ha->nx_reset_timeout = %d\n", VAR_4->nx_reset_timeout));
 return;
}
