
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int * nfsd_serv; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfsd_net* FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct file*) ;

int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 struct nfsd_net *VAR_6 = FUNC_2(VAR_3->i_sb->s_fs_info, VAR_2);

 FUNC_0(&VAR_1);
 if (VAR_6->nfsd_serv == ((void*)0)) {
  FUNC_1(&VAR_1);
  return -VAR_0;
 }

 FUNC_3(VAR_6->nfsd_serv);
 VAR_5 = FUNC_4(VAR_6->nfsd_serv, VAR_4);
 FUNC_1(&VAR_1);
 return VAR_5;
}
