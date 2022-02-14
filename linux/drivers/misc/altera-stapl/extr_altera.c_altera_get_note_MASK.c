
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef long u32 ;
typedef long s32 ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_4(u8 *VAR_2, s32 VAR_3,
   s32 *VAR_4, char *VAR_5, char *VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_1;
 u32 VAR_9 = 0L;
 u32 VAR_10 = 0L;
 u32 VAR_11 = 0L;
 u32 VAR_12 = 0L;
 int VAR_13 = 0;
 int VAR_14 = 0;
 char *VAR_15;
 char *VAR_16;
 int VAR_17;


 if (VAR_3 > 52L) {
  VAR_12 = FUNC_0(&VAR_2[0]);
  VAR_13 = (VAR_12 & 1L);
  VAR_14 = VAR_13 * 8;

  VAR_9 = FUNC_0(&VAR_2[8 + VAR_14]);
  VAR_10 = FUNC_0(&VAR_2[12 + VAR_14]);
  VAR_11 = FUNC_0(&VAR_2[44 + (2 * VAR_14)]);
 }

 if ((VAR_12 != 0x4A414D00L) && (VAR_12 != 0x4A414D01L))
  return -VAR_0;

 if (VAR_11 <= 0L)
  return VAR_8;

 if (VAR_4 == ((void*)0)) {




  for (VAR_17 = 0; (VAR_17 < VAR_11) &&
      (VAR_8 != 0); ++VAR_17) {
   VAR_15 = &VAR_2[VAR_9 +
     FUNC_0(
     &VAR_2[VAR_10 + (8 * VAR_17)])];
   if (VAR_5 && !FUNC_3(VAR_5, VAR_15, FUNC_2(VAR_15))) {
    VAR_8 = 0;

    VAR_16 = &VAR_2[VAR_9 +
      FUNC_0(
      &VAR_2[VAR_10 + (8 * VAR_17) + 4])];

    if (VAR_6 != ((void*)0))
     FUNC_1(VAR_6, VAR_16, VAR_7);

   }
  }
 } else {





  VAR_17 = *VAR_4;

  if ((VAR_17 >= 0) && (VAR_17 < VAR_11)) {
   VAR_8 = 0;

   if (VAR_5 != ((void*)0))
    FUNC_1(VAR_5, &VAR_2[VAR_9 +
      FUNC_0(
      &VAR_2[VAR_10 + (8 * VAR_17)])],
     VAR_7);

   if (VAR_6 != ((void*)0))
    FUNC_1(VAR_6, &VAR_2[VAR_9 +
      FUNC_0(
      &VAR_2[VAR_10 + (8 * VAR_17) + 4])],
     VAR_7);

   *VAR_4 = VAR_17 + 1;
  }
 }

 return VAR_8;
}
