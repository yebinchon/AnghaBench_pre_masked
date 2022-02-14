
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_fs_info; } ;


 TYPE_2__* FUNC_0 (struct file*) ;
 struct nfsd_net* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct file*,int ,struct nfsd_net*) ;

int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct nfsd_net *VAR_4 = FUNC_1(FUNC_0(VAR_3)->i_sb->s_fs_info,
        VAR_0);

 return FUNC_2(VAR_3, VAR_1, VAR_4);
}
