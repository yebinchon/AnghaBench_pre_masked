
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_net_private {int dummy; } ;
struct proc_dir_entry {int dummy; } ;
struct afs_net {struct proc_dir_entry* proc_afs; TYPE_1__* net; } ;
struct TYPE_2__ {int proc_net; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int,struct proc_dir_entry*,int *,int) ;
 int FUNC_3 (char*,int,struct proc_dir_entry*,int *,int ,int,int *) ;
 int FUNC_4 (char*,int,struct proc_dir_entry*,int ,int *) ;
 int FUNC_5 (char*,int,struct proc_dir_entry*,int ,int ,int *) ;
 struct proc_dir_entry* FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (struct proc_dir_entry*) ;

int FUNC_8(struct afs_net *VAR_9)
{
 struct proc_dir_entry *VAR_10;

 FUNC_0("");

 VAR_10 = FUNC_6(VAR_9->net, "afs", VAR_9->net->proc_net);
 if (!VAR_10)
  goto error_dir;

 if (!FUNC_3("cells", 0644, VAR_10,
     &VAR_1,
     VAR_2,
     sizeof(struct seq_net_private),
     ((void*)0)) ||
     !FUNC_5("rootcell", 0644, VAR_10,
       VAR_3,
       VAR_4,
       ((void*)0)) ||
     !FUNC_2("servers", 0444, VAR_10, &VAR_5,
        sizeof(struct seq_net_private)) ||
     !FUNC_4("stats", 0444, VAR_10, VAR_6, ((void*)0)) ||
     !FUNC_3("sysname", 0644, VAR_10,
     &VAR_7,
     VAR_8,
     sizeof(struct seq_net_private),
     ((void*)0)))
  goto error_tree;

 VAR_9->proc_afs = VAR_10;
 FUNC_1(" = 0");
 return 0;

error_tree:
 FUNC_7(VAR_10);
error_dir:
 FUNC_1(" = -ENOMEM");
 return -VAR_0;
}
