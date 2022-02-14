
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {int prot_op; int data_length; int pi_err; int t_state_lock; int transport_state; int t_prot_sg; int t_task_lba; TYPE_3__* se_dev; TYPE_1__* se_sess; } ;
struct TYPE_5__ {int block_size; } ;
struct TYPE_6__ {TYPE_2__ dev_attrib; } ;
struct TYPE_4__ {int const sup_prot_ops; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*,int ,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct se_cmd*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct se_cmd *VAR_1)
{
 u32 VAR_2;





 switch (VAR_1->prot_op) {
 case 129:
  if (!(VAR_1->se_sess->sup_prot_ops & 129))
   FUNC_1(VAR_1);
  break;
 case 128:
  if (VAR_1->se_sess->sup_prot_ops & 128)
   break;

  VAR_2 = VAR_1->data_length >> FUNC_0(VAR_1->se_dev->dev_attrib.block_size);
  VAR_1->pi_err = FUNC_2(VAR_1, VAR_1->t_task_lba,
          VAR_2, 0, VAR_1->t_prot_sg, 0);
  if (FUNC_6(VAR_1->pi_err)) {
   FUNC_3(&VAR_1->t_state_lock);
   VAR_1->transport_state &= ~VAR_0;
   FUNC_4(&VAR_1->t_state_lock);
   FUNC_5(VAR_1, VAR_1->pi_err);
   return -1;
  }
  break;
 default:
  break;
 }

 return 0;
}
