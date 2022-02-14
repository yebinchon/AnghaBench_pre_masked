
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_req {scalar_t__ argbuf; struct fuse_args* args; } ;
struct fuse_args {unsigned int in_numargs; unsigned int in_pages; unsigned int out_numargs; unsigned int out_pages; TYPE_1__* in_args; struct fuse_arg* out_args; } ;
struct fuse_arg {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,struct fuse_arg*) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fuse_req *VAR_2)
{
 struct fuse_args *VAR_3 = VAR_2->args;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_5 = VAR_3->in_numargs - VAR_3->in_pages;
 VAR_6 = VAR_3->out_numargs - VAR_3->out_pages;
 VAR_7 = FUNC_0(VAR_5, (struct fuse_arg *) VAR_3->in_args) +
       FUNC_0(VAR_6, VAR_3->out_args);

 VAR_2->argbuf = FUNC_1(VAR_7, VAR_1);
 if (!VAR_2->argbuf)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_2(VAR_2->argbuf + VAR_4,
         VAR_3->in_args[VAR_8].value,
         VAR_3->in_args[VAR_8].size);
  VAR_4 += VAR_3->in_args[VAR_8].size;
 }

 return 0;
}
