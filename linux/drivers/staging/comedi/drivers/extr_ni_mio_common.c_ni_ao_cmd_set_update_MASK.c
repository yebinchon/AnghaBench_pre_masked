
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int ao_mode1; int ao_cmd2; int ao_mode2; int ao_cmd1; int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; int scan_begin_arg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (int ,int ,int *) ;
 unsigned int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_6 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_21,
     const struct comedi_cmd *VAR_22)
{
 struct ni_private *VAR_23 = VAR_21->private;

 FUNC_6(VAR_21, VAR_17, VAR_18);





 VAR_23->ao_mode1 &= ~(
   VAR_9 |
   VAR_10 |
   VAR_11 |
   VAR_12
 );

 if (VAR_22->scan_begin_src == VAR_20) {
  unsigned int VAR_24;

  VAR_23->ao_cmd2 &= ~VAR_6;
  VAR_24 = FUNC_4(VAR_21, VAR_22->scan_begin_arg,
      VAR_0);






  FUNC_5(VAR_21, 1, VAR_15);
  FUNC_6(VAR_21, VAR_5, VAR_4);
  FUNC_5(VAR_21, VAR_24, VAR_15);
 } else {

  VAR_23->ao_cmd2 |= VAR_6;
  VAR_23->ao_mode1 |= FUNC_1(
   FUNC_3(FUNC_0(VAR_22->scan_begin_arg),
      VAR_19,
      &VAR_23->routing_tables));
  if (VAR_22->scan_begin_arg & VAR_1)
   VAR_23->ao_mode1 |= VAR_12;
 }

 FUNC_6(VAR_21, VAR_23->ao_cmd2, VAR_7);
 FUNC_6(VAR_21, VAR_23->ao_mode1, VAR_8);
 VAR_23->ao_mode2 &= ~(FUNC_2(3) |
          VAR_14);
 FUNC_6(VAR_21, VAR_23->ao_mode2, VAR_13);


 VAR_23->ao_cmd1 |= VAR_3 |
       VAR_2;

 FUNC_6(VAR_21, VAR_23->ao_cmd1, VAR_4);

 FUNC_6(VAR_21, VAR_16, VAR_18);
}
