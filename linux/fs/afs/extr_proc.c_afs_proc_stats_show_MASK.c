
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct afs_net {int n_store_bytes; int n_stores; int n_fetch_bytes; int n_fetches; int n_dir_rm; int n_dir_cr; int n_read_dir; int n_relpg; int n_inval; int n_reval; int n_lookup; } ;


 struct afs_net* FUNC_0 (struct seq_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int ,...) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct afs_net *VAR_2 = FUNC_0(VAR_0);

 FUNC_4(VAR_0, "kAFS statistics\n");

 FUNC_3(VAR_0, "dir-mgmt: look=%u reval=%u inval=%u relpg=%u\n",
     FUNC_2(&VAR_2->n_lookup),
     FUNC_2(&VAR_2->n_reval),
     FUNC_2(&VAR_2->n_inval),
     FUNC_2(&VAR_2->n_relpg));

 FUNC_3(VAR_0, "dir-data: rdpg=%u\n",
     FUNC_2(&VAR_2->n_read_dir));

 FUNC_3(VAR_0, "dir-edit: cr=%u rm=%u\n",
     FUNC_2(&VAR_2->n_dir_cr),
     FUNC_2(&VAR_2->n_dir_rm));

 FUNC_3(VAR_0, "file-rd : n=%u nb=%lu\n",
     FUNC_2(&VAR_2->n_fetches),
     FUNC_1(&VAR_2->n_fetch_bytes));
 FUNC_3(VAR_0, "file-wr : n=%u nb=%lu\n",
     FUNC_2(&VAR_2->n_stores),
     FUNC_1(&VAR_2->n_store_bytes));
 return 0;
}
