
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int nr_chans; int video_hsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct solo_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct solo_dev*,int,int,int) ;
 int FUNC_6 (struct solo_dev*,int ,int) ;
 int FUNC_7 (struct solo_dev*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct solo_dev *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_8->nr_chans; VAR_9++) {

  FUNC_5(VAR_8, VAR_9 * VAR_2, 0x0000,
        VAR_2);


  FUNC_5(VAR_8, VAR_1 +
        (VAR_9 * VAR_3 * 2) +
        VAR_3, 0x0000,
        VAR_3);


  FUNC_7(VAR_8, VAR_9, VAR_0);
 }


 FUNC_6(VAR_8, VAR_6, FUNC_1(0) |
         (FUNC_0(VAR_8) >> 16));
 FUNC_6(VAR_8, VAR_7,
         FUNC_2(3) |
         FUNC_4(VAR_8->video_hsize / 16)

         | FUNC_3(10));

 FUNC_6(VAR_8, VAR_5, 0);
 FUNC_6(VAR_8, VAR_4, 0);
}
