
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, bool VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  VAR_5 |= (VAR_0 | VAR_1);
 else
  VAR_5 &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_3, VAR_5, VAR_2);
}
