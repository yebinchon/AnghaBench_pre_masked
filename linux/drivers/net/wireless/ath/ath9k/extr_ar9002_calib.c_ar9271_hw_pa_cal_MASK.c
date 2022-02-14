
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int prev_offset; int max_skipcount; int skipcount; } ;
struct ath_hw {TYPE_1__ pacal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int FUNC_0 (int**) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int VAR_25 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int,int) ;
 int FUNC_6 (struct ath_hw*,int) ;
 int FUNC_7 (struct ath_hw*,int**,unsigned int) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*,int,int ,int) ;
 int FUNC_10 (struct ath_hw*,int,int) ;
 int FUNC_11 (struct ath_hw*,int,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct ath_hw *VAR_26, bool VAR_27)
{
 u32 VAR_28;
 unsigned int VAR_29;
 u32 VAR_30[][2] = {
  { VAR_23, 0 },
  { VAR_17, 0 },
  { VAR_2, 0 },
  { VAR_7, 0 },
  { VAR_22, 0 },
  { VAR_14, 0 },
  { VAR_11, 0 },
  { VAR_9, 0 },
 };

 FUNC_7(VAR_26, VAR_30, FUNC_0(VAR_30));

 FUNC_2(VAR_26);

 FUNC_5(VAR_26, VAR_10, 1 << 0);

 FUNC_10(VAR_26, 0x9808, 1 << 27);

 FUNC_10(VAR_26, VAR_23, VAR_24);

 FUNC_10(VAR_26, VAR_17, VAR_19);

 FUNC_10(VAR_26, VAR_17, VAR_20);

 FUNC_10(VAR_26, VAR_17, VAR_18);

 FUNC_5(VAR_26, VAR_7, VAR_8);

 FUNC_5(VAR_26, VAR_11, VAR_13);

 FUNC_5(VAR_26, VAR_2, VAR_3);

 FUNC_5(VAR_26, VAR_2, VAR_4);

 FUNC_5(VAR_26, VAR_2, VAR_5);

 FUNC_5(VAR_26, VAR_2, VAR_6);

 FUNC_9(VAR_26, VAR_14, VAR_15, 7);




 FUNC_9(VAR_26, VAR_11, VAR_12, 0);

 FUNC_9(VAR_26, VAR_9, VAR_0, 0xfff);
 FUNC_8(VAR_26);





 FUNC_11(VAR_26, VAR_22, 0xca0358a0);
 FUNC_12(30);
 FUNC_9(VAR_26, VAR_10, VAR_1, 0);


 for (VAR_29 = 6; VAR_29 > 0; VAR_29--) {
  VAR_28 = FUNC_6(VAR_26, VAR_10);
  VAR_28 |= (1 << (20 + VAR_29));
  FUNC_11(VAR_26, VAR_10, VAR_28);
  FUNC_12(1);

  VAR_28 &= (~(0x1 << (20 + VAR_29)));
  VAR_28 |= (FUNC_3(FUNC_6(VAR_26, VAR_16),
         VAR_21)
       << (20 + VAR_29));
  FUNC_11(VAR_26, VAR_10, VAR_28);
 }

 VAR_28 = (VAR_28 >> 20) & 0x7f;


 if ((!VAR_27) && (VAR_26->pacal_info.prev_offset == VAR_28)) {
  if (VAR_26->pacal_info.max_skipcount < VAR_25)
   VAR_26->pacal_info.max_skipcount =
    2 * VAR_26->pacal_info.max_skipcount;
  VAR_26->pacal_info.skipcount = VAR_26->pacal_info.max_skipcount;
 } else {
  VAR_26->pacal_info.max_skipcount = 1;
  VAR_26->pacal_info.skipcount = 0;
  VAR_26->pacal_info.prev_offset = VAR_28;
 }


 FUNC_2(VAR_26);

 FUNC_10(VAR_26, VAR_10, 1 << 0);

 FUNC_5(VAR_26, 0x9808, 1 << 27);
 FUNC_8(VAR_26);

 FUNC_1(VAR_26);
 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_30); VAR_29++)
  FUNC_11(VAR_26, VAR_30[VAR_29][0], VAR_30[VAR_29][1]);

 FUNC_4(VAR_26);
}
