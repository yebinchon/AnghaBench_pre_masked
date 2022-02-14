
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {scalar_t__ len; int name; } ;
struct TYPE_4__ {scalar_t__ len; int name; } ;
struct dentry {int d_flags; TYPE_2__ d_name; TYPE_1__* d_op; } ;
struct TYPE_3__ {scalar_t__ (* d_compare ) (struct dentry const*,scalar_t__,int ,struct qstr const*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry const*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dentry const*,scalar_t__,int ,struct qstr const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct dentry *VAR_1,
    const struct dentry *VAR_2,
    const struct qstr *VAR_3)
{
 if (FUNC_1(!(VAR_2->d_flags & VAR_0))) {
  if (VAR_1->d_name.len != VAR_3->len)
   return 0;
  return FUNC_0(VAR_1, VAR_3->name, VAR_3->len) == 0;
 }
 return VAR_2->d_op->d_compare(VAR_1,
           VAR_1->d_name.len, VAR_1->d_name.name,
           VAR_3) == 0;
}
