
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lantiq_ssc_spi {int bits_per_word; struct lantiq_ssc_hwcfg* hwcfg; } ;
struct lantiq_ssc_hwcfg {int irnen_t; int irnen_r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct lantiq_ssc_spi const*) ;
 int FUNC_1 (struct lantiq_ssc_spi const*,int ) ;
 int FUNC_2 (struct lantiq_ssc_spi const*,int ) ;
 int FUNC_3 (struct lantiq_ssc_spi const*,int ,int,int ) ;
 int FUNC_4 (struct lantiq_ssc_spi const*,int,int ) ;
 int FUNC_5 (struct lantiq_ssc_spi const*) ;
 int FUNC_6 (struct lantiq_ssc_spi const*) ;

__attribute__((used)) static void FUNC_7(const struct lantiq_ssc_spi *VAR_17)
{
 const struct lantiq_ssc_hwcfg *VAR_18 = VAR_17->hwcfg;





 FUNC_4(VAR_17, 1 << VAR_1, VAR_0);


 FUNC_0(VAR_17);


 FUNC_3(VAR_17, 0, VAR_14, VAR_13);


 FUNC_4(VAR_17, VAR_5 | VAR_3 |
  VAR_7 | VAR_4 | VAR_8 |
  VAR_6, VAR_2);


 FUNC_1(VAR_17, VAR_17->bits_per_word);
 FUNC_2(VAR_17, VAR_16);


 FUNC_4(VAR_17, VAR_15 |
          VAR_14,
          VAR_13);


 FUNC_4(VAR_17, 0, VAR_10);
 FUNC_4(VAR_17, 0xFF00, VAR_9);


 FUNC_5(VAR_17);
 FUNC_6(VAR_17);


 FUNC_4(VAR_17, VAR_18->irnen_t | VAR_18->irnen_r |
     VAR_12, VAR_11);
}
