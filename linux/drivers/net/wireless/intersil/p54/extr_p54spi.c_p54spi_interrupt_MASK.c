
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct p54s_priv {int work; int hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct p54s_priv* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct spi_device *VAR_3 = VAR_2;
 struct p54s_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->hw, &VAR_4->work);

 return VAR_0;
}
