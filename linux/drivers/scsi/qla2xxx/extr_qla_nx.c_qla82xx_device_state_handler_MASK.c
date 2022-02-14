
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int quiesce_owner; int nic_core_reset_owner; } ;
struct qla_hw_data {unsigned long fcoe_dev_init_timeout; TYPE_2__ flags; } ;
struct TYPE_12__ {int init_done; } ;
struct TYPE_14__ {TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct qla_hw_data*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;

int
FUNC_13(scsi_qla_host_t *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;
 int VAR_12 = VAR_4;
 unsigned long VAR_13;
 struct qla_hw_data *VAR_14 = VAR_9->hw;
 int VAR_15 = 0;

 FUNC_4(VAR_14);
 if (!VAR_9->flags.init_done) {
  FUNC_9(VAR_9);
  FUNC_10(VAR_9);
 }

 VAR_10 = FUNC_8(VAR_14, VAR_2);
 VAR_11 = VAR_10;
 FUNC_2(VAR_8, VAR_9, 0x009b,
     "Device state is 0x%x = %s.\n",
     VAR_10,
     VAR_10 < VAR_1 ? FUNC_1(VAR_10) : "Unknown");


 VAR_13 = VAR_5 + (VAR_14->fcoe_dev_init_timeout * VAR_0);

 while (1) {

  if (FUNC_12(VAR_5, VAR_13)) {
   FUNC_2(VAR_7, VAR_9, 0x009c,
       "Device init failed.\n");
   VAR_12 = VAR_3;
   break;
  }
  VAR_10 = FUNC_8(VAR_14, VAR_2);
  if (VAR_11 != VAR_10) {
   VAR_15 = 0;
   VAR_11 = VAR_10;
  }
  if (VAR_15 < 5) {
   FUNC_2(VAR_8, VAR_9, 0x009d,
       "Device state is 0x%x = %s.\n",
       VAR_10,
       VAR_10 < VAR_1 ? FUNC_1(VAR_10) :
       "Unknown");
  }

  switch (VAR_10) {
  case 128:
   VAR_14->flags.nic_core_reset_owner = 0;
   goto rel_lock;
  case 134:
   VAR_12 = FUNC_3(VAR_9);
   break;
  case 132:
   FUNC_5(VAR_14);
   FUNC_0(1000);
   FUNC_4(VAR_14);
   break;
  case 130:
   if (!VAR_6)
    FUNC_7(VAR_9);
   else {
    FUNC_5(VAR_14);
    FUNC_0(1000);
    FUNC_4(VAR_14);
   }
   VAR_13 = VAR_5 +
       (VAR_14->fcoe_dev_init_timeout * VAR_0);
   break;
  case 131:
   FUNC_6(VAR_9);

   VAR_13 = VAR_5 + (VAR_14->fcoe_dev_init_timeout
        * VAR_0);
   break;
  case 129:



   if (VAR_14->flags.quiesce_owner)
    goto rel_lock;

   FUNC_5(VAR_14);
   FUNC_0(1000);
   FUNC_4(VAR_14);


   VAR_13 = VAR_5 + (VAR_14->fcoe_dev_init_timeout
        * VAR_0);
   break;
  case 133:
   FUNC_11(VAR_9);
   VAR_12 = VAR_3;
   goto exit;
  default:
   FUNC_5(VAR_14);
   FUNC_0(1000);
   FUNC_4(VAR_14);
  }
  VAR_15++;
 }
rel_lock:
 FUNC_5(VAR_14);
exit:
 return VAR_12;
}
