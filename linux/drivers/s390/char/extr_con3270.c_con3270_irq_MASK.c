
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
struct con3270 {int update_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct con3270*) ;
 int FUNC_1 (struct con3270*,int) ;

__attribute__((used)) static void
FUNC_2(struct con3270 *VAR_5, struct raw3270_request *VAR_6, struct irb *VAR_7)
{

 if (VAR_7->scsw.cmd.dstat & VAR_1)
  FUNC_0(VAR_5);

 if (VAR_6) {
  if (VAR_7->scsw.cmd.dstat & VAR_3)
   VAR_6->rc = -VAR_4;
  else

   VAR_6->rescnt = VAR_7->scsw.cmd.count;
 } else if (VAR_7->scsw.cmd.dstat & VAR_2) {

  VAR_5->update_flags = VAR_0;
  FUNC_1(VAR_5, 1);
 }
}
