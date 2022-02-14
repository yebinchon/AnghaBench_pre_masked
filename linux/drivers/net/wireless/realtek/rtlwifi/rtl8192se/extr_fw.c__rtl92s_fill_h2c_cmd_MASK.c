
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t*,int,int,int) ;
 int FUNC_2 (size_t*,size_t*,size_t) ;
 int FUNC_3 (size_t*,int ,size_t) ;
 size_t* FUNC_4 (struct sk_buff*,size_t) ;

__attribute__((used)) static u32 FUNC_5(struct sk_buff *VAR_1, u32 VAR_2,
    u32 VAR_3, u32 *VAR_4, u32 *VAR_5,
    u8 **VAR_6, u8 *VAR_7)
{
 u32 VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 u32 VAR_11 = 0;
 u8 *VAR_12;
 u8 VAR_13 = 0;

 do {

  VAR_9 = VAR_0 + FUNC_0(VAR_5[VAR_13], 8);


  if (VAR_2 < VAR_8 + VAR_9 + VAR_10)
   break;


  VAR_12 = FUNC_4(VAR_1, (u32)VAR_9);
  FUNC_3((VAR_12 + VAR_8 + VAR_10), 0, VAR_9);


  FUNC_1((VAR_12 + VAR_8 + VAR_10),
          0, 16, VAR_5[VAR_13]);


  FUNC_1((VAR_12 + VAR_8 + VAR_10),
          16, 8, VAR_4[VAR_13]);


  *VAR_7 = *VAR_7 % 0x80;
  FUNC_1((VAR_12 + VAR_8 + VAR_10),
          24, 7, *VAR_7);
  ++*VAR_7;


  FUNC_2((VAR_12 + VAR_8 + VAR_10 +
   VAR_0), VAR_6[VAR_13], VAR_5[VAR_13]);



  if (VAR_13 < VAR_3 - 1)
   FUNC_1((VAR_12 + VAR_11),
           31, 1, 1);

  VAR_11 = VAR_8;

  VAR_8 += VAR_9;
 } while (++VAR_13 < VAR_3);

 return VAR_8;
}
