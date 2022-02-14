
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int* FUNC_2 (int const*,int,int ) ;

bool FUNC_3(const u8 *VAR_0, int VAR_1,
        u64 *VAR_2)
{
 const u8 * VAR_3;

 if (VAR_1 < 7)
  return 0;
 switch (VAR_0[0] & 0x7f) {
 case 0x70:
 case 0x71:
  if (VAR_0[0] & 0x80) {
   *VAR_2 = FUNC_0(&VAR_0[3]);
   return 1;
  }
  return 0;
 case 0x72:
 case 0x73:
  VAR_3 = FUNC_2(VAR_0, VAR_1,
        0 );
  if (VAR_3 && (0xa == VAR_3[1])) {
   *VAR_2 = FUNC_1(&VAR_3[4]);
   return 1;
  }
  return 0;
 default:
  return 0;
 }
}
