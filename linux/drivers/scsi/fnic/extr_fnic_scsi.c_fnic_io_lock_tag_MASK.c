
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int * io_req_lock; } ;
typedef int spinlock_t ;


 int VAR_0 ;

__attribute__((used)) static inline spinlock_t *FUNC_0(struct fnic *VAR_1,
         int VAR_2)
{
 return &VAR_1->io_req_lock[VAR_2 & (VAR_0 - 1)];
}
