
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int charge_chan; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct sc27xx_fgu_data *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0->charge_chan, &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;

 *VAR_1 = VAR_3 * 1000;
 return 0;
}
