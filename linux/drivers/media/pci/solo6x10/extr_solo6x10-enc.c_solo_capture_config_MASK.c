
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {scalar_t__ type; unsigned long video_hsize; unsigned long video_vsize; int nr_chans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int VAR_12 ;
 int FUNC_9 (struct solo_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (struct solo_dev*,int,void*,int,int,int ,int ) ;
 int FUNC_13 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_14(struct solo_dev *VAR_22)
{
 unsigned long VAR_23;
 unsigned long VAR_24;
 void *VAR_25;
 int VAR_26;

 FUNC_13(VAR_22, VAR_1,
         FUNC_4((FUNC_2(VAR_22)
       - VAR_3) >> 16)
         | FUNC_0(FUNC_1(VAR_22) >> 16));


 if (VAR_22->type == VAR_5) {


  FUNC_13(VAR_22, VAR_2,
          (1 << 17) | FUNC_5(2) |
          FUNC_3(36));
 } else {
  FUNC_13(VAR_22, VAR_2,
          (1 << 17) | FUNC_5(2) |
          FUNC_3(32));
 }


 VAR_24 = VAR_22->video_hsize;
 VAR_23 = VAR_22->video_vsize;
 FUNC_13(VAR_22, VAR_7,
         FUNC_6(VAR_24 / 16) |
         FUNC_8(VAR_23 / 8) |
         FUNC_7(VAR_23 / 16));


 VAR_24 = VAR_22->video_hsize / 2;
 VAR_23 = VAR_22->video_vsize;
 FUNC_13(VAR_22, VAR_8,
         FUNC_6(VAR_24 / 16) |
         FUNC_8(VAR_23 / 8) |
         FUNC_7(VAR_23 / 16));


 VAR_24 = VAR_22->video_hsize / 2;
 VAR_23 = VAR_22->video_vsize / 2;
 FUNC_13(VAR_22, VAR_9,
         FUNC_6(VAR_24 / 16) |
         FUNC_8(VAR_23 / 8) |
         FUNC_7(VAR_23 / 16));


 VAR_24 = VAR_22->video_hsize / 3;
 VAR_23 = VAR_22->video_vsize / 3;
 FUNC_13(VAR_22, VAR_10,
         FUNC_6(VAR_24 / 16) |
         FUNC_8(VAR_23 / 8) |
         FUNC_7(VAR_23 / 16));


 VAR_24 = VAR_22->video_hsize / 4;
 VAR_23 = VAR_22->video_vsize / 2;
 FUNC_13(VAR_22, VAR_11,
         FUNC_6(VAR_24 / 16) |
         FUNC_8(VAR_23 / 8) |
         FUNC_7(VAR_23 / 16));


 VAR_24 = VAR_20;
 VAR_23 = VAR_21;
 FUNC_13(VAR_22, VAR_6,
         FUNC_6(VAR_24 / 16) |
         FUNC_8(VAR_23 / 16) |
         FUNC_7(VAR_23 / 16));


 FUNC_13(VAR_22, VAR_14, 0);
 FUNC_13(VAR_22, VAR_13, VAR_12 >> 16);
 FUNC_13(VAR_22, VAR_15,
         0xF0 << 16 | 0x80 << 8 | 0x80);

 if (VAR_22->type == VAR_4)
  FUNC_13(VAR_22, VAR_17,
          VAR_16 | VAR_19);
 else
  FUNC_13(VAR_22, VAR_17, VAR_18
          | VAR_16 | VAR_19);


 VAR_25 = FUNC_11(FUNC_9(VAR_22), VAR_0);
 if (!VAR_25)
  return;

 for (VAR_26 = 0; VAR_26 < VAR_22->nr_chans; VAR_26++) {
  FUNC_12(VAR_22, 1, VAR_25,
        VAR_12 +
        (FUNC_9(VAR_22) * VAR_26),
        FUNC_9(VAR_22), 0, 0);
 }
 FUNC_10(VAR_25);
}
