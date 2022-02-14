
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;
 int FUNC_3 (struct adapter*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u8 FUNC_4(struct adapter *VAR_11, bool VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 u8 VAR_16 = 0x00;



 FUNC_3(VAR_11, VAR_8, VAR_1, 0x10008c1c);
 FUNC_3(VAR_11, VAR_5, VAR_1, 0x30008c1c);
 FUNC_3(VAR_11, VAR_7, VAR_1, 0x8214032a);
 FUNC_3(VAR_11, VAR_4, VAR_1, 0x28160000);


 FUNC_3(VAR_11, VAR_3, VAR_1, 0x00462911);


 FUNC_3(VAR_11, VAR_2, VAR_1, 0xf9000000);
 FUNC_3(VAR_11, VAR_2, VAR_1, 0xf8000000);

 FUNC_1(VAR_0);

 VAR_13 = FUNC_2(VAR_11, VAR_6, VAR_1);
 VAR_14 = FUNC_2(VAR_11, VAR_10, VAR_1);
 VAR_15 = FUNC_2(VAR_11, VAR_9, VAR_1);

 if (!(VAR_13 & FUNC_0(28)) &&
     (((VAR_14 & 0x03FF0000)>>16) != 0x142) &&
     (((VAR_15 & 0x03FF0000)>>16) != 0x42))
  VAR_16 |= 0x01;
 return VAR_16;
}
