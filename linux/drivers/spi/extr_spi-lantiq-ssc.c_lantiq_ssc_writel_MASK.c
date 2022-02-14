
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lantiq_ssc_spi {scalar_t__ regbase; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct lantiq_ssc_spi *VAR_0, u32 VAR_1,
         u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_0->regbase + VAR_2);
}
