
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {TYPE_2__* read_subdev; struct pcidas64_board* board_ptr; } ;
struct TYPE_4__ {TYPE_1__* async; int busy; } ;
struct TYPE_3__ {int cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct comedi_device *VAR_1)
{
 const struct pcidas64_board *VAR_2 = VAR_1->board_ptr;

 if (!VAR_1->read_subdev->busy)
  return 0;
 if (VAR_2->layout == VAR_0)
  return 0;
 else if (FUNC_0(&VAR_1->read_subdev->async->cmd))
  return 0;
 return 1;
}
