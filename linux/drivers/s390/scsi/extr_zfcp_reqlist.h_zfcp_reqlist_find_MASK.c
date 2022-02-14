
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_reqlist {int lock; } ;
struct zfcp_fsf_req {int dummy; } ;


 struct zfcp_fsf_req* FUNC_0 (struct zfcp_reqlist*,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline struct zfcp_fsf_req *
FUNC_3(struct zfcp_reqlist *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct zfcp_fsf_req *VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_3;
}
