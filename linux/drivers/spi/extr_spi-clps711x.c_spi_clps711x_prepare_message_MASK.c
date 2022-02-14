
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {int mode; } ;
struct spi_clps711x_data {int syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct spi_clps711x_data* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_3,
     struct spi_message *VAR_4)
{
 struct spi_clps711x_data *VAR_5 = FUNC_1(VAR_3);
 struct spi_device *VAR_6 = VAR_4->spi;


 return FUNC_0(VAR_5->syscon, VAR_2, VAR_1,
      (VAR_6->mode & VAR_0) ?
      VAR_1 : 0);
}
