
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_call {TYPE_1__* kvec; int iter; } ;
struct TYPE_2__ {size_t iov_len; void* iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct afs_call *VAR_1, void *VAR_2, size_t VAR_3)
{
 VAR_1->kvec[0].iov_base = VAR_2;
 VAR_1->kvec[0].iov_len = VAR_3;
 FUNC_0(&VAR_1->iter, VAR_0, VAR_1->kvec, 1, VAR_3);
}
