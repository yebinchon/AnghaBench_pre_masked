
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct stm32_spi {int lock; TYPE_6__* cfg; scalar_t__ base; int dev; scalar_t__ cur_midi; } ;
struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct spi_device {int mode; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {TYPE_5__* regs; } ;
struct TYPE_10__ {int mask; scalar_t__ reg; } ;
struct TYPE_9__ {int mask; } ;
struct TYPE_8__ {int mask; } ;
struct TYPE_11__ {TYPE_4__ cpol; TYPE_3__ lsb_first; TYPE_2__ cpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 struct stm32_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_master *VAR_4,
     struct spi_message *VAR_5)
{
 struct stm32_spi *VAR_6 = FUNC_3(VAR_4);
 struct spi_device *VAR_7 = VAR_5->spi;
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 unsigned long VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;


 VAR_6->cur_midi = 0;
 if (VAR_8 && !FUNC_1(VAR_8, "st,spi-midi-ns", &VAR_6->cur_midi))
  FUNC_0(VAR_6->dev, "%dns inter-data idleness\n", VAR_6->cur_midi);

 if (VAR_7->mode & VAR_1)
  VAR_11 |= VAR_6->cfg->regs->cpol.mask;
 else
  VAR_10 |= VAR_6->cfg->regs->cpol.mask;

 if (VAR_7->mode & VAR_0)
  VAR_11 |= VAR_6->cfg->regs->cpha.mask;
 else
  VAR_10 |= VAR_6->cfg->regs->cpha.mask;

 if (VAR_7->mode & VAR_3)
  VAR_11 |= VAR_6->cfg->regs->lsb_first.mask;
 else
  VAR_10 |= VAR_6->cfg->regs->lsb_first.mask;

 FUNC_0(VAR_6->dev, "cpol=%d cpha=%d lsb_first=%d cs_high=%d\n",
  VAR_7->mode & VAR_1,
  VAR_7->mode & VAR_0,
  VAR_7->mode & VAR_3,
  VAR_7->mode & VAR_2);

 FUNC_4(&VAR_6->lock, VAR_9);


 if (VAR_10 || VAR_11)
  FUNC_6(
   (FUNC_2(VAR_6->base + VAR_6->cfg->regs->cpol.reg) &
    ~VAR_10) | VAR_11,
   VAR_6->base + VAR_6->cfg->regs->cpol.reg);

 FUNC_5(&VAR_6->lock, VAR_9);

 return 0;
}
