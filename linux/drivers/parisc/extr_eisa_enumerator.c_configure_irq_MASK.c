
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(const unsigned char *VAR_4)
{
 int VAR_5;
 u_int8_t VAR_6;
 int VAR_7;

 VAR_5=0;

 for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
  VAR_6 = FUNC_2(VAR_4+VAR_5);

  FUNC_3("IRQ %d ", VAR_6 & VAR_0);
  if (VAR_6 & VAR_3) {
   FUNC_1(VAR_6 & VAR_0);
  } else {
   FUNC_0(VAR_6 & VAR_0);
  }

  VAR_5+=2;



  if (!(VAR_6 & VAR_2)) {
   break;
  }
 }

 return VAR_5;
}
