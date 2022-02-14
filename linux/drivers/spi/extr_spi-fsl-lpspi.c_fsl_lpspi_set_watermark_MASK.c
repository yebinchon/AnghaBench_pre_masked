
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_lpspi_data {int watermark; int dev; scalar_t__ base; int usedma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fsl_lpspi_data *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1->usedma)
  VAR_2 = VAR_1->watermark >> 1 |
         (VAR_1->watermark >> 1) << 16;
 else
  VAR_2 = VAR_1->watermark >> 1;

 FUNC_1(VAR_2, VAR_1->base + VAR_0);

 FUNC_0(VAR_1->dev, "FCR=0x%x\n", VAR_2);
}
