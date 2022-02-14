
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {unsigned int in_flight; int req_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct TCP_Server_Info *VAR_0)
{
 unsigned int VAR_1;
 FUNC_0(&VAR_0->req_lock);
 VAR_1 = VAR_0->in_flight;
 FUNC_1(&VAR_0->req_lock);
 return VAR_1;
}
