
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int video_hsize; } ;


 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct solo_dev *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 if (!VAR_1) {
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
   FUNC_1(VAR_0, VAR_5, VAR_0->video_hsize,
           FUNC_0(VAR_0),
           VAR_0->video_hsize,
           FUNC_0(VAR_0), 0);
  return 0;
 }

 VAR_3 = FUNC_0(VAR_0) / 4;
 VAR_4 = VAR_0->video_hsize / 4;

 for (VAR_2 = 0, VAR_5 = 0; VAR_5 < 4; VAR_5++, VAR_2 += VAR_3) {
  FUNC_1(VAR_0, VAR_5 * 4, 0, VAR_2, VAR_4,
          VAR_2 + VAR_3, 5);
  FUNC_1(VAR_0, (VAR_5 * 4) + 1, VAR_4, VAR_2,
          VAR_4 * 2, VAR_2 + VAR_3, 5);
  FUNC_1(VAR_0, (VAR_5 * 4) + 2, VAR_4 * 2, VAR_2,
          VAR_4 * 3, VAR_2 + VAR_3, 5);
  FUNC_1(VAR_0, (VAR_5 * 4) + 3, VAR_4 * 3, VAR_2,
          VAR_0->video_hsize, VAR_2 + VAR_3, 5);
 }

 return 0;
}
