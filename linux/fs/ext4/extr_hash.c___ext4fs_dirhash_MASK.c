
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dx_hash_info {int hash_version; int hash; int minor_hash; scalar_t__* seed; } ;
typedef int buf ;
typedef int __u32 ;
 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,scalar_t__*,int) ;
 void FUNC_5 (char const*,int,int*,int) ;
 void FUNC_6 (char const*,int,int*,int) ;
 void FUNC_7 (char const*,int,int*,int) ;
 void FUNC_8 (char const*,int,int*,int) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, int VAR_2,
       struct dx_hash_info *VAR_3)
{
 __u32 VAR_4;
 __u32 VAR_5 = 0;
 const char *VAR_6;
 int VAR_7;
 __u32 VAR_8[8], VAR_9[4];
 void (*VAR_10)(const char *, int, __u32 *, int) =
    FUNC_5;


 VAR_9[0] = 0x67452301;
 VAR_9[1] = 0xefcdab89;
 VAR_9[2] = 0x98badcfe;
 VAR_9[3] = 0x10325476;


 if (VAR_3->seed) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if (VAR_3->seed[VAR_7]) {
    FUNC_4(VAR_9, VAR_3->seed, sizeof(VAR_9));
    break;
   }
  }
 }

 switch (VAR_3->hash_version) {
 case 130:
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  break;
 case 131:
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  break;
 case 132:
  VAR_10 = FUNC_6;

 case 133:
  VAR_6 = VAR_1;
  while (VAR_2 > 0) {
   (*VAR_10)(VAR_6, VAR_2, VAR_8, 8);
   FUNC_3(VAR_9, VAR_8);
   VAR_2 -= 32;
   VAR_6 += 32;
  }
  VAR_5 = VAR_9[2];
  VAR_4 = VAR_9[1];
  break;
 case 128:
  VAR_10 = FUNC_6;

 case 129:
  VAR_6 = VAR_1;
  while (VAR_2 > 0) {
   (*VAR_10)(VAR_6, VAR_2, VAR_8, 4);
   FUNC_0(VAR_9, VAR_8);
   VAR_2 -= 16;
   VAR_6 += 16;
  }
  VAR_4 = VAR_9[0];
  VAR_5 = VAR_9[1];
  break;
 default:
  VAR_3->hash = 0;
  return -1;
 }
 VAR_4 = VAR_4 & ~1;
 if (VAR_4 == (VAR_0 << 1))
  VAR_4 = (VAR_0 - 1) << 1;
 VAR_3->hash = VAR_4;
 VAR_3->minor_hash = VAR_5;
 return 0;
}
