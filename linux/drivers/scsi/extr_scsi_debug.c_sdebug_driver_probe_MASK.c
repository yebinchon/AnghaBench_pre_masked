
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sdebug_host_info {int dev; struct Scsi_Host* shost; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ this_id; scalar_t__ max_lun; scalar_t__ max_id; scalar_t__ hostdata; scalar_t__ nr_hw_queues; } ;
typedef int sdbg_host ;
struct TYPE_3__ {scalar_t__ dma_boundary; int can_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*,int ) ;
 int FUNC_7 (struct Scsi_Host*,int) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_1__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 struct sdebug_host_info* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_30)
{
 int VAR_31 = 0;
 struct sdebug_host_info *VAR_32;
 struct Scsi_Host *VAR_33;
 int VAR_34;

 VAR_32 = FUNC_9(VAR_30);

 VAR_21.can_queue = VAR_24;
 if (!VAR_18)
  VAR_21.dma_boundary = VAR_1 - 1;

 VAR_33 = FUNC_4(&VAR_21, sizeof(VAR_32));
 if (((void*)0) == VAR_33) {
  FUNC_0("scsi_host_alloc failed\n");
  VAR_31 = -VAR_0;
  return VAR_31;
 }
 if (VAR_29 > VAR_16) {
  FUNC_2("%s: trim submit_queues (was %d) to nr_cpu_ids=%u\n",
   VAR_15, VAR_29, VAR_16);
  VAR_29 = VAR_16;
 }


 VAR_33->nr_hw_queues = VAR_29;

 VAR_32->shost = VAR_33;
 *((struct sdebug_host_info **)VAR_33->hostdata) = VAR_32;
 if ((VAR_33->this_id >= 0) && (VAR_25 > VAR_33->this_id))
  VAR_33->max_id = VAR_25 + 1;
 else
  VAR_33->max_id = VAR_25;

 VAR_33->max_lun = VAR_2 + 1;

 VAR_34 = 0;

 switch (VAR_19) {

 case 130:
  VAR_34 = VAR_5;
  if (VAR_20)
   VAR_34 |= VAR_11;
  break;

 case 129:
  VAR_34 = VAR_6;
  if (VAR_20)
   VAR_34 |= VAR_12;
  break;

 case 128:
  VAR_34 = VAR_7;
  if (VAR_20)
   VAR_34 |= VAR_13;
  break;

 default:
  if (VAR_20)
   VAR_34 |= VAR_10;
  break;
 }

 FUNC_7(VAR_33, VAR_34);

 if (VAR_14 || VAR_20)
  FUNC_1("host protection%s%s%s%s%s%s%s\n",
   (VAR_34 & VAR_5) ? " DIF1" : "",
   (VAR_34 & VAR_6) ? " DIF2" : "",
   (VAR_34 & VAR_7) ? " DIF3" : "",
   (VAR_34 & VAR_10) ? " DIX0" : "",
   (VAR_34 & VAR_11) ? " DIX1" : "",
   (VAR_34 & VAR_12) ? " DIX2" : "",
   (VAR_34 & VAR_13) ? " DIX3" : "");

 if (VAR_23 == 1)
  FUNC_6(VAR_33, VAR_9);
 else
  FUNC_6(VAR_33, VAR_8);

 VAR_28 = !!(VAR_4 & VAR_26);
 VAR_17 = !!(VAR_3 & VAR_26);
 if (VAR_22)
  VAR_27 = 1;
 VAR_31 = FUNC_3(VAR_33, &VAR_32->dev);
 if (VAR_31) {
  FUNC_0("scsi_add_host failed\n");
  VAR_31 = -VAR_0;
  FUNC_5(VAR_33);
 } else
  FUNC_8(VAR_33);

 return VAR_31;
}
