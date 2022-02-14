
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_id; } ;
struct t10_alua_lu_gp_member {int lu_gp_mem_lock; struct t10_alua_lu_gp* lu_gp; } ;
struct t10_alua_lu_gp {int lu_gp_id; } ;
struct se_portal_group {int proto_id; TYPE_1__* se_tpg_tfo; } ;
struct se_lun {int lun_rtpi; int lun_tg_pt_gp_lock; struct t10_alua_tg_pt_gp* lun_tg_pt_gp; struct se_portal_group* lun_tpg; } ;
struct TYPE_4__ {unsigned char* model; unsigned char* unit_serial; int vendor; } ;
struct se_device {int dev_flags; struct t10_alua_lu_gp_member* dev_alua_lu_gp_mem; TYPE_2__ t10_wwn; } ;
struct se_cmd {struct se_lun* se_lun; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {int (* tpg_get_tag ) (struct se_portal_group*) ;char* (* tpg_get_wwn ) (struct se_portal_group*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int ) ;
 int FUNC_1 (unsigned char*,int,int ) ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (struct se_device*,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (unsigned char*,char*,...) ;
 size_t FUNC_7 (unsigned char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct se_portal_group*) ;
 char* FUNC_10 (struct se_portal_group*) ;
 char* FUNC_11 (struct se_portal_group*) ;
 char* FUNC_12 (struct se_portal_group*) ;
 char* FUNC_13 (struct se_portal_group*) ;

sense_reason_t
FUNC_14(struct se_cmd *VAR_2, unsigned char *VAR_3)
{
 struct se_device *VAR_4 = VAR_2->se_dev;
 struct se_lun *VAR_5 = VAR_2->se_lun;
 struct se_portal_group *VAR_6 = ((void*)0);
 struct t10_alua_lu_gp_member *VAR_7;
 struct t10_alua_tg_pt_gp *VAR_8;
 unsigned char *VAR_9 = &VAR_4->t10_wwn.model[0];
 u32 VAR_10;
 u32 VAR_11, VAR_12 = 0;
 u16 VAR_13 = 0, VAR_14;

 VAR_12 = 4;
 if (!(VAR_4->dev_flags & VAR_0))
  goto check_t10_vend_desc;


 VAR_3[VAR_12++] = 0x1;


 VAR_3[VAR_12] = 0x00;


 VAR_3[VAR_12++] |= 0x3;
 VAR_12++;


 VAR_3[VAR_12++] = 0x10;




 VAR_3[VAR_12++] = (0x6 << 4);




 VAR_3[VAR_12++] = 0x01;
 VAR_3[VAR_12++] = 0x40;
 VAR_3[VAR_12] = (0x5 << 4);






 FUNC_3(VAR_4, &VAR_3[VAR_12]);

 VAR_13 = 20;
 VAR_12 = (VAR_13 + 4);

check_t10_vend_desc:



 VAR_14 = 8;
 VAR_10 = 4;
 VAR_10 += 8;
 VAR_10 += FUNC_7(VAR_9);
 VAR_10++;

 if (VAR_4->dev_flags & VAR_0) {
  VAR_11 = FUNC_7(&VAR_4->t10_wwn.unit_serial[0]);
  VAR_11++;

  VAR_14 += FUNC_6(&VAR_3[VAR_12+12], "%s:%s", VAR_9,
    &VAR_4->t10_wwn.unit_serial[0]);
 }
 VAR_3[VAR_12] = 0x2;
 VAR_3[VAR_12+1] = 0x1;
 VAR_3[VAR_12+2] = 0x0;

 FUNC_1(&VAR_3[VAR_12+4], 0x20, VAR_1);
 FUNC_0(&VAR_3[VAR_12+4], VAR_4->t10_wwn.vendor,
        FUNC_8(VAR_4->t10_wwn.vendor, VAR_1));

 VAR_14++;

 VAR_3[VAR_12+3] = VAR_14;

 VAR_13 += (VAR_14 + 4);
 VAR_12 += (VAR_14 + 4);

 if (1) {
  struct t10_alua_lu_gp *VAR_15;
  u32 VAR_16, VAR_17, VAR_18;
  u16 VAR_19 = 0;
  u16 VAR_20 = 0;
  u16 VAR_21;

  VAR_6 = VAR_5->lun_tpg;







  VAR_3[VAR_12] = VAR_6->proto_id << 4;
  VAR_3[VAR_12++] |= 0x1;
  VAR_3[VAR_12] = 0x80;

  VAR_3[VAR_12] |= 0x10;

  VAR_3[VAR_12++] |= 0x4;
  VAR_12++;
  VAR_3[VAR_12++] = 4;


  VAR_12 += 2;
  FUNC_2(VAR_5->lun_rtpi, &VAR_3[VAR_12]);
  VAR_12 += 2;
  VAR_13 += 8;







  FUNC_4(&VAR_5->lun_tg_pt_gp_lock);
  VAR_8 = VAR_5->lun_tg_pt_gp;
  if (!VAR_8) {
   FUNC_5(&VAR_5->lun_tg_pt_gp_lock);
   goto check_lu_gp;
  }
  VAR_20 = VAR_8->tg_pt_gp_id;
  FUNC_5(&VAR_5->lun_tg_pt_gp_lock);

  VAR_3[VAR_12] = VAR_6->proto_id << 4;
  VAR_3[VAR_12++] |= 0x1;
  VAR_3[VAR_12] = 0x80;

  VAR_3[VAR_12] |= 0x10;

  VAR_3[VAR_12++] |= 0x5;
  VAR_12++;
  VAR_3[VAR_12++] = 4;
  VAR_12 += 2;
  FUNC_2(VAR_20, &VAR_3[VAR_12]);
  VAR_12 += 2;
  VAR_13 += 8;




check_lu_gp:
  VAR_7 = VAR_4->dev_alua_lu_gp_mem;
  if (!VAR_7)
   goto check_scsi_name;

  FUNC_4(&VAR_7->lu_gp_mem_lock);
  VAR_15 = VAR_7->lu_gp;
  if (!VAR_15) {
   FUNC_5(&VAR_7->lu_gp_mem_lock);
   goto check_scsi_name;
  }
  VAR_19 = VAR_15->lu_gp_id;
  FUNC_5(&VAR_7->lu_gp_mem_lock);

  VAR_3[VAR_12++] |= 0x1;

  VAR_3[VAR_12++] |= 0x6;
  VAR_12++;
  VAR_3[VAR_12++] = 4;
  VAR_12 += 2;
  FUNC_2(VAR_19, &VAR_3[VAR_12]);
  VAR_12 += 2;
  VAR_13 += 8;







check_scsi_name:
  VAR_3[VAR_12] = VAR_6->proto_id << 4;
  VAR_3[VAR_12++] |= 0x3;
  VAR_3[VAR_12] = 0x80;

  VAR_3[VAR_12] |= 0x10;

  VAR_3[VAR_12++] |= 0x8;
  VAR_12 += 2;






  VAR_21 = VAR_6->se_tpg_tfo->tpg_get_tag(VAR_6);
  VAR_17 = FUNC_6(&VAR_3[VAR_12], "%s,t,0x%04x",
     VAR_6->se_tpg_tfo->tpg_get_wwn(VAR_6), VAR_21);
  VAR_17 += 1 ;
  VAR_16 = ((-VAR_17) & 3);
  if (VAR_16)
   VAR_17 += VAR_16;
  if (VAR_17 > 256)
   VAR_17 = 256;

  VAR_3[VAR_12-1] = VAR_17;
  VAR_12 += VAR_17;

  VAR_13 += (VAR_17 + 4);




  VAR_3[VAR_12] = VAR_6->proto_id << 4;
  VAR_3[VAR_12++] |= 0x3;
  VAR_3[VAR_12] = 0x80;

  VAR_3[VAR_12] |= 0x20;

  VAR_3[VAR_12++] |= 0x8;
  VAR_12 += 2;






  VAR_18 = FUNC_6(&VAR_3[VAR_12], "%s",
       VAR_6->se_tpg_tfo->tpg_get_wwn(VAR_6));
  VAR_18 += 1 ;
  VAR_16 = ((-VAR_18) & 3);
  if (VAR_16)
   VAR_18 += VAR_16;
  if (VAR_18 > 256)
   VAR_18 = 256;

  VAR_3[VAR_12-1] = VAR_18;
  VAR_12 += VAR_18;


  VAR_13 += (VAR_18 + 4);
 }
 FUNC_2(VAR_13, &VAR_3[2]);
 return 0;
}
