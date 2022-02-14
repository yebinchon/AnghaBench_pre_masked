
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct nfs_server {TYPE_1__* nfs_client; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {int cl_rpcclient; } ;


 struct nfs_server* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct seq_file*,struct nfs_server*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;

int FUNC_6(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_2->d_sb);

 FUNC_1(VAR_1, VAR_3, 0);

 FUNC_2();
 FUNC_5(VAR_1, ",addr=%s",
   FUNC_4(VAR_3->nfs_client->cl_rpcclient,
       VAR_0));
 FUNC_3();

 return 0;
}
