
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct solo_dev {scalar_t__ nr_chans; scalar_t__ nr_ext; int video_hsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct solo_dev*,int) ;
 int FUNC_1 (struct solo_dev*,scalar_t__,int) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*,scalar_t__,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct solo_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 u8 VAR_4;

 if (VAR_2 < VAR_1->nr_chans) {
  FUNC_3(VAR_1, VAR_2, VAR_3 ? 0 : VAR_1->video_hsize,
          VAR_3 ? 0 : FUNC_2(VAR_1),
          VAR_1->video_hsize, FUNC_2(VAR_1),
          VAR_3 ? 1 : 0);
  return 0;
 }

 if (VAR_2 >= VAR_1->nr_chans + VAR_1->nr_ext)
  return -VAR_0;

 VAR_4 = VAR_2 - VAR_1->nr_chans;


 if (VAR_4 < 4)
  return FUNC_1(VAR_1, VAR_4, VAR_3);


 return FUNC_0(VAR_1, VAR_3);
}
