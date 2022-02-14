
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct comedi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (struct comedi_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3)
{
 u16 VAR_4;


 FUNC_4(VAR_3, VAR_1, VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  FUNC_4(VAR_3, FUNC_3(VAR_4), 0);

  FUNC_4(VAR_3, FUNC_0(VAR_4), 0xffff);

  FUNC_4(VAR_3, FUNC_2(VAR_4), 0);

  FUNC_4(VAR_3, FUNC_1(VAR_4), 0);
 }
}
