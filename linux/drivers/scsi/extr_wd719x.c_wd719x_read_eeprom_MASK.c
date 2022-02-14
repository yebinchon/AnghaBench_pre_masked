
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wd719x_host_param {int dummy; } ;
struct wd719x_eeprom_header {char sig1; char sig2; int cfg_offset; } ;
struct wd719x {scalar_t__ type; TYPE_2__* params; TYPE_1__* pdev; } ;
struct eeprom_93cx6 {int width; int register_write; int register_read; struct wd719x* data; } ;
typedef int header ;
struct TYPE_4__ {int ch_1_th; int scsi_conf; int own_scsi_id; int sel_timeout; int sleep_timer; int scsi_pad; int soft_mask; int unsol_mask; void* tag_en; void* sync; void* wide; void* cdb_size; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char,char) ;
 int FUNC_3 (struct eeprom_93cx6*,int ,int*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct wd719x*,int ) ;
 int FUNC_5 (struct wd719x*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct wd719x *VAR_10)
{
 struct eeprom_93cx6 VAR_11;
 u8 VAR_12;
 struct wd719x_eeprom_header VAR_13;

 VAR_11.data = VAR_10;
 VAR_11.register_read = VAR_8;
 VAR_11.register_write = VAR_9;
 VAR_11.width = VAR_0;


 FUNC_5(VAR_10, VAR_6, 0);

 VAR_12 = FUNC_4(VAR_10, VAR_5);

 VAR_12 &= (~(VAR_1 | VAR_3 | VAR_2));

 VAR_12 |= VAR_4;
 FUNC_5(VAR_10, VAR_5, VAR_12);


 FUNC_3(&VAR_11, 0, (u8 *)&VAR_13, sizeof(VAR_13));

 if (VAR_13.sig1 == 'W' && VAR_13.sig2 == 'D')
  FUNC_3(&VAR_11, VAR_13.cfg_offset,
     (u8 *)VAR_10->params,
     sizeof(struct wd719x_host_param));
 else {
  FUNC_2(&VAR_10->pdev->dev, "EEPROM signature is invalid (0x%02x 0x%02x), using default values\n",
    VAR_13.sig1, VAR_13.sig2);
  VAR_10->params->ch_1_th = 0x10;
  VAR_10->params->scsi_conf = 0x4c;
  VAR_10->params->own_scsi_id = 0x07;
  VAR_10->params->sel_timeout = 0x4d;
  VAR_10->params->sleep_timer = 0x01;
  VAR_10->params->cdb_size = FUNC_0(0x5555);
  VAR_10->params->scsi_pad = 0x1b;
  if (VAR_10->type == VAR_7)
   VAR_10->params->wide = FUNC_1(0x00000000);
  else
   VAR_10->params->wide = FUNC_1(0xffffffff);
  VAR_10->params->sync = FUNC_1(0xffffffff);
  VAR_10->params->soft_mask = 0x00;
  VAR_10->params->unsol_mask = 0x00;
 }

 VAR_10->params->tag_en = FUNC_0(0x0000);
}
