
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ascebc; } ;
struct con3270 {int update_flags; int update; TYPE_1__* cline; TYPE_2__ view; } ;
struct TYPE_3__ {int update; int len; int * string; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct con3270 *VAR_1, unsigned char VAR_2)
{
 VAR_1->cline->string[VAR_1->cline->len++] =
  VAR_1->view.ascebc[(VAR_2 < ' ') ? ' ' : VAR_2];
 if (FUNC_1(&VAR_1->cline->update)) {
  FUNC_0(&VAR_1->cline->update, &VAR_1->update);
  VAR_1->update_flags |= VAR_0;
 }
}
