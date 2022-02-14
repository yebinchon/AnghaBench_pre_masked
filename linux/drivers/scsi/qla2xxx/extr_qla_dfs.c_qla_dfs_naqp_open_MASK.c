
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct inode {struct scsi_qla_host* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,struct scsi_qla_host*) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct scsi_qla_host *VAR_3 = VAR_1->i_private;

 return FUNC_0(VAR_2, VAR_0, VAR_3);
}
