
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_sh_data {unsigned long cr1; int wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct spi_sh_data*,int,int ) ;
 unsigned long FUNC_1 (struct spi_sh_data*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct spi_sh_data *VAR_9 = (struct spi_sh_data *)VAR_8;
 unsigned long VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_1);
 if (VAR_10 & VAR_5)
  VAR_9->cr1 |= VAR_5;
 if (VAR_10 & VAR_6)
  VAR_9->cr1 |= VAR_6;
 if (VAR_10 & VAR_3)
  VAR_9->cr1 |= VAR_3;
 if (VAR_10 & VAR_4)
  VAR_9->cr1 |= VAR_4;

 if (VAR_9->cr1) {
  FUNC_0(VAR_9, VAR_9->cr1, VAR_2);
  FUNC_2(&VAR_9->wait);
 }

 return VAR_0;
}
