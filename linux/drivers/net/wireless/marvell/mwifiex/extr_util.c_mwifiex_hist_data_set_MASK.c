
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mwifiex_private {struct mwifiex_histogram_data* hist_data; } ;
struct mwifiex_histogram_data {int * sig_str; int * noise_flr; int * snr; int * rx_rate; int num_samples; } ;
typedef int s8 ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mwifiex_private *VAR_0, u8 VAR_1, s8 VAR_2,
      s8 VAR_3)
{
 struct mwifiex_histogram_data *VAR_4 = VAR_0->hist_data;
 s8 VAR_5 = -VAR_3;
 s8 VAR_6 = VAR_2 - VAR_3;

 FUNC_0(&VAR_4->num_samples);
 FUNC_0(&VAR_4->rx_rate[VAR_1]);
 FUNC_0(&VAR_4->snr[VAR_2 + 128]);
 FUNC_0(&VAR_4->noise_flr[VAR_5 + 128]);
 FUNC_0(&VAR_4->sig_str[VAR_6 + 128]);
}
