
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hlist_bl_head {int dummy; } ;
struct TYPE_4__ {int d_alias; int d_in_lookup_hash; } ;
struct TYPE_3__ {int hash; } ;
struct dentry {int d_lru; TYPE_2__ d_u; int * d_wait; int d_flags; TYPE_1__ d_name; int d_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hlist_bl_head*) ;
 int FUNC_4 (struct hlist_bl_head*) ;
 struct hlist_bl_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dentry *VAR_1)
{
 struct hlist_bl_head *VAR_2 = FUNC_5(VAR_1->d_parent,
       VAR_1->d_name.hash);
 FUNC_3(VAR_2);
 VAR_1->d_flags &= ~VAR_0;
 FUNC_2(&VAR_1->d_u.d_in_lookup_hash);
 FUNC_6(VAR_1->d_wait);
 VAR_1->d_wait = ((void*)0);
 FUNC_4(VAR_2);
 FUNC_0(&VAR_1->d_u.d_alias);
 FUNC_1(&VAR_1->d_lru);
}
