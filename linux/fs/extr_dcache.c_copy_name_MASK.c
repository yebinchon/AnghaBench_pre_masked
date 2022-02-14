
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct external_name {TYPE_2__ u; } ;
struct TYPE_4__ {int hash_len; int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; int d_iname; } ;
struct TYPE_6__ {int head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 struct external_name* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct external_name*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct dentry *VAR_1, struct dentry *VAR_2)
{
 struct external_name *VAR_3 = ((void*)0);
 if (FUNC_7(FUNC_2(VAR_1)))
  VAR_3 = FUNC_3(VAR_1);
 if (FUNC_7(FUNC_2(VAR_2))) {
  FUNC_1(&FUNC_3(VAR_2)->u.count);
  VAR_1->d_name = VAR_2->d_name;
 } else {
  FUNC_6(VAR_1->d_iname, VAR_2->d_name.name,
    VAR_2->d_name.len + 1);
  VAR_1->d_name.name = VAR_1->d_iname;
  VAR_1->d_name.hash_len = VAR_2->d_name.hash_len;
 }
 if (VAR_3 && FUNC_5(FUNC_0(&VAR_3->u.count)))
  FUNC_4(VAR_3, VAR_0.head);
}
