
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_de_head {scalar_t__ deh_objectid; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {scalar_t__ k_objectid; } ;
struct TYPE_3__ {struct dentry* priv_root; } ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;

__attribute__((used)) static inline bool FUNC_4(struct inode *VAR_0, struct reiserfs_de_head *VAR_1)
{
 struct dentry *VAR_2 = FUNC_1(VAR_0->i_sb)->priv_root;
 return (FUNC_3(VAR_2) &&
         VAR_1->deh_objectid == FUNC_0(FUNC_2(VAR_2))->k_objectid);
}
