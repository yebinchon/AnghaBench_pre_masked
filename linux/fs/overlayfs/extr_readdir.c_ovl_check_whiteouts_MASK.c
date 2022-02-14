
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ovl_readdir_data {struct ovl_cache_entry* first_maybe_whiteout; TYPE_1__* dentry; } ;
struct ovl_cache_entry {int is_whiteout; int len; int name; struct ovl_cache_entry* next_maybe_whiteout; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int i_rwsem; } ;
struct TYPE_3__ {int d_sb; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct dentry* FUNC_4 (int ,struct dentry*,int ) ;
 int FUNC_5 (struct dentry*) ;
 struct cred* FUNC_6 (int ) ;
 int FUNC_7 (struct cred const*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_0, struct ovl_readdir_data *VAR_1)
{
 int VAR_2;
 struct ovl_cache_entry *VAR_3;
 struct dentry *VAR_4;
 const struct cred *VAR_5;

 VAR_5 = FUNC_6(VAR_1->dentry->d_sb);

 VAR_2 = FUNC_1(&VAR_0->d_inode->i_rwsem);
 if (!VAR_2) {
  while (VAR_1->first_maybe_whiteout) {
   VAR_3 = VAR_1->first_maybe_whiteout;
   VAR_1->first_maybe_whiteout = VAR_3->next_maybe_whiteout;
   VAR_4 = FUNC_4(VAR_3->name, VAR_0, VAR_3->len);
   if (!FUNC_0(VAR_4)) {
    VAR_3->is_whiteout = FUNC_5(VAR_4);
    FUNC_2(VAR_4);
   }
  }
  FUNC_3(VAR_0->d_inode);
 }
 FUNC_7(VAR_5);

 return VAR_2;
}
