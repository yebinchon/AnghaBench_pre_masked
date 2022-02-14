
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; } ;
struct comedi_cmd {int chanlist_len; int scan_end_arg; scalar_t__ convert_src; scalar_t__ scan_begin_src; int flags; int scan_begin_arg; int convert_arg; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int FUNC_4 (int,int *,int ) ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16)
{
 struct comedi_cmd *VAR_17 = &VAR_16->async->cmd;
 int VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;

 for (VAR_18 = 0; VAR_18 < VAR_17->chanlist_len; VAR_18++) {
  VAR_19 = FUNC_1(VAR_17->chanlist[VAR_18]);
  VAR_20 = FUNC_2(VAR_17->chanlist[VAR_18]);

  FUNC_6((VAR_20 << 6) | VAR_19, VAR_15->mmio + VAR_1 + VAR_18);
 }
 VAR_21 = FUNC_0(VAR_17->chanlist[0]);

 FUNC_6(VAR_17->scan_end_arg, VAR_15->mmio + FUNC_3(0));

 if (VAR_17->convert_src == VAR_13) {
  VAR_22 = FUNC_4(50, &VAR_17->convert_arg, VAR_17->flags);
  FUNC_6((VAR_22 >> 16), VAR_15->mmio + FUNC_3(1));
  FUNC_6((VAR_22 & 0xffff), VAR_15->mmio + FUNC_3(2));
 }

 if (VAR_17->scan_begin_src == VAR_13) {
  VAR_23 = FUNC_4(100, &VAR_17->scan_begin_arg,
         VAR_17->flags);
  FUNC_6((VAR_23 >> 16), VAR_15->mmio + FUNC_3(3));
  FUNC_6((VAR_23 & 0xffff), VAR_15->mmio + FUNC_3(4));
 }

 FUNC_6(VAR_9, VAR_15->mmio + FUNC_3(5));
 FUNC_6((VAR_21 == VAR_0) ? VAR_10 : 0,
        VAR_15->mmio + FUNC_3(6));

 FUNC_6(VAR_2 / 2, VAR_15->mmio + FUNC_3(7));

 FUNC_6(VAR_12, VAR_15->mmio + VAR_11);
 FUNC_5(VAR_15, VAR_3);

 FUNC_6(VAR_5 | VAR_7 | VAR_6,
        VAR_15->mmio + VAR_8);

 VAR_14 = 0;

 FUNC_6(VAR_12, VAR_15->mmio + VAR_11);
 FUNC_5(VAR_15, VAR_4);

 return 0;
}
