
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int irq; TYPE_3__** resource; TYPE_1__* priv; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {struct Scsi_Host* host; } ;
typedef TYPE_1__ scsi_info_t ;
struct TYPE_8__ {int IrqNumber; int NumAddress; int BaseAddress; } ;
typedef TYPE_2__ nsp_hw_data ;
struct TYPE_9__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct pcmcia_device*) ;
 TYPE_2__ VAR_11 ;
 int FUNC_1 (int ,char*,...) ;
 struct Scsi_Host* FUNC_2 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_4 (struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct pcmcia_device*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct Scsi_Host*,int *) ;
 int FUNC_10 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_11(struct pcmcia_device *VAR_14)
{
 int VAR_15;
 scsi_info_t *VAR_16 = VAR_14->priv;
 struct Scsi_Host *VAR_17;
 nsp_hw_data *VAR_18 = &VAR_11;

 FUNC_1(VAR_8, "in");

 VAR_14->config_flags |= VAR_5 | VAR_1 |
  VAR_4 | VAR_0 | VAR_3 |
  VAR_2;

 VAR_15 = FUNC_5(VAR_14, VAR_10, VAR_18);
 if (VAR_15)
  goto cs_failed;

 if (FUNC_6(VAR_14, VAR_13))
  goto cs_failed;

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15)
  goto cs_failed;

 if (VAR_9) {
  if (VAR_14->resource[0]) {
   FUNC_7(VAR_14->resource[0]->start,
     FUNC_8(VAR_14->resource[0]));
  }
  if (VAR_14->resource[1]) {
   FUNC_7(VAR_14->resource[1]->start,
     FUNC_8(VAR_14->resource[1]));
  }
 }


 VAR_18->BaseAddress = VAR_14->resource[0]->start;
 VAR_18->NumAddress = FUNC_8(VAR_14->resource[0]);
 VAR_18->IrqNumber = VAR_14->irq;

 FUNC_1(VAR_8, "I/O[0x%x+0x%x] IRQ %d",
  VAR_18->BaseAddress, VAR_18->NumAddress, VAR_18->IrqNumber);

 if(FUNC_3(VAR_18) == VAR_7) {
  goto cs_failed;
 }

 VAR_17 = FUNC_2(&VAR_12);

 if (VAR_17 == ((void*)0)) {
  FUNC_1(VAR_8, "detect failed");
  goto cs_failed;
 }


 VAR_15 = FUNC_9 (VAR_17, ((void*)0));
 if (VAR_15)
  goto cs_failed;

 FUNC_10(VAR_17);

 VAR_16->host = VAR_17;

 return 0;

 cs_failed:
 FUNC_1(VAR_8, "config fail");
 FUNC_0(VAR_14);

 return -VAR_6;
}
