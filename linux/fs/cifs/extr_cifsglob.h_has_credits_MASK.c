
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int req_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool
FUNC_2(struct TCP_Server_Info *VAR_0, int *VAR_1, int VAR_2)
{
 int VAR_3;
 FUNC_0(&VAR_0->req_lock);
 VAR_3 = *VAR_1;
 FUNC_1(&VAR_0->req_lock);
 return VAR_3 >= VAR_2;
}
