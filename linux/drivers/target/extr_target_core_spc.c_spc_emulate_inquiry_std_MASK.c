
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_session {int sup_prot_ops; scalar_t__ sess_prot_type; } ;
struct se_lun {int dummy; } ;
struct TYPE_6__ {int revision; int model; int vendor; } ;
struct TYPE_5__ {scalar_t__ pi_prot_type; scalar_t__ emulate_3pc; } ;
struct se_device {TYPE_3__ t10_wwn; TYPE_2__ dev_attrib; TYPE_1__* transport; } ;
struct se_cmd {struct se_session* se_sess; struct se_device* se_dev; struct se_lun* se_lun; } ;
typedef int sense_reason_t ;
struct TYPE_4__ {scalar_t__ (* get_device_type ) (struct se_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned char*,int ,int ) ;
 int FUNC_1 (unsigned char*,int,scalar_t__) ;
 int FUNC_2 (struct se_lun*,unsigned char*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct se_device*) ;

sense_reason_t
FUNC_5(struct se_cmd *VAR_6, unsigned char *VAR_7)
{
 struct se_lun *VAR_8 = VAR_6->se_lun;
 struct se_device *VAR_9 = VAR_6->se_dev;
 struct se_session *VAR_10 = VAR_6->se_sess;


 if (VAR_9->transport->get_device_type(VAR_9) == VAR_5)
  VAR_7[1] = 0x80;

 VAR_7[2] = 0x05;
 VAR_7[3] = 2;




 FUNC_2(VAR_8, VAR_7);




 if (VAR_9->dev_attrib.emulate_3pc)
  VAR_7[5] |= 0x8;






 if (VAR_10->sup_prot_ops & (VAR_3 | VAR_4)) {
  if (VAR_9->dev_attrib.pi_prot_type || VAR_6->se_sess->sess_prot_type)
   VAR_7[5] |= 0x1;
 }

 VAR_7[7] = 0x2;






 FUNC_1(&VAR_7[8], 0x20,
        VAR_2 + VAR_0 + VAR_1);
 FUNC_0(&VAR_7[8], VAR_9->t10_wwn.vendor,
        FUNC_3(VAR_9->t10_wwn.vendor, VAR_2));
 FUNC_0(&VAR_7[16], VAR_9->t10_wwn.model,
        FUNC_3(VAR_9->t10_wwn.model, VAR_0));
 FUNC_0(&VAR_7[32], VAR_9->t10_wwn.revision,
        FUNC_3(VAR_9->t10_wwn.revision, VAR_1));
 VAR_7[4] = 31;

 return 0;
}
