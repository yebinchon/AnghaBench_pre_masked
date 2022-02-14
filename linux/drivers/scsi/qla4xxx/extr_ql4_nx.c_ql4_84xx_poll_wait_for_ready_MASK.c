
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* rd_reg_indirect ) (struct scsi_qla_host*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_2 (struct scsi_qla_host*,int,int*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static uint32_t FUNC_4(struct scsi_qla_host *VAR_5,
          uint32_t VAR_6, uint32_t VAR_7)
{
 unsigned long VAR_8;
 uint32_t VAR_9 = VAR_2;
 uint32_t VAR_10;

 VAR_8 = VAR_4 + FUNC_0(VAR_3);
 do {
  VAR_5->isp_ops->rd_reg_indirect(VAR_5, VAR_6, &VAR_10);
  if ((VAR_10 & VAR_7) != 0)
   break;

  if (FUNC_3(VAR_4, VAR_8)) {
   FUNC_1(VAR_0, VAR_5, "Error in processing rdmdio entry\n");
   return VAR_1;
  }
 } while (1);

 return VAR_9;
}
