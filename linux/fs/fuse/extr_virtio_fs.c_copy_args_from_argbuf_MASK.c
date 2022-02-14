
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct fuse_req {int * argbuf; TYPE_2__ out; } ;
struct fuse_args {unsigned int in_numargs; unsigned int in_pages; int out_numargs; unsigned int out_pages; TYPE_3__* out_args; scalar_t__ out_argvar; scalar_t__ in_args; } ;
struct fuse_arg {int dummy; } ;
struct TYPE_6__ {unsigned int size; int value; } ;


 unsigned int FUNC_0 (unsigned int,struct fuse_arg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct fuse_args *VAR_0, struct fuse_req *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_2 = VAR_1->out.h.len - sizeof(VAR_1->out.h);
 VAR_4 = VAR_0->in_numargs - VAR_0->in_pages;
 VAR_5 = VAR_0->out_numargs - VAR_0->out_pages;
 VAR_3 = FUNC_0(VAR_4, (struct fuse_arg *)VAR_0->in_args);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  unsigned int VAR_7 = VAR_0->out_args[VAR_6].size;

  if (VAR_0->out_argvar &&
      VAR_6 == VAR_0->out_numargs - 1 &&
      VAR_7 > VAR_2) {
   VAR_7 = VAR_2;
  }

  FUNC_2(VAR_0->out_args[VAR_6].value, VAR_1->argbuf + VAR_3, VAR_7);
  VAR_3 += VAR_7;

  if (VAR_6 != VAR_0->out_numargs - 1)
   VAR_2 -= VAR_7;
 }


 if (VAR_0->out_argvar)
  VAR_0->out_args[VAR_0->out_numargs - 1].size = VAR_2;

 FUNC_1(VAR_1->argbuf);
 VAR_1->argbuf = ((void*)0);
}
