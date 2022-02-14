
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp_spi_priv {int spi_clk; } ;
struct spi_device {int chip_select; int mode; int max_speed_hz; int master; } ;


 int FUNC_0 (int ,int ) ;
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
 struct xlp_spi_priv* FUNC_1 (int ) ;
 int FUNC_2 (struct xlp_spi_priv*,int,int ) ;
 int FUNC_3 (struct xlp_spi_priv*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_17)
{
 struct xlp_spi_priv *VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21;

 VAR_18 = FUNC_1(VAR_17->master);
 VAR_21 = VAR_17->chip_select;



 VAR_19 = FUNC_0(VAR_18->spi_clk, VAR_17->max_speed_hz);
 if (VAR_19 > VAR_10)
  VAR_19 = VAR_10;
 else if (VAR_19 < VAR_11)
  VAR_19 = VAR_11;

 FUNC_3(VAR_18, VAR_21, VAR_9, VAR_19);
 FUNC_3(VAR_18, VAR_21, VAR_12, VAR_16);
 VAR_20 = FUNC_2(VAR_18, VAR_21, VAR_4);
 if (VAR_17->mode & VAR_0)
  VAR_20 |= VAR_5;
 else
  VAR_20 &= ~VAR_5;
 if (VAR_17->mode & VAR_1)
  VAR_20 |= VAR_6;
 else
  VAR_20 &= ~VAR_6;
 if (!(VAR_17->mode & VAR_2))
  VAR_20 |= VAR_8;
 else
  VAR_20 &= ~VAR_8;
 if (VAR_17->mode & VAR_3)
  VAR_20 |= VAR_7;
 else
  VAR_20 &= ~VAR_7;

 VAR_20 |= VAR_15 | VAR_14;
 if (VAR_19 == 4)
  VAR_20 |= VAR_13;
 FUNC_3(VAR_18, VAR_21, VAR_4, VAR_20);

 return 0;
}
