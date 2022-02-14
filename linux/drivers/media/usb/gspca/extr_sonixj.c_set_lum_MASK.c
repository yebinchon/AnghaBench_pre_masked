
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int avg_lum; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_0,
      u8 *VAR_1)
{
 int VAR_2;





 VAR_2 = (VAR_1[27] << 8) + VAR_1[28]

  + (VAR_1[31] << 8) + VAR_1[32]

  + (VAR_1[23] << 8) + VAR_1[24]

  + (VAR_1[35] << 8) + VAR_1[36]

  + (VAR_1[29] << 10) + (VAR_1[30] << 2);
 VAR_2 >>= 10;
 FUNC_0(&VAR_0->avg_lum, VAR_2);
}
