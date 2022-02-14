
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fsl_lpspi_data {int txfifosize; scalar_t__ base; int is_slave; int (* tx ) (struct fsl_lpspi_data*) ;int remain; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fsl_lpspi_data*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fsl_lpspi_data*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fsl_lpspi_data *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_5->base + VAR_2) & 0xff;

 while (VAR_6 < VAR_5->txfifosize) {
  if (!VAR_5->remain)
   break;
  VAR_5->tx(VAR_5);
  VAR_6++;
 }

 if (VAR_6 < VAR_5->txfifosize) {
  if (!VAR_5->is_slave) {
   VAR_7 = FUNC_1(VAR_5->base + VAR_3);
   VAR_7 &= ~VAR_4;
   FUNC_3(VAR_7, VAR_5->base + VAR_3);
  }

  FUNC_0(VAR_5, VAR_0);
 } else
  FUNC_0(VAR_5, VAR_1);
}
