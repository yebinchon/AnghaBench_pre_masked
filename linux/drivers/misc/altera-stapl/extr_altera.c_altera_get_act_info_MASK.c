
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct altera_procinfo {int* name; int attrs; struct altera_procinfo* next; } ;
typedef long s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 struct altera_procinfo* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_3,
     s32 VAR_4,
     int VAR_5,
     char **VAR_6,
     char **VAR_7,
     struct altera_procinfo **VAR_8)
{
 int VAR_9 = -VAR_0;
 struct altera_procinfo *VAR_10 = ((void*)0);
 struct altera_procinfo *VAR_11 = ((void*)0);
 u32 VAR_12 = 0L;
 u32 VAR_13 = 0L;
 u32 VAR_14 = 0L;
 u32 VAR_15 = 0L;
 u32 VAR_16 = 0L;
 u32 VAR_17 = 0L;
 u32 VAR_18 = 0L;
 u32 VAR_19 = 0L;
 u32 VAR_20 = 0L;
 u32 VAR_21 = 0L;
 u32 VAR_22 = 0L;
 u8 VAR_23 = 0;

 if (VAR_4 <= 52L)
  return VAR_9;

 VAR_12 = FUNC_0(&VAR_3[0]);

 if (VAR_12 != 0x4A414D01L)
  return VAR_9;

 VAR_13 = FUNC_0(&VAR_3[4]);
 VAR_14 = FUNC_0(&VAR_3[8]);
 VAR_15 = FUNC_0(&VAR_3[12]);
 VAR_16 = FUNC_0(&VAR_3[16]);
 VAR_17 = FUNC_0(&VAR_3[48]);
 VAR_18 = FUNC_0(&VAR_3[52]);

 if (VAR_5 >= VAR_17)
  return VAR_9;

 VAR_19 = FUNC_0(&VAR_3[VAR_13 + (12 * VAR_5)]);
 VAR_20 = FUNC_0(&VAR_3[VAR_13 + (12 * VAR_5) + 4]);
 VAR_21 = FUNC_0(&VAR_3[VAR_13 + (12 * VAR_5) + 8]);

 *VAR_6 = &VAR_3[VAR_15 + VAR_19];

 if (VAR_20 < (VAR_16 - VAR_15))
  *VAR_7 = &VAR_3[VAR_15 + VAR_20];

 do {
  VAR_22 = FUNC_0(
     &VAR_3[VAR_14 + (13 * VAR_21)]);
  VAR_23 =
   (VAR_3[VAR_14 + (13 * VAR_21) + 8] & 0x03);

  VAR_10 =
    FUNC_1(sizeof(struct altera_procinfo),
        VAR_2);

  if (VAR_10 == ((void*)0))
   VAR_9 = -VAR_1;
  else {
   VAR_10->name = &VAR_3[VAR_15 + VAR_22];
   VAR_10->attrs = VAR_23;
   VAR_10->next = ((void*)0);


   if (*VAR_8 == ((void*)0))
    *VAR_8 = VAR_10;
   else {
    VAR_11 = *VAR_8;
    while (VAR_11->next != ((void*)0))
     VAR_11 = VAR_11->next;
    VAR_11->next = VAR_10;
   }
  }

  VAR_21 = FUNC_0(
    &VAR_3[VAR_14 + (13 * VAR_21) + 4]);
 } while ((VAR_21 != 0) && (VAR_21 < VAR_18));

 return VAR_9;
}
