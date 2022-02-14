
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty3270 {int attn; int update_flags; int hanglet; int view; int throttle; } ;
struct raw3270_request {int rescnt; int rc; } ;
struct TYPE_4__ {int dstat; int count; } ;
struct TYPE_3__ {TYPE_2__ cmd; } ;
struct irb {TYPE_1__ scsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty3270*,int ) ;
 int FUNC_3 (struct tty3270*,int) ;

__attribute__((used)) static void
FUNC_4(struct tty3270 *VAR_5, struct raw3270_request *VAR_6, struct irb *VAR_7)
{

 if (VAR_7->scsw.cmd.dstat & VAR_0) {
  if (!VAR_5->throttle)
   FUNC_2(VAR_5, 0);
  else
   VAR_5->attn = 1;
 }

 if (VAR_6) {
  if (VAR_7->scsw.cmd.dstat & VAR_2) {
   VAR_6->rc = -VAR_3;
   FUNC_0(&VAR_5->view);
   FUNC_1(&VAR_5->hanglet);
  } else {

   VAR_6->rescnt = VAR_7->scsw.cmd.count;
  }
 } else if (VAR_7->scsw.cmd.dstat & VAR_1) {

  VAR_5->update_flags = VAR_4;
  FUNC_3(VAR_5, 1);
 }
}
