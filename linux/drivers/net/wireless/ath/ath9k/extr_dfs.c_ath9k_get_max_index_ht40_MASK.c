
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_dfs_fft_40 {int upper_bins; int lower_bins; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ath9k_dfs_fft_40 *VAR_0,
        bool VAR_1, bool VAR_2)
{
 const int VAR_3 = 64;

 if (VAR_1 && VAR_2) {

  VAR_1 = FUNC_0(VAR_0->lower_bins) != 0;
  VAR_2 = FUNC_0(VAR_0->upper_bins) != 0;


  if (VAR_1 && VAR_2) {
   int VAR_4 = FUNC_2(VAR_0->lower_bins);
   int VAR_5 = FUNC_2(VAR_0->upper_bins);
   if (VAR_5 > VAR_4)
    VAR_1 = 0;
   else
    VAR_2 = 0;
  }
 }
 if (VAR_1)
  return FUNC_1(VAR_0->lower_bins);
 return FUNC_1(VAR_0->upper_bins) + VAR_3;
}
