
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_spi {int dummy; } ;
struct spi_device {int mode; int chip_select; int master; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sun4i_spi* FUNC_1 (int ) ;
 int FUNC_2 (struct sun4i_spi*,int ) ;
 int FUNC_3 (struct sun4i_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_6, bool VAR_7)
{
 struct sun4i_spi *VAR_8 = FUNC_1(VAR_6->master);
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_5);

 VAR_9 &= ~VAR_4;
 VAR_9 |= FUNC_0(VAR_6->chip_select);


 VAR_9 |= VAR_3;

 if (VAR_7)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;
 if (VAR_6->mode & VAR_0)
  VAR_9 &= ~VAR_1;
 else
  VAR_9 |= VAR_1;

 FUNC_3(VAR_8, VAR_5, VAR_9);
}
