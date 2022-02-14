
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dspi {scalar_t__ rx; scalar_t__ rx_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_dspi*,int ) ;
 int FUNC_1 (struct fsl_dspi*) ;

__attribute__((used)) static void FUNC_2(struct fsl_dspi *VAR_1)
{
 int VAR_2 = VAR_0;


 while ((VAR_1->rx < VAR_1->rx_end) && VAR_2--)
  FUNC_0(VAR_1, FUNC_1(VAR_1));
}
