
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_msiof_spi_priv {unsigned int min_div_pow; TYPE_2__* ctlr; TYPE_1__* pdev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int dev; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,unsigned long,int) ;
 int FUNC_3 (int *,char*,int) ;
 int* VAR_3 ;
 int FUNC_4 (struct sh_msiof_spi_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct sh_msiof_spi_priv *VAR_4,
          unsigned long VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;
 unsigned int VAR_10 = VAR_4->min_div_pow;

 if (!VAR_6 || !VAR_5) {
  FUNC_2(1, "Invalid clock rate parameters %lu and %u\n",
       VAR_5, VAR_6);
  return;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 <= 1024) {

  if (!VAR_10 && VAR_7 <= 32 && VAR_7 > 2)
   VAR_10 = 1;

  if (VAR_10)
   VAR_8 = (VAR_7 + 1) >> VAR_10;
  else
   VAR_8 = VAR_7;

  for (; VAR_8 > 32; VAR_10++)
   VAR_8 = (VAR_8 + 1) >> 1;
 } else {

  FUNC_3(&VAR_4->pdev->dev,
   "Requested SPI transfer rate %d is too low\n", VAR_6);
  VAR_10 = 5;
  VAR_8 = 32;
 }

 VAR_9 = VAR_3[VAR_10] | FUNC_1(VAR_8);
 FUNC_4(VAR_4, VAR_2, VAR_9);
 if (!(VAR_4->ctlr->flags & VAR_1))
  FUNC_4(VAR_4, VAR_0, VAR_9);
}
