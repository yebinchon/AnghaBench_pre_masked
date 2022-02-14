
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_qla_host {int host_no; int hardware_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(struct scsi_qla_host * VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_0->hardware_lock, VAR_2);
 FUNC_6(VAR_1, FUNC_1(VAR_0));
 FUNC_3(FUNC_1(VAR_0));
 FUNC_5(&VAR_0->hardware_lock, VAR_2);

 FUNC_0(FUNC_2("scsi%ld : UNLOCK SEM - mask= 0x%x\n", VAR_0->host_no,
        VAR_1));
}
