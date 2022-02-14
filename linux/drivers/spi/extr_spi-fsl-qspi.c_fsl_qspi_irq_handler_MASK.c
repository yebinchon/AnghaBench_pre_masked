
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_qspi {int dev; int c; scalar_t__ iobase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct fsl_qspi*,scalar_t__) ;
 int FUNC_3 (struct fsl_qspi*,int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct fsl_qspi *VAR_5 = VAR_4;
 u32 VAR_6;


 VAR_6 = FUNC_2(VAR_5, VAR_5->iobase + VAR_1);
 FUNC_3(VAR_5, VAR_6, VAR_5->iobase + VAR_1);

 if (VAR_6 & VAR_2)
  FUNC_0(&VAR_5->c);

 FUNC_1(VAR_5->dev, "QUADSPI_FR : 0x%.8x:0x%.8x\n", 0, VAR_6);
 return VAR_0;
}
