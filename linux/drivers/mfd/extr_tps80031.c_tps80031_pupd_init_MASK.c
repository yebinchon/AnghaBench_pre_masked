
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps80031_pupd_init_data {size_t input_pin; scalar_t__ setting; } ;
struct tps80031_pupd_data {int pulldown_bit; int pullup_bit; int reg; } ;
struct tps80031_platform_data {int pupd_init_data_size; struct tps80031_pupd_init_data* pupd_init_data; } ;
struct tps80031 {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tps80031_pupd_data* VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct tps80031 *VAR_4,
          struct tps80031_platform_data *VAR_5)
{
 struct tps80031_pupd_init_data *VAR_6 = VAR_5->pupd_init_data;
 int VAR_7 = VAR_5->pupd_init_data_size;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
  struct tps80031_pupd_init_data *VAR_9 = &VAR_6[VAR_8];
  const struct tps80031_pupd_data *VAR_10 =
   &VAR_3[VAR_9->input_pin];
  u8 VAR_11 = 0;
  u8 VAR_12 = VAR_10->pulldown_bit | VAR_10->pullup_bit;

  if (VAR_9->setting == VAR_0)
   VAR_11 = VAR_10->pulldown_bit;
  else if (VAR_9->setting == VAR_1)
   VAR_11 = VAR_10->pullup_bit;

  FUNC_0(VAR_4->dev, VAR_2, VAR_10->reg,
    VAR_11, VAR_12);
 }
}
