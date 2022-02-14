
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_rw_context {int list; } ;
struct ceph_file_info {int rw_contexts_lock; int rw_contexts; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ceph_file_info *VAR_0,
           struct ceph_rw_context *VAR_1)
{
 FUNC_1(&VAR_0->rw_contexts_lock);
 FUNC_0(&VAR_1->list, &VAR_0->rw_contexts);
 FUNC_2(&VAR_0->rw_contexts_lock);
}
