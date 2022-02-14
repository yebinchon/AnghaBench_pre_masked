
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int cqe_exp_seq_sn; int cqe_size; scalar_t__ cq_pgtbl_virt; } ;
struct bnx2i_endpoint {int ec_shift; TYPE_2__ qp; int num_active_cmds; TYPE_1__* hba; } ;
struct bnx2i_5771x_cq_db {int* sqn; } ;
struct TYPE_3__ {int cnic_dev_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct bnx2i_endpoint *VAR_4, u8 VAR_5)
{
 struct bnx2i_5771x_cq_db *VAR_6;
 u16 VAR_7;
 u16 VAR_8 = 0;
 u32 VAR_9;


 if (!FUNC_1(VAR_0, &VAR_4->hba->cnic_dev_type))
  return 0;





 VAR_6 = (struct bnx2i_5771x_cq_db *) VAR_4->qp.cq_pgtbl_virt;

 if (VAR_5 != VAR_2)
  if (VAR_6->sqn[0] && VAR_6->sqn[0] != 0xFFFF)
   return 0;

 if (VAR_5 == VAR_1 || VAR_5 == VAR_2) {
  VAR_9 = FUNC_0(&VAR_4->num_active_cmds);
  if (VAR_9 <= VAR_3)
   VAR_8 = 1;
  else {
   VAR_8 = VAR_9 >> VAR_4->ec_shift;
   if (VAR_8 > VAR_9 - VAR_3)
    VAR_8 = VAR_9 - VAR_3;
  }
  if (!VAR_8)
   VAR_8 = 1;
  VAR_7 = VAR_4->qp.cqe_exp_seq_sn + VAR_8 - 1;
  if (VAR_7 > VAR_4->qp.cqe_size * 2)
   VAR_7 -= VAR_4->qp.cqe_size * 2;
  if (!VAR_7)
   VAR_7 = 1;

  VAR_6->sqn[0] = VAR_7;
 }
 return VAR_8;
}
