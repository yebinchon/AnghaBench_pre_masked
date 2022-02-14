
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long flags; } ;
struct fscache_retrieval {struct fscache_cookie* cookie; int to_do; int start_time; void* context; int end_io_func; struct address_space* mapping; TYPE_1__ op; } ;
struct fscache_cookie {int dummy; } ;
struct address_space {int dummy; } ;
typedef int fscache_rw_complete_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct fscache_cookie*,void*) ;
 int VAR_5 ;
 int FUNC_2 (struct fscache_cookie*,TYPE_1__*,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 struct fscache_retrieval* FUNC_4 (int,int ) ;

__attribute__((used)) static struct fscache_retrieval *FUNC_5(
 struct fscache_cookie *VAR_8,
 struct address_space *VAR_9,
 fscache_rw_complete_t VAR_10,
 void *VAR_11)
{
 struct fscache_retrieval *VAR_12;


 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  FUNC_3(&VAR_5);
  return ((void*)0);
 }

 FUNC_2(VAR_8, &VAR_12->op, ((void*)0),
          VAR_4,
          VAR_6);
 VAR_12->op.flags = VAR_0 |
  (1UL << VAR_2) |
  (1UL << VAR_1);
 VAR_12->cookie = VAR_8;
 VAR_12->mapping = VAR_9;
 VAR_12->end_io_func = VAR_10;
 VAR_12->context = VAR_11;
 VAR_12->start_time = VAR_7;
 FUNC_0(&VAR_12->to_do);




 if (VAR_11)
  FUNC_1(VAR_12->cookie, VAR_11);
 return VAR_12;
}
