
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidda_private* private; } ;
struct cb_pcidda_private {scalar_t__ daqio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_2)
{
 struct cb_pcidda_private *VAR_3 = VAR_2->private;
 unsigned int VAR_4 = 0;
 int VAR_5;
 const int VAR_6 = 16;

 for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5++) {

  if (FUNC_0(VAR_3->daqio + VAR_0) & VAR_1)
   VAR_4 |= 1 << (VAR_6 - VAR_5);
 }

 return VAR_4;
}
