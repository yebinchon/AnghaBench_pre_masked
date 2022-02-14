
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct adapter {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (struct adapter*,unsigned short,unsigned char) ;
 int FUNC_1 (struct adapter*,unsigned char) ;
 int FUNC_2 (struct adapter*,unsigned short) ;
 int FUNC_3 (struct adapter*,unsigned char) ;
 int FUNC_4 (struct adapter*,unsigned char) ;

void FUNC_5(struct adapter *VAR_3, unsigned char VAR_4, unsigned char VAR_5, unsigned short VAR_6)
{
 u8 VAR_7;

 if ((VAR_6 == VAR_2) ||
     (VAR_5 == VAR_0)) {

  VAR_7 = VAR_4;
 } else {

  if (VAR_5 == VAR_1) {

   VAR_7 = VAR_4 + 2;
  } else {

   VAR_7 = VAR_4 - 2;
  }
 }



 FUNC_3(VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_6);
 FUNC_4(VAR_3, VAR_5);

 FUNC_1(VAR_3, VAR_7);
 FUNC_0(VAR_3, VAR_6, VAR_5);
}
