
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srb {int * wait; } ;
struct scsi_qla_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct srb*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_1, struct srb *VAR_2)
{
 FUNC_0(VAR_0);

 VAR_2->wait = &VAR_0;
 return FUNC_1(VAR_1, VAR_2, &VAR_0);
}
