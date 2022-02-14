
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {struct mwifiex_histogram_data* hist_data; } ;
struct mwifiex_histogram_data {int * sig_str; int * noise_flr; int * snr; int * rx_rate; int num_samples; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct mwifiex_private *VAR_4)
{
 int VAR_5;
 struct mwifiex_histogram_data *VAR_6 = VAR_4->hist_data;

 FUNC_0(&VAR_6->num_samples, 0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(&VAR_6->rx_rate[VAR_5], 0);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(&VAR_6->snr[VAR_5], 0);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(&VAR_6->noise_flr[VAR_5], 0);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_0(&VAR_6->sig_str[VAR_5], 0);
}
