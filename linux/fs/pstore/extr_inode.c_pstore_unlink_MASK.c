
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pstore_record {TYPE_1__* psi; } ;
struct pstore_private {struct pstore_record* record; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct pstore_private* i_private; } ;
struct TYPE_3__ {int read_mutex; int (* erase ) (struct pstore_record*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct pstore_record*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct pstore_private *VAR_3 = FUNC_0(VAR_2)->i_private;
 struct pstore_record *VAR_4 = VAR_3->record;

 if (!VAR_4->psi->erase)
  return -VAR_0;

 FUNC_1(&VAR_4->psi->read_mutex);
 VAR_4->psi->erase(VAR_4);
 FUNC_2(&VAR_4->psi->read_mutex);

 return FUNC_3(VAR_1, VAR_2);
}
