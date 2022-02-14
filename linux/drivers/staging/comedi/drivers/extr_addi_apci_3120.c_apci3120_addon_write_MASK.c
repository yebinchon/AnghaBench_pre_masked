
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct apci3120_private* private; } ;
struct apci3120_private {scalar_t__ addon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 struct apci3120_private *VAR_5 = VAR_2->private;



 FUNC_0(VAR_4, VAR_5->addon + VAR_0);
 FUNC_0(VAR_3 & 0xffff, VAR_5->addon + VAR_1);

 FUNC_0(VAR_4 + 2, VAR_5->addon + VAR_0);
 FUNC_0((VAR_3 >> 16) & 0xffff, VAR_5->addon + VAR_1);
}
