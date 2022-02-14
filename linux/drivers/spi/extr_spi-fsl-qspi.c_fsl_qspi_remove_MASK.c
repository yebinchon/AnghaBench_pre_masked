
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fsl_qspi {int lock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fsl_qspi*) ;
 int FUNC_1 (int *) ;
 struct fsl_qspi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct fsl_qspi*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct fsl_qspi *VAR_4 = FUNC_2(VAR_3);


 FUNC_3(VAR_4, VAR_1, VAR_4->iobase + VAR_0);
 FUNC_3(VAR_4, 0x0, VAR_4->iobase + VAR_2);

 FUNC_0(VAR_4);

 FUNC_1(&VAR_4->lock);

 return 0;
}
