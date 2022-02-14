
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mace_private ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,unsigned int,int ) ;
 int FUNC_1 (int *,unsigned int,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(mace_private *VAR_13, unsigned int VAR_14, char *VAR_15)
{
  int VAR_16;
  int VAR_17 = 0;


  FUNC_1(VAR_13, VAR_14, VAR_1, 1);
  while (FUNC_0(VAR_13, VAR_14, VAR_1) & 0x01) {
                                                                       ;
    if(++VAR_17 > 500)
    {
 FUNC_2("reset failed, card removed?\n");
     return -1;
    }
    FUNC_3(1);
  }
  FUNC_1(VAR_13, VAR_14, VAR_1, 0);


  FUNC_1(VAR_13, VAR_14, VAR_2, 0x0F);

  FUNC_1(VAR_13,VAR_14, VAR_11, 0);
  FUNC_1(VAR_13, VAR_14, VAR_6, 0xFF);
  switch (VAR_12) {
    case 1:
      FUNC_1(VAR_13, VAR_14, VAR_10, 0x02);
      break;
    case 2:
      FUNC_1(VAR_13, VAR_14, VAR_10, 0x00);
      break;
    default:
      FUNC_1(VAR_13, VAR_14, VAR_9, 4);



      break;
  }

  FUNC_1(VAR_13, VAR_14, VAR_3, VAR_4 | VAR_5);

  VAR_17 = 0;
  while (FUNC_0(VAR_13, VAR_14, VAR_3) & VAR_4)
  {
   if(++ VAR_17 > 500)
   {
  FUNC_2("ADDRCHG timeout, card removed?\n");
    return -1;
   }
  }

  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
    FUNC_1(VAR_13, VAR_14, VAR_8, VAR_15[VAR_16]);




  FUNC_1(VAR_13, VAR_14, VAR_7, 0x00);
  return 0;
}
