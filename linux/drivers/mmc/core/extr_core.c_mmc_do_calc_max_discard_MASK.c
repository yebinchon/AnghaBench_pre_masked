
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int max_busy_timeout; } ;
struct mmc_card {int erase_shift; unsigned int pref_erase; unsigned int erase_size; int eg_boundary; struct mmc_host* host; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 unsigned int FUNC_1 (struct mmc_card*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct mmc_card *VAR_2,
         unsigned int VAR_3)
{
 struct mmc_host *VAR_4 = VAR_2->host;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8 = 0, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = VAR_4->max_busy_timeout ?
   VAR_4->max_busy_timeout : VAR_0;

 if (VAR_2->erase_shift) {
  VAR_9 = VAR_1 >> VAR_2->erase_shift;
  VAR_10 = VAR_2->pref_erase >> VAR_2->erase_shift;
 } else if (FUNC_0(VAR_2)) {
  VAR_9 = VAR_1;
  VAR_10 = VAR_2->pref_erase;
 } else {
  VAR_9 = VAR_1 / VAR_2->erase_size;
  VAR_10 = VAR_2->pref_erase / VAR_2->erase_size;
 }
 do {
  VAR_7 = 0;
  for (VAR_6 = 1; VAR_6 && VAR_6 <= VAR_9 && VAR_9 - VAR_6 >= VAR_8; VAR_6 <<= 1) {
   VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_8 + VAR_6);

   if (VAR_8 + VAR_6 > VAR_10 && VAR_11 > VAR_13)
    break;

   if (VAR_11 < VAR_12)
    break;
   VAR_12 = VAR_11;
   VAR_7 = VAR_6;
  }
  VAR_8 += VAR_7;
 } while (VAR_7);

 if (!VAR_8)
  return 0;
 if (VAR_8 == 1)
  VAR_2->eg_boundary = 1;
 else
  VAR_8--;


 if (VAR_2->erase_shift)
  VAR_5 = VAR_8 << VAR_2->erase_shift;
 else if (FUNC_0(VAR_2))
  VAR_5 = VAR_8 + 1;
 else
  VAR_5 = VAR_8 * VAR_2->erase_size;

 return VAR_5;
}
