
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_request {scalar_t__ op; int rescnt; } ;
struct tape_device {int dummy; } ;
struct TYPE_3__ {int dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct tape_device*,struct tape_request*) ;
 int FUNC_2 (struct tape_device*,struct tape_request*,struct irb*,int ) ;
 int FUNC_3 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_4 (struct tape_device*,struct irb*) ;
 int FUNC_5 (struct tape_device*,struct tape_request*,struct irb*) ;

__attribute__((used)) static int
FUNC_6(struct tape_device *VAR_11, struct tape_request *VAR_12,
       struct irb *VAR_13)
{
 if (VAR_12 == ((void*)0))
  return FUNC_4(VAR_11, VAR_13);

 if ((VAR_13->scsw.cmd.dstat & VAR_4) &&
     (VAR_13->scsw.cmd.dstat & VAR_2) &&
     (VAR_12->op == VAR_10)) {

  FUNC_0(2, "End of volume\n");
  return FUNC_2(VAR_11, VAR_12, VAR_13, -VAR_5);
 }

 if (VAR_13->scsw.cmd.dstat & VAR_3)
  return FUNC_3(VAR_11, VAR_12, VAR_13);

 if (VAR_13->scsw.cmd.dstat & VAR_2) {
  if (VAR_13->scsw.cmd.dstat == VAR_4) {
   if (VAR_12->op == VAR_9 || VAR_12->op == VAR_8)
    VAR_12->rescnt++;
   else
    FUNC_0(5, "Unit Exception!\n");
  }

  return FUNC_1(VAR_11, VAR_12);
 }

 if (VAR_13->scsw.cmd.dstat & VAR_1) {
  FUNC_0(2, "channel end\n");
  return VAR_6;
 }

 if (VAR_13->scsw.cmd.dstat & VAR_0) {
  FUNC_0(2, "Unit Attention when busy..\n");
  return VAR_6;
 }

 FUNC_0(6, "xunknownirq\n");
 FUNC_5(VAR_11, VAR_12, VAR_13);
 return VAR_7;
}
