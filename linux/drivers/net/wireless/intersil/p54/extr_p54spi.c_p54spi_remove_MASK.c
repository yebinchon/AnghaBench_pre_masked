
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct p54s_priv {int hw; int mutex; int firmware; } ;


 int FUNC_0 (int ,struct spi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 struct p54s_priv* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_2)
{
 struct p54s_priv *VAR_3 = FUNC_7(VAR_2);

 FUNC_5(VAR_3->hw);

 FUNC_0(FUNC_2(VAR_0), VAR_2);

 FUNC_1(VAR_1);
 FUNC_1(VAR_0);
 FUNC_6(VAR_3->firmware);

 FUNC_3(&VAR_3->mutex);

 FUNC_4(VAR_3->hw);

 return 0;
}
