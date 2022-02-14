
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int data_to_crc ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,int*,int,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static u8 FUNC_3(u8 VAR_8, u8 VAR_9, u32 VAR_10)
{
 const u8 VAR_11 = VAR_5;
 u8 VAR_12, VAR_13 = 0;
 static u8 VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16;

 if (!VAR_14) {
  FUNC_2(VAR_7, 0x07);
  VAR_14 = 1;
 }






 if ((VAR_11 >> VAR_1) & 1)
  VAR_15 |= (VAR_10 & 0xFFF00000) | ((VAR_10 & 0xFFF) << 8);

 if ((VAR_11 >> VAR_2) & 1)
  VAR_15 |= ((VAR_9 & 0xF) << 4);

 if ((VAR_11 >> VAR_3) & 1)
  VAR_15 |= (VAR_8 & 0xF);


 VAR_16 = FUNC_0(VAR_15);

 VAR_12 = FUNC_1(VAR_7,
     (u8 *)&VAR_16, sizeof(VAR_16), VAR_6);
 VAR_13 |=
     ((VAR_11 >>
       VAR_0) & 1) << 7;

 if ((VAR_11 >>
      VAR_4) & 1)
  VAR_13 |= ((VAR_8 & 0xF) << 3) | (VAR_12 & 0x7);
 else
  VAR_13 |= VAR_12 & 0x7F;

 return VAR_13;
}
