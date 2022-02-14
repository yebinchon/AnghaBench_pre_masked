
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; struct queued_ctx* context; } ;
struct queued_ctx {int status; int num; int complete; int pending; struct urb** urbs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1)
{
 int VAR_2 = VAR_1->status;
 struct queued_ctx *VAR_3 = VAR_1->context;

 if (VAR_3->status)
  goto done;
 if (VAR_1 == VAR_3->urbs[VAR_3->num - 4] || VAR_1 == VAR_3->urbs[VAR_3->num - 2]) {
  if (VAR_2 == -VAR_0)
   goto done;

 }
 if (VAR_2 != 0)
  VAR_3->status = VAR_2;

 done:
 if (FUNC_0(&VAR_3->pending))
  FUNC_1(&VAR_3->complete);
}
