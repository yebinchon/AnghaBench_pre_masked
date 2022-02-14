
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = VAR_4 + (VAR_0 * VAR_1);
 while (FUNC_2(VAR_4, VAR_6)) {

  if (FUNC_0(VAR_5))
   return VAR_3;

  FUNC_1(2000);
 }

 return VAR_2;
}
