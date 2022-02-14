
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxic_spi {unsigned long cur_speed_hz; } ;


 int FUNC_0 (struct mxic_spi*) ;
 int FUNC_1 (struct mxic_spi*) ;
 int FUNC_2 (struct mxic_spi*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mxic_spi *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 if (VAR_0->cur_speed_hz == VAR_1)
  return 0;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_0->cur_speed_hz = VAR_1;

 return 0;
}
