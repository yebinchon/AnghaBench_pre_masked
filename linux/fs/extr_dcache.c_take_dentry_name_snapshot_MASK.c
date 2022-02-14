
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; scalar_t__ len; } ;
struct name_snapshot {int inline_name; TYPE_1__ name; } ;
struct dentry {int d_lock; TYPE_1__ d_name; int d_iname; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_3__* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct name_snapshot *VAR_0, struct dentry *VAR_1)
{
 FUNC_4(&VAR_1->d_lock);
 VAR_0->name = VAR_1->d_name;
 if (FUNC_6(FUNC_1(VAR_1))) {
  FUNC_0(&FUNC_2(VAR_1)->u.count);
 } else {
  FUNC_3(VAR_0->inline_name, VAR_1->d_iname,
         VAR_1->d_name.len + 1);
  VAR_0->name.name = VAR_0->inline_name;
 }
 FUNC_5(&VAR_1->d_lock);
}
