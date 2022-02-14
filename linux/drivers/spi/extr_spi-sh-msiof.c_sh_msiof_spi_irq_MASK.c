
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_msiof_spi_priv {int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sh_msiof_spi_priv*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct sh_msiof_spi_priv *VAR_4 = VAR_3;


 FUNC_1(VAR_4, VAR_0, 0);
 FUNC_0(&VAR_4->done);

 return VAR_1;
}
