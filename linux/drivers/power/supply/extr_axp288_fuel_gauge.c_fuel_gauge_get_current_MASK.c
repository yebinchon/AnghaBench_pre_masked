
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_fg_info {int * iio_channel; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct axp288_fg_info *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;


 VAR_4 = FUNC_0(VAR_2->iio_channel[VAR_1], &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_5 > 0) {
  *VAR_3 = -1 * VAR_5;
  return 0;
 }

 return FUNC_0(VAR_2->iio_channel[VAR_0], VAR_3);
}
