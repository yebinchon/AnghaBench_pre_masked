
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cld_upcall {int cu_list; struct cld_net* cu_net; } ;
struct cld_net {int cn_lock; } ;


 int FUNC_0 (struct cld_upcall*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct cld_upcall *VAR_0)
{
 struct cld_net *VAR_1 = VAR_0->cu_net;

 FUNC_2(&VAR_1->cn_lock);
 FUNC_1(&VAR_0->cu_list);
 FUNC_3(&VAR_1->cn_lock);
 FUNC_0(VAR_0);
}
