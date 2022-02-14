
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dln2_spi {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct dln2_spi*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct dln2_spi *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(&VAR_2->pdev->dev, "freq_min = %d, freq_max = %d\n",
  *VAR_3, *VAR_4);

 return 0;
}
