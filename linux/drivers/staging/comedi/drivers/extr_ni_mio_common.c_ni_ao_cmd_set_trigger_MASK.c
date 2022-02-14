
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int ao_mode1; unsigned int ao_mode3; int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ start_src; int start_arg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_17,
      const struct comedi_cmd *VAR_18)
{
 struct ni_private *VAR_19 = VAR_17->private;
 unsigned int VAR_20;

 FUNC_3(VAR_17, VAR_12, VAR_13);


 if (VAR_18->stop_src == VAR_16) {
  VAR_19->ao_mode1 |= VAR_2;
  VAR_19->ao_mode1 &= ~VAR_4;
 } else {
  VAR_19->ao_mode1 &= ~VAR_2;
  VAR_19->ao_mode1 |= VAR_4;
 }
 FUNC_3(VAR_17, VAR_19->ao_mode1, VAR_3);

 if (VAR_18->start_src == VAR_15) {
  VAR_20 = VAR_8 |
     VAR_10;
 } else {
  VAR_20 = FUNC_1(
   FUNC_2(FUNC_0(VAR_18->start_arg),
            VAR_14,
            &VAR_19->routing_tables, 1));

  if (VAR_18->start_arg & VAR_1)
   VAR_20 |= VAR_9;

  if (VAR_18->start_arg & VAR_0)
   VAR_20 |= VAR_8;
 }
 FUNC_3(VAR_17, VAR_20, VAR_7);





 VAR_19->ao_mode3 &= ~VAR_6;
 FUNC_3(VAR_17, VAR_19->ao_mode3, VAR_5);

 FUNC_3(VAR_17, VAR_11, VAR_13);
}
