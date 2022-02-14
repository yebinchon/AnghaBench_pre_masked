
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raw3270_request {int rescnt; int rc; } ;
struct TYPE_3__ {int dstat; int count; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;
struct fs3270 {int attention; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct fs3270 *VAR_3, struct raw3270_request *VAR_4, struct irb *VAR_5)
{

 if (VAR_5->scsw.cmd.dstat & VAR_0) {
  VAR_3->attention = 1;
  FUNC_0(&VAR_3->wait);
 }

 if (VAR_4) {
  if (VAR_5->scsw.cmd.dstat & VAR_1)
   VAR_4->rc = -VAR_2;
  else

   VAR_4->rescnt = VAR_5->scsw.cmd.count;
 }
}
