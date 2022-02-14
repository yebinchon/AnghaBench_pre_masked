
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_submit_state {int fd; int used_refs; struct file* file; int ios_left; int has_refs; } ;
struct file {int dummy; } ;


 struct file* FUNC_0 (int) ;
 struct file* FUNC_1 (int,int ) ;
 int FUNC_2 (struct io_submit_state*) ;

__attribute__((used)) static struct file *FUNC_3(struct io_submit_state *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return FUNC_0(VAR_1);

 if (VAR_0->file) {
  if (VAR_0->fd == VAR_1) {
   VAR_0->used_refs++;
   VAR_0->ios_left--;
   return VAR_0->file;
  }
  FUNC_2(VAR_0);
 }
 VAR_0->file = FUNC_1(VAR_1, VAR_0->ios_left);
 if (!VAR_0->file)
  return ((void*)0);

 VAR_0->fd = VAR_1;
 VAR_0->has_refs = VAR_0->ios_left;
 VAR_0->used_refs = 1;
 VAR_0->ios_left--;
 return VAR_0->file;
}
