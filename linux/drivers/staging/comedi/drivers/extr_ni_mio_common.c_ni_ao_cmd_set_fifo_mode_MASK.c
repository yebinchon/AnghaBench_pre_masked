
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int ao_mode2; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_10)
{
 struct ni_private *VAR_11 = VAR_10->private;

 FUNC_0(VAR_10, VAR_8, VAR_9);

 VAR_11->ao_mode2 &= ~VAR_2;



 VAR_11->ao_mode2 |= VAR_0;


 VAR_11->ao_mode2 &= ~VAR_3;
 FUNC_0(VAR_10, VAR_11->ao_mode2, VAR_4);


 FUNC_0(VAR_10, VAR_5, VAR_6);

 FUNC_0(VAR_10, VAR_7, VAR_9);


}
