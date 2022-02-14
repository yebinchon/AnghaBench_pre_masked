
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

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 int VAR_6;

 if (VAR_5->is_m_series)
  VAR_6 = (VAR_5->rtsi_trig_direction_reg &
         VAR_2)
      >> VAR_3;
 else
  VAR_6 = (VAR_5->rtsi_trig_b_output_reg &
         VAR_0)
      >> VAR_1;
 return VAR_6;
}
