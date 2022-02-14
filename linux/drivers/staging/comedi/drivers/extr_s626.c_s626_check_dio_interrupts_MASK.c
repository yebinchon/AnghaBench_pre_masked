
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct comedi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1)
{
 u16 VAR_2;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  VAR_2 = FUNC_1(VAR_1, FUNC_0(VAR_3));


  if (VAR_2) {
   FUNC_2(VAR_1, VAR_2, VAR_3);
   return;
  }
 }
}
