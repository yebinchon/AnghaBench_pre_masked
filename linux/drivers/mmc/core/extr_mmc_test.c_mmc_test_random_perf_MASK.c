
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {unsigned long max_tfr; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (struct mmc_test_card*,int,int,unsigned long) ;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_1, int VAR_2)
{
 struct mmc_test_area *VAR_3 = &VAR_1->area;
 unsigned int VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 for (VAR_5 = 512; VAR_5 < VAR_3->max_tfr; VAR_5 <<= 1) {





  if (VAR_2) {
   VAR_4 = VAR_0;
   VAR_6 = FUNC_0(VAR_1, VAR_2, 0, VAR_5);
   if (VAR_6)
    return VAR_6;
   VAR_0 = VAR_4;
  }
  VAR_6 = FUNC_0(VAR_1, VAR_2, 1, VAR_5);
  if (VAR_6)
   return VAR_6;
 }
 VAR_5 = VAR_3->max_tfr;
 if (VAR_2) {
  VAR_4 = VAR_0;
  VAR_6 = FUNC_0(VAR_1, VAR_2, 0, VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_0 = VAR_4;
 }
 return FUNC_0(VAR_1, VAR_2, 1, VAR_5);
}
