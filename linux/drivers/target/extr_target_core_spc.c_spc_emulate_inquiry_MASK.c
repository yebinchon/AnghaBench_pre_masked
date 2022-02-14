
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct se_portal_group {TYPE_2__* tpg_virt_lun0; } ;
struct se_device {TYPE_3__* transport; } ;
struct se_cmd {unsigned char* t_task_cdb; int data_length; TYPE_1__* se_lun; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_9__ {unsigned char page; int (* emulate ) (struct se_cmd*,unsigned char*) ;} ;
struct TYPE_8__ {unsigned char (* get_device_type ) (struct se_device*) ;} ;
struct TYPE_7__ {int lun_se_dev; } ;
struct TYPE_6__ {struct se_portal_group* lun_tpg; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;
 struct se_device* FUNC_7 (int ) ;
 int FUNC_8 (struct se_cmd*,unsigned char*) ;
 unsigned char FUNC_9 (struct se_device*) ;
 int FUNC_10 (struct se_cmd*,unsigned char*) ;
 int FUNC_11 (struct se_cmd*,int ,int) ;
 unsigned char* FUNC_12 (struct se_cmd*) ;
 int FUNC_13 (struct se_cmd*) ;
 int VAR_6 ;

__attribute__((used)) static sense_reason_t
FUNC_14(struct se_cmd *VAR_7)
{
 struct se_device *VAR_8 = VAR_7->se_dev;
 struct se_portal_group *VAR_9 = VAR_7->se_lun->lun_tpg;
 unsigned char *VAR_10;
 unsigned char *VAR_11 = VAR_7->t_task_cdb;
 unsigned char *VAR_12;
 sense_reason_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 VAR_12 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_12) {
  FUNC_6("Unable to allocate response buffer for INQUIRY\n");
  return VAR_4;
 }

 if (VAR_8 == FUNC_7(VAR_9->tpg_virt_lun0->lun_se_dev))
  VAR_12[0] = 0x3f;
 else
  VAR_12[0] = VAR_8->transport->get_device_type(VAR_8);

 if (!(VAR_11[1] & 0x1)) {
  if (VAR_11[2]) {
   FUNC_6("INQUIRY with EVPD==0 but PAGE CODE=%02x\n",
          VAR_11[2]);
   VAR_13 = VAR_3;
   goto out;
  }

  VAR_13 = FUNC_8(VAR_7, VAR_12);
  VAR_15 = VAR_12[4] + 5;
  goto out;
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); ++VAR_14) {
  if (VAR_11[2] == VAR_5[VAR_14].page) {
   VAR_12[1] = VAR_11[2];
   VAR_13 = VAR_5[VAR_14].emulate(VAR_7, VAR_12);
   VAR_15 = FUNC_1(&VAR_12[2]) + 4;
   goto out;
  }
 }

 FUNC_6("Unknown VPD Code: 0x%02x\n", VAR_11[2]);
 VAR_13 = VAR_3;

out:
 VAR_10 = FUNC_12(VAR_7);
 if (VAR_10) {
  FUNC_4(VAR_10, VAR_12, FUNC_5(VAR_6, VAR_2, VAR_7->data_length));
  FUNC_13(VAR_7);
 }
 FUNC_2(VAR_12);

 if (!VAR_13)
  FUNC_11(VAR_7, VAR_1, VAR_15);
 return VAR_13;
}
