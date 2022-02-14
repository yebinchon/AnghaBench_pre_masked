
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_aio_ctx {int refcount; int done; int aio_mutex; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cifs_aio_ctx* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct cifs_aio_ctx *
FUNC_5(void)
{
 struct cifs_aio_ctx *VAR_1;






 VAR_1 = FUNC_3(sizeof(struct cifs_aio_ctx), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->list);
 FUNC_4(&VAR_1->aio_mutex);
 FUNC_1(&VAR_1->done);
 FUNC_2(&VAR_1->refcount);
 return VAR_1;
}
