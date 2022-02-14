
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_sec; } ;
struct mmc_test_card {TYPE_1__* card; } ;
struct TYPE_2__ {unsigned int pref_erase; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct mmc_test_card*,unsigned long,unsigned int,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mmc_test_card*,unsigned long,unsigned int,struct timespec64*,struct timespec64*) ;
 unsigned int FUNC_4 (unsigned int) ;
 struct timespec64 FUNC_5 (struct timespec64,struct timespec64) ;

__attribute__((used)) static int FUNC_6(struct mmc_test_card *VAR_1, int VAR_2, int VAR_3,
        unsigned long VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11;
 unsigned int VAR_12;
 struct timespec64 VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = VAR_4 >> 9;

 VAR_7 = FUNC_2(VAR_1->card) / 4;
 VAR_8 = VAR_7 / VAR_1->card->pref_erase;
 VAR_9 = VAR_8 / VAR_12;

 FUNC_0(&VAR_13);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(&VAR_14);
  VAR_15 = FUNC_5(VAR_14, VAR_13);
  if (VAR_15.tv_sec >= 10)
   break;
  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 == VAR_10)
   VAR_11 -= 1;
  VAR_10 = VAR_11;
  VAR_5 = VAR_7 + VAR_1->card->pref_erase * VAR_11 +
      VAR_12 * FUNC_4(VAR_9);
  VAR_16 = FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2, 0, 0);
  if (VAR_16)
   return VAR_16;
 }
 if (VAR_3)
  FUNC_3(VAR_1, VAR_4, VAR_6, &VAR_13, &VAR_14);
 return 0;
}
