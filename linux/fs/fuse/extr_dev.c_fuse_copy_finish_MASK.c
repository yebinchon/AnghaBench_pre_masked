
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_buffer {scalar_t__ len; } ;
struct fuse_copy_state {int * pg; scalar_t__ write; struct pipe_buffer* currbuf; scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fuse_copy_state *VAR_1)
{
 if (VAR_1->currbuf) {
  struct pipe_buffer *VAR_2 = VAR_1->currbuf;

  if (VAR_1->write)
   VAR_2->len = VAR_0 - VAR_1->len;
  VAR_1->currbuf = ((void*)0);
 } else if (VAR_1->pg) {
  if (VAR_1->write) {
   FUNC_0(VAR_1->pg);
   FUNC_2(VAR_1->pg);
  }
  FUNC_1(VAR_1->pg);
 }
 VAR_1->pg = ((void*)0);
}
