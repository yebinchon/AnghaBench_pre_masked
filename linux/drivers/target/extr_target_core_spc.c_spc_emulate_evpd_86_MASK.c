
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_session {int sup_prot_ops; scalar_t__ sess_prot_type; } ;
struct TYPE_6__ {int lba_map_lock; int lba_map_list; } ;
struct TYPE_5__ {scalar_t__ pi_prot_type; } ;
struct se_device {TYPE_3__ t10_alua; TYPE_2__ dev_attrib; TYPE_1__* transport; } ;
struct se_cmd {struct se_device* se_dev; struct se_session* se_sess; } ;
typedef int sense_reason_t ;
struct TYPE_4__ {scalar_t__ (* get_device_type ) (struct se_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct se_device*) ;
 scalar_t__ FUNC_4 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_5(struct se_cmd *VAR_5, unsigned char *VAR_6)
{
 struct se_device *VAR_7 = VAR_5->se_dev;
 struct se_session *VAR_8 = VAR_5->se_sess;

 VAR_6[3] = 0x3c;




 if (VAR_8->sup_prot_ops & (VAR_2 | VAR_3)) {
  if (VAR_7->dev_attrib.pi_prot_type == VAR_0 ||
      VAR_5->se_sess->sess_prot_type == VAR_0)
   VAR_6[4] = 0x5;
  else if (VAR_7->dev_attrib.pi_prot_type == VAR_1 ||
    VAR_5->se_sess->sess_prot_type == VAR_1)
   VAR_6[4] = 0x4;
 }


 if ((VAR_7->transport->get_device_type(VAR_7) == VAR_4) &&
     (VAR_8->sup_prot_ops & (VAR_2 | VAR_3)) &&
     (VAR_7->dev_attrib.pi_prot_type || VAR_5->se_sess->sess_prot_type)) {
  VAR_6[4] |= (0x3 << 3);
 }


 VAR_6[5] = 0x07;


 if (FUNC_4(VAR_7))
  VAR_6[6] = 0x01;

 FUNC_1(&VAR_5->se_dev->t10_alua.lba_map_lock);
 if (!FUNC_0(&VAR_7->t10_alua.lba_map_list))
  VAR_6[8] = 0x10;
 FUNC_2(&VAR_5->se_dev->t10_alua.lba_map_lock);
 return 0;
}
