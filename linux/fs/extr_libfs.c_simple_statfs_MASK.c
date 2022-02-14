
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kstatfs {int f_namelen; int f_bsize; int f_type; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_magic; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 VAR_3->f_type = VAR_2->d_sb->s_magic;
 VAR_3->f_bsize = VAR_1;
 VAR_3->f_namelen = VAR_0;
 return 0;
}
