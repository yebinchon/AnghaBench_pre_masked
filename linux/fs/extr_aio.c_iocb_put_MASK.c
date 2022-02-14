
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_kiocb {int ki_refcnt; } ;


 int FUNC_0 (struct aio_kiocb*) ;
 int FUNC_1 (struct aio_kiocb*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct aio_kiocb *VAR_0)
{
 if (FUNC_2(&VAR_0->ki_refcnt)) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }
}
