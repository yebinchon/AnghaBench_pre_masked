
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct se_session {int sup_prot_ops; scalar_t__ sess_prot_type; } ;
struct TYPE_2__ {int emulate_rest_reord; int emulate_ua_intlck_ctrl; scalar_t__ pi_prot_type; scalar_t__ emulate_tas; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {struct se_session* se_sess; struct se_device* se_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct se_device*) ;

__attribute__((used)) static int FUNC_1(struct se_cmd *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct se_device *VAR_5 = VAR_2->se_dev;
 struct se_session *VAR_6 = VAR_2->se_sess;

 VAR_4[0] = 0x0a;
 VAR_4[1] = 0x0a;


 if (VAR_3 == 1)
  goto out;


 VAR_4[2] = (1 << 1);
 if (FUNC_0(VAR_5))

  VAR_4[2] |= (1 << 2);
 VAR_4[3] = (VAR_5->dev_attrib.emulate_rest_reord == 1) ? 0x00 : 0x10;
 VAR_4[4] = (VAR_5->dev_attrib.emulate_ua_intlck_ctrl == 2) ? 0x30 :
        (VAR_5->dev_attrib.emulate_ua_intlck_ctrl == 1) ? 0x20 : 0x00;
 VAR_4[5] = (VAR_5->dev_attrib.emulate_tas) ? 0x40 : 0x00;
 if (VAR_6->sup_prot_ops & (VAR_0 | VAR_1)) {
  if (VAR_5->dev_attrib.pi_prot_type || VAR_6->sess_prot_type)
   VAR_4[5] |= 0x80;
 }

 VAR_4[8] = 0xff;
 VAR_4[9] = 0xff;
 VAR_4[11] = 30;

out:
 return 12;
}
