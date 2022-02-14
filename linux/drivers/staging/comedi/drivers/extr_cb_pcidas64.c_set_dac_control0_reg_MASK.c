
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;
struct comedi_cmd {scalar_t__ start_src; int start_arg; scalar_t__ scan_begin_src; int scan_begin_arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_12,
     const struct comedi_cmd *VAR_13)
{
 struct pcidas64_private *VAR_14 = VAR_12->private;
 unsigned int VAR_15 = VAR_2 | VAR_7 |
       VAR_6 | VAR_8;

 if (VAR_13->start_src == VAR_5) {
  VAR_15 |= VAR_9;
  if (VAR_13->start_arg & VAR_0)
   VAR_15 |= VAR_10;
 } else {
  VAR_15 |= VAR_11;
 }
 if (VAR_13->scan_begin_src == VAR_5) {
  VAR_15 |= VAR_3;
  if (VAR_13->scan_begin_arg & VAR_0)
   VAR_15 |= VAR_4;
 }
 FUNC_0(VAR_15, VAR_14->main_iobase + VAR_1);
}
