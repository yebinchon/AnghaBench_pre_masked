
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct solo_dev {int nr_chans; int video_hsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct solo_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_2 * 4;

 if (VAR_4 >= VAR_1->nr_chans)
  return -VAR_0;

 if (!VAR_3) {
  u8 VAR_5;

  for (VAR_5 = VAR_4; VAR_5 < VAR_4 + 4; VAR_5++)
   FUNC_1(VAR_1, VAR_5, VAR_1->video_hsize,
           FUNC_0(VAR_1),
           VAR_1->video_hsize,
           FUNC_0(VAR_1), 0);
  return 0;
 }


 FUNC_1(VAR_1, VAR_4, 0, 0, VAR_1->video_hsize / 2,
         FUNC_0(VAR_1) / 2, 3);
 FUNC_1(VAR_1, VAR_4 + 1, VAR_1->video_hsize / 2, 0,
         VAR_1->video_hsize, FUNC_0(VAR_1) / 2, 3);

 FUNC_1(VAR_1, VAR_4 + 2, 0, FUNC_0(VAR_1) / 2,
         VAR_1->video_hsize / 2, FUNC_0(VAR_1), 3);
 FUNC_1(VAR_1, VAR_4 + 3, VAR_1->video_hsize / 2,
         FUNC_0(VAR_1) / 2, VAR_1->video_hsize,
         FUNC_0(VAR_1), 3);

 return 0;
}
