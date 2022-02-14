
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_4,
       unsigned int VAR_5, short VAR_6)
{
 struct ni_private *VAR_7 = VAR_4->private;
 unsigned int VAR_8 = 0;
 int VAR_9;

 if (VAR_7->is_m_series || VAR_5 > 1)
  return;





 if (VAR_5 == 0) {
  VAR_9 = VAR_0;
  if (VAR_6)
   VAR_8 = VAR_1;
 } else {
  VAR_9 = VAR_2;
  if (VAR_6)
   VAR_8 = VAR_3;
 }
 FUNC_0(VAR_4, VAR_8, VAR_9);
}
