
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aio_kiocb {TYPE_1__* ki_ctx; scalar_t__ ki_filp; scalar_t__ ki_eventfd; } ;
struct TYPE_2__ {int reqs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct aio_kiocb*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct aio_kiocb *VAR_1)
{
 if (VAR_1->ki_eventfd)
  FUNC_0(VAR_1->ki_eventfd);
 if (VAR_1->ki_filp)
  FUNC_1(VAR_1->ki_filp);
 FUNC_3(&VAR_1->ki_ctx->reqs);
 FUNC_2(VAR_0, VAR_1);
}
