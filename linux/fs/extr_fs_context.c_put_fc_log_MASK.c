
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {struct fc_log* log; } ;
struct fc_log {int need_free; struct fc_log** buffer; int usage; } ;


 int FUNC_0 (struct fc_log*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fs_context *VAR_0)
{
 struct fc_log *VAR_1 = VAR_0->log;
 int VAR_2;

 if (VAR_1) {
  if (FUNC_1(&VAR_1->usage)) {
   VAR_0->log = ((void*)0);
   for (VAR_2 = 0; VAR_2 <= 7; VAR_2++)
    if (VAR_1->need_free & (1 << VAR_2))
     FUNC_0(VAR_1->buffer[VAR_2]);
   FUNC_0(VAR_1);
  }
 }
}
