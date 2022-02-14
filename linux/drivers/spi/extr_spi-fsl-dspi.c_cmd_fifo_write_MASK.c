
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fsl_dspi {scalar_t__ len; int regmap_pushr; int tx_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct fsl_dspi *VAR_2)
{
 u16 VAR_3 = VAR_2->tx_cmd;

 if (VAR_2->len > 0)
  VAR_3 |= VAR_1;
 FUNC_0(VAR_2->regmap_pushr, VAR_0, VAR_3);
}
