
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; int name; int hash; } ;
struct dentry {int d_flags; TYPE_1__* d_op; } ;
struct TYPE_2__ {int (* d_hash ) (struct dentry*,struct qstr*) ;} ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 int FUNC_2 (struct dentry*,int ,int ) ;
 int FUNC_3 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_4 (int) ;

struct dentry *FUNC_5(struct dentry *VAR_1, struct qstr *VAR_2)
{





 VAR_2->hash = FUNC_2(VAR_1, VAR_2->name, VAR_2->len);
 if (VAR_1->d_flags & VAR_0) {
  int VAR_3 = VAR_1->d_op->d_hash(VAR_1, VAR_2);
  if (FUNC_4(VAR_3 < 0))
   return FUNC_0(VAR_3);
 }
 return FUNC_1(VAR_1, VAR_2);
}
