
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {unsigned int chip_select; int mode; int master; } ;
struct lantiq_ssc_spi {unsigned int base_cs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lantiq_ssc_spi*,int,int ) ;
 struct lantiq_ssc_spi* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_3, bool VAR_4)
{
 struct lantiq_ssc_spi *VAR_5 = FUNC_1(VAR_3->master);
 unsigned int VAR_6 = VAR_3->chip_select;
 u32 VAR_7;

 if (!!(VAR_3->mode & VAR_2) == VAR_4)
  VAR_7 = (1 << (VAR_6 - VAR_5->base_cs));
 else
  VAR_7 = (1 << (VAR_6 - VAR_5->base_cs + VAR_0));

 FUNC_0(VAR_5, VAR_7, VAR_1);
}
