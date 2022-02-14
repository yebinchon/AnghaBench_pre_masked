
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; int chip_select; } ;
struct meson_spicc_device {scalar_t__ base; struct spi_message* message; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct meson_spicc_device* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_17,
           struct spi_message *VAR_18)
{
 struct meson_spicc_device *VAR_19 = FUNC_2(VAR_17);
 struct spi_device *VAR_20 = VAR_18->spi;
 u32 VAR_21 = 0;


 VAR_19->message = VAR_18;


 VAR_21 |= VAR_6;
 VAR_21 |= VAR_7;




 if (VAR_20->mode & VAR_14)
  VAR_21 |= VAR_10;
 else
  VAR_21 &= ~VAR_10;

 if (VAR_20->mode & VAR_13)
  VAR_21 |= VAR_9;
 else
  VAR_21 &= ~VAR_9;



 if (VAR_20->mode & VAR_15)
  VAR_21 |= VAR_11;
 else
  VAR_21 &= ~VAR_11;

 if (VAR_20->mode & VAR_16)
  VAR_21 |= FUNC_1(VAR_5, VAR_4);
 else
  VAR_21 |= FUNC_1(VAR_5, VAR_3);


 VAR_21 |= FUNC_1(VAR_2, VAR_20->chip_select);




 VAR_21 |= FUNC_1(VAR_0, 8 - 1);

 FUNC_4(VAR_21, VAR_19->base + VAR_1);


 FUNC_4(0, VAR_19->base + VAR_8);

 FUNC_3(FUNC_0(24), FUNC_0(24), VAR_19->base + VAR_12);

 return 0;
}
