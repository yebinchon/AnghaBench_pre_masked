
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int const,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int const,int const,int,int,int,int) ;
 int FUNC_6 (char*,int const) ;

int FUNC_7(u32 VAR_1, u64 VAR_2,
     u32 *VAR_3, u64 *VAR_4,
     const u32 *VAR_5)
{
 const int VAR_6 = FUNC_2(VAR_1);
 const int VAR_7 = FUNC_3(VAR_1);
 u32 VAR_8;
 int VAR_9;

 if (VAR_7 < 0 || VAR_7 >= 16) {
  FUNC_6("Invalid CPP target: %d\n", VAR_7);
  return -VAR_0;
 }

 if (VAR_6 == 0) {

  *VAR_3 = VAR_1;
  *VAR_4 = VAR_2;
  return 0;
 }


 if (!VAR_5)
  return -VAR_0;

 VAR_8 = VAR_5[VAR_7];

 *VAR_4 = VAR_2;
 VAR_9 = FUNC_5(VAR_4, VAR_6, VAR_7,
        ((VAR_8 >> 13) & 7), ((VAR_8 >> 12) & 1),
        ((VAR_8 >> 6) & 0x3f), ((VAR_8 >> 0) & 0x3f));
 if (VAR_9) {
  FUNC_6("Can't encode CPP address: %d\n", VAR_9);
  return VAR_9;
 }

 *VAR_3 = FUNC_0(VAR_7,
        FUNC_1(VAR_1),
        FUNC_4(VAR_1));

 return 0;
}
