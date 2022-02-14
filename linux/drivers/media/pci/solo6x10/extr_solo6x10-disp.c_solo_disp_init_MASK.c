
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int video_hsize; scalar_t__ video_type; int video_vsize; int fps; int nr_chans; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*,int ,int) ;
 int FUNC_3 (struct solo_dev*) ;
 int FUNC_4 (struct solo_dev*) ;

int FUNC_5(struct solo_dev *VAR_1)
{
 int VAR_2;

 VAR_1->video_hsize = 704;
 if (VAR_1->video_type == VAR_0) {
  VAR_1->video_vsize = 240;
  VAR_1->fps = 30;
 } else {
  VAR_1->video_vsize = 288;
  VAR_1->fps = 25;
 }

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_chans; VAR_2++)
  FUNC_2(VAR_1, FUNC_0(VAR_2), 1);

 return 0;
}
