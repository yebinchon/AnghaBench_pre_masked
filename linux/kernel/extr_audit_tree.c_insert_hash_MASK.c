
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct audit_chunk {int hash; int key; } ;


 int FUNC_0 (int) ;
 struct list_head* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct audit_chunk *VAR_0)
{
 struct list_head *VAR_1;






 FUNC_3();
 FUNC_0(!VAR_0->key);
 VAR_1 = FUNC_1(VAR_0->key);
 FUNC_2(&VAR_0->hash, VAR_1);
}
