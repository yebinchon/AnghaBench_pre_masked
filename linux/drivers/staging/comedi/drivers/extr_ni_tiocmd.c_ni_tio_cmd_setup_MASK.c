
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct ni_gpct {unsigned int counter_index; TYPE_2__* counter_dev; } ;
struct comedi_subdevice {struct ni_gpct* private; TYPE_1__* async; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; unsigned int scan_begin_arg; scalar_t__ convert_src; unsigned int convert_arg; int flags; } ;
struct TYPE_4__ {struct ni_route_tables* routing_tables; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__,int ,struct ni_route_tables const*) ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ) ;
 int FUNC_6 (struct ni_gpct*,int ,unsigned int) ;
 int FUNC_7 (struct ni_gpct*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct comedi_subdevice *VAR_4)
{
 struct comedi_cmd *VAR_5 = &VAR_4->async->cmd;
 struct ni_gpct *VAR_6 = VAR_4->private;
 unsigned int VAR_7 = VAR_6->counter_index;
 const struct ni_route_tables *VAR_8 =
  VAR_6->counter_dev->routing_tables;
 int VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11 = 0;

 if (VAR_5->scan_begin_src == VAR_3) {
  VAR_9 = 1;
  VAR_10 = VAR_5->scan_begin_arg;
 } else if (VAR_5->convert_src == VAR_3) {
  VAR_9 = 1;
  VAR_10 = VAR_5->convert_arg;
 }
 if (VAR_9) {
  if (FUNC_0(VAR_10) >= VAR_2) {

   int VAR_12 = FUNC_4(FUNC_0(VAR_10),
         FUNC_3(VAR_7),
         VAR_8);
   if (VAR_12 < 0)
    return -VAR_1;
   VAR_11 = FUNC_7(VAR_6, 0, VAR_12);
  } else {





   VAR_11 = FUNC_6(VAR_6, 0, VAR_10);
  }
 }
 if (VAR_5->flags & VAR_0) {
  FUNC_5(VAR_6, FUNC_2(VAR_7),
    FUNC_1(VAR_7),
    FUNC_1(VAR_7));
 }
 return VAR_11;
}
