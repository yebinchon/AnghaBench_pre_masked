
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct mmc_test_area {unsigned long max_seg_sz; unsigned long max_segs; int blocks; int sg_len; int sg; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct mmc_test_card*,unsigned long,int,int) ;
 int FUNC_2 (struct mmc_test_card*,unsigned int,int) ;
 int FUNC_3 (struct mmc_test_card*,int ,int ,unsigned int,int ,int,int,int) ;
 int FUNC_4 (struct mmc_test_card*,unsigned long,int,struct timespec64*,struct timespec64*) ;

__attribute__((used)) static int FUNC_5(struct mmc_test_card *VAR_1, unsigned long VAR_2,
    unsigned int VAR_3, int VAR_4,
    int VAR_5, int VAR_6, int VAR_7,
    bool VAR_8, int VAR_9)
{
 struct timespec64 VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 struct mmc_test_area *VAR_14 = &VAR_1->area;





 if (VAR_5) {
  struct mmc_test_area *VAR_15 = &VAR_1->area;
  unsigned long VAR_16;

  if (VAR_15->max_seg_sz >= VAR_0)
   VAR_16 = VAR_15->max_segs * VAR_0;
  else
   VAR_16 = VAR_15->max_segs * VAR_15->max_seg_sz;
  if (VAR_2 > VAR_16)
   VAR_2 = VAR_16;
 }

 VAR_12 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_6)
  FUNC_0(&VAR_10);
 if (VAR_8)
  VAR_12 = FUNC_3(VAR_1, VAR_14->sg, VAR_14->sg_len,
     VAR_3, VAR_14->blocks, 512, VAR_4, VAR_7);
 else
  for (VAR_13 = 0; VAR_13 < VAR_7 && VAR_12 == 0; VAR_13++) {
   VAR_12 = FUNC_2(VAR_1, VAR_3, VAR_4);
   VAR_3 += VAR_2 >> 9;
  }

 if (VAR_12)
  return VAR_12;

 if (VAR_6)
  FUNC_0(&VAR_11);

 if (VAR_6)
  FUNC_4(VAR_1, VAR_2, VAR_7, &VAR_10, &VAR_11);

 return 0;
}
