
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bpw; int mode; int prescale; int chip_select; } ;
struct fsl_lpspi_data {int dev; scalar_t__ base; scalar_t__ is_first_byte; int usedma; TYPE_1__ config; int is_slave; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fsl_lpspi_data *VAR_3)
{
 u32 VAR_4 = 0;

 VAR_4 |= VAR_3->config.bpw - 1;
 VAR_4 |= (VAR_3->config.mode & 0x3) << 30;
 if (!VAR_3->is_slave) {
  VAR_4 |= VAR_3->config.prescale << 27;
  VAR_4 |= (VAR_3->config.chip_select & 0x3) << 24;






  if (!VAR_3->usedma) {
   VAR_4 |= VAR_1;
   if (VAR_3->is_first_byte)
    VAR_4 &= ~VAR_2;
   else
    VAR_4 |= VAR_2;
  }
 }
 FUNC_1(VAR_4, VAR_3->base + VAR_0);

 FUNC_0(VAR_3->dev, "TCR=0x%x\n", VAR_4);
}
