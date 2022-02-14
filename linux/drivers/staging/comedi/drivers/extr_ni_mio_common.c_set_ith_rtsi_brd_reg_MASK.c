
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int rtsi_shared_mux_reg; scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2, struct comedi_device *VAR_3)
{
 struct ni_private *VAR_4 = VAR_3->private;
 int VAR_5 = 3;
 int VAR_6;
 int VAR_7;

 if (VAR_4->is_m_series)
  VAR_5 = 4;
 VAR_6 = ~((~0) << VAR_5);
 VAR_7 = VAR_1 * VAR_5;


 VAR_4->rtsi_shared_mux_reg &= ~(VAR_6 << VAR_7);

 VAR_4->rtsi_shared_mux_reg |= (VAR_2 & VAR_6) << VAR_7;

 FUNC_0(VAR_3, VAR_4->rtsi_shared_mux_reg, VAR_0);
}
