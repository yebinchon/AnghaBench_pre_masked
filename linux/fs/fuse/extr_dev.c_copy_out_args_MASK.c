
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_out_header {int dummy; } ;
struct fuse_copy_state {int dummy; } ;
struct fuse_args {int out_numargs; int page_zeroing; struct fuse_arg* out_args; int out_pages; int out_argvar; } ;
struct fuse_arg {unsigned int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_copy_state*,int,int ,struct fuse_arg*,int ) ;
 scalar_t__ FUNC_1 (int,struct fuse_arg*) ;

__attribute__((used)) static int FUNC_2(struct fuse_copy_state *VAR_1, struct fuse_args *VAR_2,
    unsigned VAR_3)
{
 unsigned VAR_4 = sizeof(struct fuse_out_header);

 VAR_4 += FUNC_1(VAR_2->out_numargs, VAR_2->out_args);

 if (VAR_4 < VAR_3 || (VAR_4 > VAR_3 && !VAR_2->out_argvar))
  return -VAR_0;
 else if (VAR_4 > VAR_3) {
  struct fuse_arg *VAR_5 = &VAR_2->out_args[VAR_2->out_numargs-1];
  unsigned VAR_6 = VAR_4 - VAR_3;

  if (VAR_6 > VAR_5->size)
   return -VAR_0;
  VAR_5->size -= VAR_6;
 }
 return FUNC_0(VAR_1, VAR_2->out_numargs, VAR_2->out_pages,
         VAR_2->out_args, VAR_2->page_zeroing);
}
