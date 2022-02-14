
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int FUNC_0 (struct comedi_device*,int) ;
 unsigned int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_0, int VAR_1)
{
 struct ni_private *VAR_2 = VAR_0->private;
 unsigned int VAR_3;

 if (VAR_2->is_m_series) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
 } else {
  VAR_3 = FUNC_1(VAR_0, VAR_1) << 16;
  VAR_3 |= FUNC_1(VAR_0, VAR_1 + 1);
 }
 return VAR_3;
}
