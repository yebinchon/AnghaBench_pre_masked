
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_private; } ;
struct file {int dummy; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 scsi_qla_host_t *VAR_3 = VAR_1->i_private;

 return FUNC_0(VAR_2, VAR_0, VAR_3);
}
