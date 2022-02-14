
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int reqs; } ;
struct aio_kiocb {int * ki_eventfd; int ki_refcnt; int ki_list; struct kioctx* ki_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kioctx*) ;
 int VAR_1 ;
 struct aio_kiocb* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct aio_kiocb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline struct aio_kiocb *FUNC_7(struct kioctx *VAR_2)
{
 struct aio_kiocb *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (FUNC_6(!VAR_3))
  return ((void*)0);

 if (FUNC_6(!FUNC_1(VAR_2))) {
  FUNC_3(VAR_1, VAR_3);
  return ((void*)0);
 }

 FUNC_4(&VAR_2->reqs);
 VAR_3->ki_ctx = VAR_2;
 FUNC_0(&VAR_3->ki_list);
 FUNC_5(&VAR_3->ki_refcnt, 2);
 VAR_3->ki_eventfd = ((void*)0);
 return VAR_3;
}
