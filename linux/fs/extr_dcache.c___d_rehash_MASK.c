
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hlist_bl_head {int dummy; } ;
struct TYPE_2__ {int hash; } ;
struct dentry {int d_hash; TYPE_1__ d_name; } ;


 struct hlist_bl_head* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hlist_bl_head*) ;
 int FUNC_2 (struct hlist_bl_head*) ;
 int FUNC_3 (struct hlist_bl_head*) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_0)
{
 struct hlist_bl_head *VAR_1 = FUNC_0(VAR_0->d_name.hash);

 FUNC_2(VAR_1);
 FUNC_1(&VAR_0->d_hash, VAR_1);
 FUNC_3(VAR_1);
}
