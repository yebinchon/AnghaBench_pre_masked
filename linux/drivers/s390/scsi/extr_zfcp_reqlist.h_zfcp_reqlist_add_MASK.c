
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_reqlist {int lock; int * buckets; } ;
struct zfcp_fsf_req {int list; int req_id; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct zfcp_reqlist *VAR_0,
        struct zfcp_fsf_req *VAR_1)
{
 unsigned int VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_3(VAR_1->req_id);

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(&VAR_1->list, &VAR_0->buckets[VAR_2]);
 FUNC_2(&VAR_0->lock, VAR_3);
}
