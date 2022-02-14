
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct request_context {int killed; int refcount; TYPE_2__* outurb; int state; } ;
struct TYPE_4__ {TYPE_1__* dev; int transfer_flags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct request_context* VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct request_context*) ;
 int FUNC_2 (struct request_context*) ;
 struct request_context* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{
 struct request_context *VAR_7 = FUNC_3(VAR_7, VAR_6, VAR_5);

 VAR_7->outurb->transfer_flags |= VAR_3;
 if (FUNC_5(VAR_7->outurb) == -VAR_0) {
  VAR_7->state = VAR_1;
 } else {
  VAR_7->state = VAR_2;
  FUNC_0(&VAR_7->outurb->dev->dev, "couldn't unlink\n");
  FUNC_4(&VAR_7->refcount);
  VAR_7->killed = 1;
  FUNC_1(VAR_7);
  FUNC_2(VAR_7);
 }
}
