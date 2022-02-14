
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_device {int cdev_id; } ;
struct TYPE_3__ {int dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tape_device*,int ) ;
 int FUNC_2 (struct tape_device*,int *,struct irb*) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_6, struct irb *VAR_7)
{
 if (VAR_7->scsw.cmd.dstat == VAR_1)

  return VAR_2;
 else if (VAR_7->scsw.cmd.dstat == 0x85)

  FUNC_0(3, "unsol.irq! tape ready: %08x\n", VAR_6->cdev_id);
 else if (VAR_7->scsw.cmd.dstat & VAR_0) {
  FUNC_1(VAR_6, VAR_5);
 } else {
  FUNC_0(3, "unsol.irq! dev end: %08x\n", VAR_6->cdev_id);
  FUNC_2(VAR_6, ((void*)0), VAR_7);
 }

 FUNC_1(VAR_6, VAR_4);
 return VAR_3;
}
