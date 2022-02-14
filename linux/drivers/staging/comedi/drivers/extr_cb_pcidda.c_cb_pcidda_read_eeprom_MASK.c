
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidda_private* private; } ;
struct cb_pcidda_private {scalar_t__ daqio; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int const,int const) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_4,
       unsigned int VAR_5)
{
 struct cb_pcidda_private *VAR_6 = VAR_4->private;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 const int VAR_10 = 4;

 const int VAR_11 = 0x6;
 const int VAR_12 = 3;
 const int VAR_13 = 8;


 VAR_8 = VAR_3 | VAR_1 | VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
  VAR_8 |= FUNC_0(VAR_7);
 FUNC_3(VAR_8, VAR_6->daqio + VAR_0);


 FUNC_2(VAR_4, VAR_11, VAR_12);

 FUNC_2(VAR_4, VAR_5, VAR_13);

 VAR_9 = FUNC_1(VAR_4);


 VAR_8 &= ~VAR_3;
 FUNC_3(VAR_8, VAR_6->daqio + VAR_0);

 return VAR_9;
}
