
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct dentry *FUNC_2(struct super_block *VAR_1, struct fid *VAR_2,
           int VAR_3, int VAR_4)
{
 FUNC_1("overlayfs: connectable file handles not supported; use 'no_subtree_check' exportfs option.\n");
 return FUNC_0(-VAR_0);
}
