
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct board_info {int clock_core; int espi_nports; int chip_mac; int clock_mc4; } ;
struct TYPE_5__ {int sge; int tp; } ;
struct TYPE_6__ {TYPE_1__ params; int sge; int tp; scalar_t__ espi; scalar_t__ regs; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct board_info* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(adapter_t *VAR_7)
{
 int VAR_8 = -VAR_2;
 const struct board_info *VAR_9 = FUNC_0(VAR_7);

 if (!VAR_9->clock_mc4) {
  u32 VAR_10 = FUNC_1(VAR_7->regs + VAR_0);

  FUNC_5(VAR_10 | VAR_5 | VAR_3, VAR_7->regs + VAR_0);
  FUNC_5(VAR_4 | VAR_6,
         VAR_7->regs + VAR_1);
 }

 if (VAR_7->espi && FUNC_2(VAR_7->espi, VAR_9->chip_mac,
       VAR_9->espi_nports))
  goto out_err;

 if (FUNC_4(VAR_7->tp, &VAR_7->params.tp, VAR_9->clock_core))
  goto out_err;

 VAR_8 = FUNC_3(VAR_7->sge, &VAR_7->params.sge);
 if (VAR_8)
  goto out_err;

 VAR_8 = 0;
out_err:
 return VAR_8;
}
