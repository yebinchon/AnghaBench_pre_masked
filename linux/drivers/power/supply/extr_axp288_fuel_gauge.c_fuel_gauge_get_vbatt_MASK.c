
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_fg_info {int * iio_channel; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct axp288_fg_info *VAR_1, int *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 VAR_3 = FUNC_1(VAR_1->iio_channel[VAR_0], &VAR_4);
 if (VAR_3 < 0)
  goto vbatt_read_fail;

 *VAR_2 = FUNC_0(VAR_4);
vbatt_read_fail:
 return VAR_3;
}
