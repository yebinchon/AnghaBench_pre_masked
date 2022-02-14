
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lantiq_ssc_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct lantiq_ssc_spi const*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(const struct lantiq_ssc_spi *VAR_10,
    unsigned int VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = 0;
 if (VAR_11 & VAR_6)
  VAR_13 |= VAR_4;
 else
  VAR_12 |= VAR_4;

 if (VAR_11 & VAR_7)
  VAR_12 |= VAR_5 | VAR_2;
 else
  VAR_13 |= VAR_5 | VAR_2;


 if (VAR_11 & VAR_9)
  VAR_13 |= VAR_1;
 else
  VAR_12 |= VAR_1;


 if (VAR_11 & VAR_8)
  VAR_12 |= VAR_3;
 else
  VAR_13 |= VAR_3;

 FUNC_0(VAR_10, VAR_13, VAR_12, VAR_0);
}
