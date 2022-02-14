
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_qspi {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsl_qspi*,scalar_t__) ;
 int FUNC_1 (struct fsl_qspi*,int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct fsl_qspi *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_3->iobase + VAR_0);
 VAR_4 |= VAR_1 | VAR_2;
 FUNC_1(VAR_3, VAR_4, VAR_3->iobase + VAR_0);





 FUNC_2(1);

 VAR_4 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_3, VAR_4, VAR_3->iobase + VAR_0);
}
