
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_submit_state {int has_refs; int used_refs; int * file; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct io_submit_state *VAR_0)
{
 if (VAR_0->file) {
  int VAR_1 = VAR_0->has_refs - VAR_0->used_refs;

  if (VAR_1)
   FUNC_0(VAR_0->file, VAR_1);
  VAR_0->file = ((void*)0);
 }
}
