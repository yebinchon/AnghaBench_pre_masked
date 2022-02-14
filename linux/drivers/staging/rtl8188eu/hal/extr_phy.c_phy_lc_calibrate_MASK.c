
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int ,int ,int ,int) ;
 int FUNC_2 (struct adapter*,int ,int ,int ) ;
 int FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (struct adapter*,int,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_6, bool VAR_7)
{
 u8 VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11;


 VAR_8 = FUNC_3(VAR_6, 0xd03);

 if ((VAR_8&0x70) != 0)
  FUNC_4(VAR_6, 0xd03, VAR_8&0x8F);
 else
  FUNC_4(VAR_6, VAR_0, 0xFF);

 if ((VAR_8&0x70) != 0) {


  VAR_9 = FUNC_2(VAR_6, VAR_3, VAR_1,
          VAR_5);


  if (VAR_7)
   VAR_10 = FUNC_2(VAR_6, VAR_4, VAR_1,
           VAR_5);



  FUNC_1(VAR_6, VAR_3, VAR_1, VAR_5,
          (VAR_9&0x8FFFF)|0x10000);


  if (VAR_7)
   FUNC_1(VAR_6, VAR_4, VAR_1, VAR_5,
           (VAR_10&0x8FFFF)|0x10000);
 }


 VAR_11 = FUNC_2(VAR_6, VAR_3, VAR_2, VAR_5);


 FUNC_1(VAR_6, VAR_3, VAR_2, VAR_5,
         VAR_11|0x08000);

 FUNC_0(100);


 if ((VAR_8&0x70) != 0) {


  FUNC_4(VAR_6, 0xd03, VAR_8);
  FUNC_1(VAR_6, VAR_3, VAR_1, VAR_5, VAR_9);


  if (VAR_7)
   FUNC_1(VAR_6, VAR_4, VAR_1, VAR_5,
           VAR_10);
 } else {

  FUNC_4(VAR_6, VAR_0, 0x00);
 }
}
