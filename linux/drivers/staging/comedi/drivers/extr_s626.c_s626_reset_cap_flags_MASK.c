
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct comedi_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_1,
     unsigned int VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_1(1);
 if (VAR_2 < 3)
  VAR_3 |= FUNC_2(1);
 else
  VAR_3 |= FUNC_3(1);

 FUNC_4(VAR_1, FUNC_0(VAR_2), ~VAR_0, VAR_3);
}
