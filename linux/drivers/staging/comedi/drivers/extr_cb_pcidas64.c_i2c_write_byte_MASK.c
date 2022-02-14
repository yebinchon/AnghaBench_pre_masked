
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 unsigned int VAR_3 = 8;

 for (VAR_2 = 1 << (VAR_3 - 1); VAR_2; VAR_2 >>= 1) {
  FUNC_0(VAR_0, 0);
  if ((VAR_1 & VAR_2))
   FUNC_1(VAR_0, 1);
  else
   FUNC_1(VAR_0, 0);
  FUNC_0(VAR_0, 1);
 }
}
