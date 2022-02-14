
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int blocks; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_2__ {int nrpages; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;

int FUNC_2(const struct path *VAR_1, struct kstat *VAR_2,
     u32 VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_1->dentry);
 FUNC_1(VAR_5, VAR_2);
 VAR_2->blocks = VAR_5->i_mapping->nrpages << (VAR_0 - 9);
 return 0;
}
