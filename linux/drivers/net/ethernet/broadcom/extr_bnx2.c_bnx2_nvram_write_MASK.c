
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2 {TYPE_1__* flash_info; } ;
struct TYPE_2__ {int flags; int page_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*,int) ;
 int FUNC_6 (struct bnx2*,int,int *,int) ;
 int FUNC_7 (struct bnx2*,int,int *,int) ;
 int FUNC_8 (struct bnx2*,int,int *,int) ;
 int FUNC_9 (struct bnx2*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_13(struct bnx2 *VAR_5, u32 VAR_6, u8 *VAR_7,
  int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 u8 *VAR_12, VAR_13[4], VAR_14[4], *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 int VAR_17 = 0;
 int VAR_18, VAR_19;

 VAR_12 = VAR_7;
 VAR_10 = VAR_6;
 VAR_11 = VAR_8;
 VAR_18 = VAR_19 = 0;

 if ((VAR_18 = (VAR_10 & 3))) {
  VAR_10 &= ~3;
  VAR_11 += VAR_18;
  if (VAR_11 < 4)
   VAR_11 = 4;
  if ((VAR_17 = FUNC_6(VAR_5, VAR_10, VAR_13, 4)))
   return VAR_17;
 }

 if (VAR_11 & 3) {
  VAR_19 = 4 - (VAR_11 & 3);
  VAR_11 += VAR_19;
  if ((VAR_17 = FUNC_6(VAR_5, VAR_10 + VAR_11 - 4, VAR_14, 4)))
   return VAR_17;
 }

 if (VAR_18 || VAR_19) {
  VAR_15 = FUNC_11(VAR_11, VAR_4);
  if (!VAR_15)
   return -VAR_3;
  if (VAR_18) {
   FUNC_12(VAR_15, VAR_13, 4);
  }
  if (VAR_19) {
   FUNC_12(VAR_15 + VAR_11 - 4, VAR_14, 4);
  }
  FUNC_12(VAR_15 + VAR_18, VAR_7, VAR_8);
  VAR_12 = VAR_15;
 }

 if (!(VAR_5->flash_info->flags & VAR_2)) {
  VAR_16 = FUNC_11(264, VAR_4);
  if (!VAR_16) {
   VAR_17 = -VAR_3;
   goto nvram_write_end;
  }
 }

 VAR_9 = 0;
 while ((VAR_9 < VAR_11) && (VAR_17 == 0)) {
  u32 VAR_20, VAR_21, VAR_22, VAR_23;
  u32 VAR_24, VAR_25;
  int VAR_26;


  VAR_20 = VAR_10 + VAR_9;
  VAR_20 -= (VAR_20 % VAR_5->flash_info->page_size);

  VAR_21 = VAR_20 + VAR_5->flash_info->page_size;

  VAR_22 = (VAR_9 == 0) ? VAR_10 : VAR_20;

  VAR_23 = (VAR_21 > VAR_10 + VAR_11) ?
   (VAR_10 + VAR_11) : VAR_21;


  if ((VAR_17 = FUNC_0(VAR_5)) != 0)
   goto nvram_write_end;


  FUNC_3(VAR_5);

  VAR_25 = VAR_0;
  if (!(VAR_5->flash_info->flags & VAR_2)) {
   int VAR_27;



   for (VAR_27 = 0; VAR_27 < VAR_5->flash_info->page_size; VAR_27 += 4) {
    if (VAR_27 == (VAR_5->flash_info->page_size - 4)) {
     VAR_25 |= VAR_1;
    }
    VAR_17 = FUNC_7(VAR_5,
     VAR_20 + VAR_27,
     &VAR_16[VAR_27],
     VAR_25);

    if (VAR_17)
     goto nvram_write_end;

    VAR_25 = 0;
   }
  }


  if ((VAR_17 = FUNC_4(VAR_5)) != 0)
   goto nvram_write_end;



  VAR_26 = 0;
  if (!(VAR_5->flash_info->flags & VAR_2)) {

   if ((VAR_17 = FUNC_5(VAR_5, VAR_20)) != 0)
    goto nvram_write_end;


   FUNC_4(VAR_5);

   for (VAR_24 = VAR_20; VAR_24 < VAR_22;
    VAR_24 += 4, VAR_26 += 4) {

    VAR_17 = FUNC_8(VAR_5, VAR_24,
     &VAR_16[VAR_26], VAR_25);

    if (VAR_17 != 0)
     goto nvram_write_end;

    VAR_25 = 0;
   }
  }


  for (VAR_24 = VAR_22; VAR_24 < VAR_23; VAR_24 += 4, VAR_26 += 4) {
   if ((VAR_24 == VAR_21 - 4) ||
    ((VAR_5->flash_info->flags & VAR_2) &&
     (VAR_24 == VAR_23 - 4))) {

    VAR_25 |= VAR_1;
   }
   VAR_17 = FUNC_8(VAR_5, VAR_24, VAR_12,
    VAR_25);

   if (VAR_17 != 0)
    goto nvram_write_end;

   VAR_25 = 0;
   VAR_12 += 4;
  }



  if (!(VAR_5->flash_info->flags & VAR_2)) {
   for (VAR_24 = VAR_23; VAR_24 < VAR_21;
    VAR_24 += 4, VAR_26 += 4) {

    if (VAR_24 == VAR_21-4) {
     VAR_25 = VAR_1;
                  }
    VAR_17 = FUNC_8(VAR_5, VAR_24,
     &VAR_16[VAR_26], VAR_25);

    if (VAR_17 != 0)
     goto nvram_write_end;

    VAR_25 = 0;
   }
  }


  FUNC_2(VAR_5);


  FUNC_1(VAR_5);
  FUNC_9(VAR_5);


  VAR_9 += VAR_23 - VAR_22;
 }

nvram_write_end:
 FUNC_10(VAR_16);
 FUNC_10(VAR_15);
 return VAR_17;
}
