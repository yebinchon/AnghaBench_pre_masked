
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(u8 VAR_6, u8 VAR_7, u32 VAR_8,
     u32 VAR_9, u32 *VAR_10)
{
 u32 VAR_11;
 u64 VAR_12;
 int VAR_13;


 VAR_11 = VAR_5;
 do {
  FUNC_2(VAR_4, VAR_12);
  if (VAR_12 & FUNC_0(VAR_2)) {
   VAR_13 = -VAR_0;
   continue;
  }
  VAR_13 = 0;
  break;
 } while (--VAR_11);

 if (VAR_13)
  return VAR_13;


 FUNC_3(VAR_3, VAR_9);


 VAR_12 = FUNC_0(VAR_2) |
        (VAR_8 & FUNC_1(13, 0)) << 16 |
        (VAR_7 << 8) |
        VAR_6;
 FUNC_3(VAR_4, VAR_12);


 VAR_11 = VAR_5;
 do {
  FUNC_2(VAR_4, VAR_12);
  if (VAR_12 & FUNC_0(VAR_2)) {
   VAR_13 = -VAR_0;
   continue;
  }

  if (VAR_12 & 0xff)
   return -VAR_1;

  if (VAR_10) {
   FUNC_2(VAR_3, VAR_12);
   *VAR_10 = VAR_12;
  }
  VAR_13 = 0;
  break;
 } while (--VAR_11);

 return VAR_13;
}
