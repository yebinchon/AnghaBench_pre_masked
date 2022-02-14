
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {int prot_op; int data_length; TYPE_1__* se_sess; int pi_err; int t_prot_sg; int t_task_lba; TYPE_3__* se_dev; } ;
struct TYPE_5__ {int block_size; } ;
struct TYPE_6__ {TYPE_2__ dev_attrib; } ;
struct TYPE_4__ {int const sup_prot_ops; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*,int ,int,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct se_cmd *VAR_0)
{
 switch (VAR_0->prot_op) {
 case 128:
  if (!(VAR_0->se_sess->sup_prot_ops & 128)) {
   u32 VAR_1 = VAR_0->data_length >>
      FUNC_0(VAR_0->se_dev->dev_attrib.block_size);

   VAR_0->pi_err = FUNC_2(VAR_0, VAR_0->t_task_lba,
           VAR_1, 0, VAR_0->t_prot_sg,
           0);
   if (VAR_0->pi_err)
    return 1;
  }
  break;
 case 129:
  if (VAR_0->se_sess->sup_prot_ops & 129)
   break;

  FUNC_1(VAR_0);
  break;
 default:
  break;
 }

 return 0;
}
