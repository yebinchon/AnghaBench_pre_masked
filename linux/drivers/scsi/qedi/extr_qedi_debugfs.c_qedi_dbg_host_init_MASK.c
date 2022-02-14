
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_debugfs_ops {int name; } ;
struct qedi_dbg_ctx {int host_no; int bdf_dentry; } ;
struct file_operations {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int ,struct qedi_dbg_ctx*,struct file_operations const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(struct qedi_dbg_ctx *VAR_1,
     const struct qedi_debugfs_ops *VAR_2,
     const struct file_operations *VAR_3)
{
 char VAR_4[32];

 FUNC_2(VAR_4, "host%u", VAR_1->host_no);
 VAR_1->bdf_dentry = FUNC_0(VAR_4, VAR_0);

 while (VAR_2) {
  if (!(VAR_2->name))
   break;

  FUNC_1(VAR_2->name, 0600, VAR_1->bdf_dentry, VAR_1,
        VAR_3);
  VAR_2++;
  VAR_3++;
 }
}
