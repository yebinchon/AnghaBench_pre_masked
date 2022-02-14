
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct page {int dummy; } ;
struct fscache_cookie {int flags; } ;


 int FUNC_0 (struct fscache_cookie*,struct page*) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct fscache_cookie*,struct page*,int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct fscache_cookie *VAR_1, struct page *VAR_2)
{
 wait_queue_head_t *VAR_3 = FUNC_1(&VAR_1->flags, 0);

 FUNC_2(VAR_1, VAR_2, VAR_0);

 FUNC_3(*VAR_3, !FUNC_0(VAR_1, VAR_2));
}
