
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;
struct ccw_device {int dummy; } ;
typedef enum io_status { ____Placeholder_io_status } io_status ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum io_status FUNC_0(struct ccw_device *VAR_2, void *VAR_3,
     struct irb *VAR_4, enum io_status VAR_5)
{

 if (VAR_5 == VAR_1 && VAR_4->scsw.cmd.cstat == 0)
  return VAR_0;
 return VAR_5;
}
