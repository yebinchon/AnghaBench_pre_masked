
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int rtsi_trig_direction_reg; int rtsi_trig_b_output_reg; scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_6, struct comedi_device *VAR_7)
{
 struct ni_private *VAR_8 = VAR_7->private;

 if (VAR_8->is_m_series) {
  VAR_8->rtsi_trig_direction_reg &=
   ~VAR_4;
  VAR_8->rtsi_trig_direction_reg |=
   (VAR_6 << VAR_5) &
   VAR_4;
  FUNC_0(VAR_7, VAR_8->rtsi_trig_direction_reg,
         VAR_3);
 } else {
  VAR_8->rtsi_trig_b_output_reg &= ~VAR_1;
  VAR_8->rtsi_trig_b_output_reg |=
   (VAR_6 << VAR_2) &
   VAR_1;
  FUNC_0(VAR_7, VAR_8->rtsi_trig_b_output_reg,
         VAR_0);
 }
}
