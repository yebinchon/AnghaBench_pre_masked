
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int cmd_flags; int io_pos; int lock; TYPE_3__* req; scalar_t__ addr; TYPE_2__* chip; void** io_word; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ data_dir; int error; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct memstick_host*,int ) ;
 int FUNC_2 (struct jmb38x_ms_host*) ;
 int FUNC_3 (struct memstick_host*) ;
 struct jmb38x_ms_host* FUNC_4 (struct memstick_host*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_21, void *VAR_22)
{
 struct memstick_host *VAR_23 = VAR_22;
 struct jmb38x_ms_host *VAR_24 = FUNC_4(VAR_23);
 unsigned int VAR_25;

 FUNC_6(&VAR_24->lock);
 VAR_25 = FUNC_5(VAR_24->addr + VAR_5);
 FUNC_0(&VAR_24->chip->pdev->dev, "irq_status = %08x\n", VAR_25);
 if (VAR_25 == 0 || VAR_25 == (~0)) {
  FUNC_7(&VAR_24->lock);
  return VAR_16;
 }

 if (VAR_24->req) {
  if (VAR_25 & VAR_6) {
   if (VAR_25 & VAR_7)
    VAR_24->req->error = -VAR_2;
   else if (VAR_25 & VAR_14) {
    FUNC_0(&VAR_24->chip->pdev->dev, "TPC_ERR\n");
    FUNC_1(VAR_23, 0);
   } else
    VAR_24->req->error = -VAR_3;
  } else {
   if (VAR_24->cmd_flags & VAR_1) {
    if (VAR_25 & VAR_9)
     VAR_24->cmd_flags |= VAR_4;
   } else {
    if (VAR_25 & (VAR_10
        | VAR_11))
     FUNC_2(VAR_24);

    if (VAR_25 & VAR_9) {
     FUNC_2(VAR_24);
     VAR_24->cmd_flags |= VAR_4;
    }
   }

   if (VAR_25 & VAR_8) {
    VAR_24->cmd_flags |= VAR_0;
    if (VAR_24->cmd_flags & VAR_18) {
     if (VAR_24->req->data_dir == VAR_17) {
      VAR_24->io_word[0]
       = FUNC_5(VAR_24->addr
        + VAR_19);
      VAR_24->io_word[1]
       = FUNC_5(VAR_24->addr
        + VAR_20);
      VAR_24->io_pos = 8;

      FUNC_2(VAR_24);
     }
     VAR_24->cmd_flags |= VAR_4;
    }
   }
  }
 }

 if (VAR_25 & (VAR_12 | VAR_13)) {
  FUNC_0(&VAR_24->chip->pdev->dev, "media changed\n");
  FUNC_3(VAR_23);
 }

 FUNC_8(VAR_25, VAR_24->addr + VAR_5);

 if (VAR_24->req
     && (((VAR_24->cmd_flags & VAR_0)
   && (VAR_24->cmd_flags & VAR_4))
  || VAR_24->req->error))
  FUNC_1(VAR_23, 0);

 FUNC_7(&VAR_24->lock);
 return VAR_15;
}
