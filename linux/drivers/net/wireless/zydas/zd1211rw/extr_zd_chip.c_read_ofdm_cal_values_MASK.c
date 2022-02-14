
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
struct zd_chip {int * ofdm_cal_values; } ;





 int VAR_0 ;
 int FUNC_0 (struct zd_chip*,int ,int ,int const,int ) ;

__attribute__((used)) static int FUNC_1(struct zd_chip *VAR_1)
{
 int VAR_2;
 int VAR_3;
 static const zd_addr_t VAR_4[] = {
  130,
  129,
  128,
 };

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_1->ofdm_cal_values[VAR_3],
    VAR_0, VAR_4[VAR_3], 0);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
