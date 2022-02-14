
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct ld_semaphore {int write_wait; int read_wait; int wait_lock; scalar_t__ wait_readers; int count; int dep_map; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *,char const*,struct lock_class_key*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ld_semaphore *VAR_1, const char *VAR_2,
    struct lock_class_key *VAR_3)
{







 FUNC_1(&VAR_1->count, VAR_0);
 VAR_1->wait_readers = 0;
 FUNC_4(&VAR_1->wait_lock);
 FUNC_0(&VAR_1->read_wait);
 FUNC_0(&VAR_1->write_wait);
}
