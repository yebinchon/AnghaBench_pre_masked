
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct comedi_device *VAR_0,
           unsigned int VAR_1)
{
 struct ni_private *VAR_2 = VAR_0->private;

 if (VAR_1 >= FUNC_0(0)) {

  VAR_1 -= FUNC_0(0);
 }
 return (VAR_2->is_m_series)
   ? FUNC_1(VAR_0, VAR_1)
   : FUNC_2(VAR_0, VAR_1);
}
