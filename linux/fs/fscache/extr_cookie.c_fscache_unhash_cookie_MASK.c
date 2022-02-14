
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_bl_head {int dummy; } ;
struct fscache_cookie {int key_hash; int hash_link; } ;


 int FUNC_0 (struct hlist_bl_head*) ;
 struct hlist_bl_head* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hlist_bl_head*) ;
 int FUNC_3 (struct hlist_bl_head*) ;

__attribute__((used)) static void FUNC_4(struct fscache_cookie *VAR_1)
{
 struct hlist_bl_head *VAR_2;
 unsigned int VAR_3;

 VAR_3 = VAR_1->key_hash & (FUNC_0(VAR_0) - 1);
 VAR_2 = &VAR_0[VAR_3];

 FUNC_2(VAR_2);
 FUNC_1(&VAR_1->hash_link);
 FUNC_3(VAR_2);
}
