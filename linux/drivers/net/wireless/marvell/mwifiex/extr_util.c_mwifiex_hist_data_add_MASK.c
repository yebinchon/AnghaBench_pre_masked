
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {struct mwifiex_histogram_data* hist_data; } ;
struct mwifiex_histogram_data {int num_samples; } ;
typedef int s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_private*) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ) ;

void FUNC_3(struct mwifiex_private *VAR_1,
      u8 VAR_2, s8 VAR_3, s8 VAR_4)
{
 struct mwifiex_histogram_data *VAR_5 = VAR_1->hist_data;

 if (FUNC_0(&VAR_5->num_samples) > VAR_0)
  FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
