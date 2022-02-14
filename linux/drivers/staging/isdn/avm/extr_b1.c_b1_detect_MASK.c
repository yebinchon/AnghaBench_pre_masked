
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum avmcardtype { ____Placeholder_avmcardtype } avmcardtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (unsigned int,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(unsigned int VAR_3, enum avmcardtype VAR_4)
{
 int VAR_5, VAR_6;




 if ((FUNC_5(VAR_3 + VAR_0) & 0xfc)
     || (FUNC_5(VAR_3 + VAR_1) & 0xfc))
  return 1;



 FUNC_4(VAR_3, VAR_0, 0x2);

 if ((FUNC_5(VAR_3 + VAR_0) & 0xfe) != 0x2
                                                    )
  return 2;



 FUNC_4(VAR_3, VAR_0, 0x0);
 FUNC_4(VAR_3, VAR_1, 0x0);
 if ((FUNC_5(VAR_3 + VAR_0) & 0xfe)
     || (FUNC_5(VAR_3 + VAR_1) & 0xfe))
  return 3;

 for (VAR_5 = !0, VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  FUNC_3(VAR_3, VAR_4, VAR_5);
  if (FUNC_1(VAR_3, VAR_4) != VAR_5)
   return 4;
  VAR_5 = !VAR_5;
 }

 if (VAR_4 == VAR_2)
  return 0;

 if ((FUNC_2(VAR_3, FUNC_0(VAR_4)) & 0x0f) != 0x01)
  return 5;

 return 0;
}
