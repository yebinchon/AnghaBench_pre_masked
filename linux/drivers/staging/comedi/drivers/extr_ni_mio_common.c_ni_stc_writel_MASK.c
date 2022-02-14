
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int FUNC_0 (struct comedi_device*,unsigned int,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
     unsigned int VAR_1, int VAR_2)
{
 struct ni_private *VAR_3 = VAR_0->private;

 if (VAR_3->is_m_series) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
 } else {
  FUNC_1(VAR_0, VAR_1 >> 16, VAR_2);
  FUNC_1(VAR_0, VAR_1 & 0xffff, VAR_2 + 1);
 }
}
