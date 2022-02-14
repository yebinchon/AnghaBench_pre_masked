
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string {int len; int update; int list; scalar_t__* string; } ;
struct TYPE_3__ {int cols; scalar_t__* ascebc; } ;
struct con3270 {TYPE_2__* cline; TYPE_1__ view; } ;
struct TYPE_4__ {int len; int update; int list; int string; } ;


 scalar_t__ VAR_0 ;
 struct string* FUNC_0 (struct con3270*,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

__attribute__((used)) static inline void
FUNC_5(struct con3270 *VAR_1)
{
 struct string *VAR_2;
 unsigned int VAR_3;


 VAR_3 = (VAR_1->cline->len < VAR_1->view.cols - 5) ?
  VAR_1->cline->len + 4 : VAR_1->view.cols;
 VAR_2 = FUNC_0(VAR_1, VAR_3);
 FUNC_4(VAR_2->string, VAR_1->cline->string, VAR_1->cline->len);
 if (VAR_1->cline->len < VAR_1->view.cols - 5) {
  VAR_2->string[VAR_2->len - 4] = VAR_0;
  VAR_2->string[VAR_2->len - 1] = 0;
 } else {
  while (--VAR_3 >= VAR_1->cline->len)
   VAR_2->string[VAR_3] = VAR_1->view.ascebc[' '];
 }

 FUNC_1(&VAR_2->list, &VAR_1->cline->list);
 FUNC_2(&VAR_1->cline->list);
 if (!FUNC_3(&VAR_1->cline->update)) {
  FUNC_1(&VAR_2->update, &VAR_1->cline->update);
  FUNC_2(&VAR_1->cline->update);
 }
 VAR_1->cline->len = 0;
}
