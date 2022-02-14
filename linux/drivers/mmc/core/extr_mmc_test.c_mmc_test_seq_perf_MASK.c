
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct mmc_test_area {unsigned int max_tfr; unsigned long max_seg_sz; unsigned long max_segs; } ;
struct mmc_test_card {int card; struct mmc_test_area area; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct mmc_test_card*,unsigned int,unsigned int,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_test_card*,unsigned int,unsigned int,struct timespec64*,struct timespec64*) ;

__attribute__((used)) static int FUNC_4(struct mmc_test_card *VAR_1, int VAR_2,
        unsigned int VAR_3, int VAR_4)
{
 struct mmc_test_area *VAR_5 = &VAR_1->area;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct timespec64 VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = VAR_5->max_tfr;





 if (VAR_4) {
  unsigned long VAR_14;

  if (VAR_5->max_seg_sz >= VAR_0)
   VAR_14 = VAR_5->max_segs * VAR_0;
  else
   VAR_14 = VAR_5->max_segs * VAR_5->max_seg_sz;
  if (VAR_9 > VAR_14)
   VAR_9 = VAR_14;
 }

 VAR_10 = VAR_9 >> 9;
 VAR_6 = FUNC_2(VAR_1->card) / 4;
 if (VAR_3 > VAR_6 << 9)
  VAR_3 = VAR_6 << 9;
 VAR_8 = VAR_3 / VAR_9;
 VAR_6 &= 0xffff0000;

 FUNC_0(&VAR_11);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_13 = FUNC_1(VAR_1, VAR_9, VAR_6, VAR_2,
           VAR_4, 0);
  if (VAR_13)
   return VAR_13;
  VAR_6 += VAR_10;
 }
 FUNC_0(&VAR_12);

 FUNC_3(VAR_1, VAR_9, VAR_8, &VAR_11, &VAR_12);

 return 0;
}
