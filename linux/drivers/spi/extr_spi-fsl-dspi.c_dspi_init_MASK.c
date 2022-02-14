
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dspi {int regmap; TYPE_1__* devtype_data; int ctlr; } ;
struct TYPE_2__ {scalar_t__ xspi_mode; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fsl_dspi *VAR_6)
{
 unsigned int VAR_7 = VAR_2;

 if (VAR_6->devtype_data->xspi_mode)
  VAR_7 |= VAR_3;
 if (!FUNC_4(VAR_6->ctlr))
  VAR_7 |= VAR_1;

 FUNC_3(VAR_6->regmap, VAR_0, VAR_7);
 FUNC_3(VAR_6->regmap, VAR_4, VAR_5);
 if (VAR_6->devtype_data->xspi_mode)
  FUNC_3(VAR_6->regmap, FUNC_0(0),
        FUNC_2(0) | FUNC_1(1));
}
