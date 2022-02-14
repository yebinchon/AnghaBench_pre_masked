
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_net_private {int dummy; } ;
struct proc_dir_entry {int dummy; } ;
struct afs_vl_seq_net_private {int dummy; } ;
struct afs_net {int proc_afs; int net; } ;
struct afs_cell {int name; struct afs_net* net; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct afs_cell*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,struct proc_dir_entry*,int *,int,struct afs_cell*) ;
 struct proc_dir_entry* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct afs_cell *VAR_3)
{
 struct proc_dir_entry *VAR_4;
 struct afs_net *VAR_5 = VAR_3->net;

 FUNC_0("%p{%s},%p", VAR_3, VAR_3->name, VAR_5->proc_afs);

 VAR_4 = FUNC_3(VAR_5->net, VAR_3->name, VAR_5->proc_afs);
 if (!VAR_4)
  goto error_dir;

 if (!FUNC_2("vlservers", 0444, VAR_4,
      &VAR_1,
      sizeof(struct afs_vl_seq_net_private),
      VAR_3) ||
     !FUNC_2("volumes", 0444, VAR_4,
      &VAR_2,
      sizeof(struct seq_net_private),
      VAR_3))
  goto error_tree;

 FUNC_1(" = 0");
 return 0;

error_tree:
 FUNC_4(VAR_3->name, VAR_5->proc_afs);
error_dir:
 FUNC_1(" = -ENOMEM");
 return -VAR_0;
}
