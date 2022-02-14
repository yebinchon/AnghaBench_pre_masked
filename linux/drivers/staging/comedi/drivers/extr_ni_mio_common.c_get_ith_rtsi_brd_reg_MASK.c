
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int rtsi_shared_mux_reg; scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, struct comedi_device *VAR_1)
{
 struct ni_private *VAR_2 = VAR_1->private;
 int VAR_3 = 3;
 int VAR_4;
 int VAR_5;

 if (VAR_2->is_m_series)
  VAR_3 = 4;
 VAR_4 = ~((~0) << VAR_3);
 VAR_5 = VAR_0 * VAR_3;

 return (VAR_2->rtsi_shared_mux_reg >> VAR_5) & VAR_4;
}
