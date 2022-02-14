
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raw3270_view {struct raw3270* dev; } ;
struct raw3270_request {int rc; } ;
struct raw3270 {int dummy; } ;
struct TYPE_4__ {int dstat; } ;
struct TYPE_3__ {TYPE_2__ cmd; } ;
struct irb {int* ecw; TYPE_1__ scsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct raw3270*) ;

__attribute__((used)) static void
FUNC_1(struct raw3270_view *VAR_5, struct raw3270_request *VAR_6,
   struct irb *VAR_7)
{
 struct raw3270 *VAR_8;

 if (VAR_6) {
  if (VAR_7->scsw.cmd.dstat & VAR_1) {
   if (VAR_7->ecw[0] & VAR_4)
    VAR_6->rc = -VAR_3;
   else
    VAR_6->rc = -VAR_2;
  }
 }
 if (VAR_7->scsw.cmd.dstat & VAR_0) {

  VAR_8 = VAR_5->dev;
  FUNC_0(VAR_8);
 }
}
