
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {scalar_t__ base; } ;
struct spi_device {int mode; int master; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct uniphier_spi_priv* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_14)
{
 struct uniphier_spi_priv *VAR_15 = FUNC_1(VAR_14->master);
 u32 VAR_16, VAR_17;
 switch (VAR_14->mode & (VAR_1 | VAR_0)) {
 case 131:

  VAR_16 = VAR_7 | VAR_5;
  VAR_17 = 0;
  break;
 case 130:

  VAR_16 = 0;
  VAR_17 = VAR_10;
  break;
 case 129:

  VAR_16 = VAR_6 | VAR_5;
  VAR_17 = VAR_10;
  break;
 case 128:

  VAR_16 = VAR_7 | VAR_6;
  VAR_17 = 0;
  break;
 }

 if (!(VAR_14->mode & VAR_2))
  VAR_17 |= VAR_9;

 FUNC_2(VAR_16, VAR_15->base + VAR_4);
 FUNC_2(VAR_17, VAR_15->base + VAR_8);

 VAR_16 = 0;
 if (VAR_14->mode & VAR_3)
  VAR_16 |= FUNC_0(VAR_13, 1);
 FUNC_2(VAR_16, VAR_15->base + VAR_12);
 FUNC_2(VAR_16, VAR_15->base + VAR_11);
}
