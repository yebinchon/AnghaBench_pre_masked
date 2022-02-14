
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int rtsi_trig_direction_reg; int is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5, int VAR_6)
{
 struct ni_private *VAR_7 = VAR_5->private;
 unsigned int VAR_8 = FUNC_1(VAR_7->is_m_series);

 if (VAR_6 >= FUNC_2(0))

  VAR_6 -= FUNC_2(0);

 if (VAR_6 < VAR_8) {
  return (VAR_7->rtsi_trig_direction_reg &
   FUNC_0(VAR_6, VAR_7->is_m_series))
      ? VAR_1 : VAR_0;
 } else if (VAR_6 == VAR_4) {
  return (VAR_7->rtsi_trig_direction_reg &
   VAR_3)
      ? VAR_1 : VAR_0;
 }
 return -VAR_2;
}
