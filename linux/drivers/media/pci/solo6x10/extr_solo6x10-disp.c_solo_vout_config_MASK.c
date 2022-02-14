
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int vout_hstart; int vout_vstart; int video_type; int nr_chans; scalar_t__ video_vsize; scalar_t__ video_hsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_17 ;
 int FUNC_11 (struct solo_dev*,int ,int) ;
 int FUNC_12 (struct solo_dev*) ;

__attribute__((used)) static void FUNC_13(struct solo_dev *VAR_18)
{
 VAR_18->vout_hstart = 6;
 VAR_18->vout_vstart = 8;

 FUNC_11(VAR_18, VAR_12,
         VAR_18->video_type |
         VAR_16 |
         VAR_15 |
         FUNC_7(0) |
         FUNC_5(0) |
         FUNC_6(0));

 FUNC_11(VAR_18, VAR_3,
         FUNC_3(VAR_18->vout_hstart) |
         FUNC_4(VAR_18->vout_hstart +
          VAR_18->video_hsize));

 FUNC_11(VAR_18, VAR_4,
         FUNC_9(VAR_18->vout_vstart) |
         FUNC_10(VAR_18->vout_vstart +
          VAR_18->video_vsize));

 FUNC_11(VAR_18, VAR_14,
         FUNC_2(VAR_18->video_hsize) |
         FUNC_8(VAR_18->video_vsize));


 FUNC_11(VAR_18, VAR_7,
         (0xa0 << 24) | (0x88 << 16) | (0xa0 << 8) | 0x88);
 FUNC_11(VAR_18, VAR_6,
         (0x10 << 24) | (0x8f << 16) | (0x10 << 8) | 0x8f);
 FUNC_11(VAR_18, VAR_5,
         (16 << 24) | (128 << 16) | (16 << 8) | 128);

 FUNC_11(VAR_18, VAR_9, VAR_10);

 FUNC_11(VAR_18, VAR_2, 0);

 FUNC_11(VAR_18, VAR_17, 0);
 FUNC_11(VAR_18, VAR_13, 0);

 FUNC_11(VAR_18, VAR_8, VAR_11 |
         FUNC_1(8) |
         FUNC_0(VAR_0));


 FUNC_12(VAR_18);


 FUNC_11(VAR_18, VAR_1,
         (1 << VAR_18->nr_chans) - 1);
}
