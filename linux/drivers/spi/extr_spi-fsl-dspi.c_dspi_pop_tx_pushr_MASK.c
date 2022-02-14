
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_dspi {int tx_cmd; scalar_t__ len; int ctlr; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_dspi*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct fsl_dspi *VAR_1)
{
 u16 VAR_2 = VAR_1->tx_cmd, VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1->ctlr))
  return VAR_3;

 if (VAR_1->len > 0)
  VAR_2 |= VAR_0;
 return VAR_2 << 16 | VAR_3;
}
