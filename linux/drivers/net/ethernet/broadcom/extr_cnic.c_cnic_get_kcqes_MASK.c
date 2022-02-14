
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kcqe {int kcqe_op_flag; } ;
struct kcq_info {int sw_prod_idx; int* hw_prod_idx_ptr; int (* hw_idx ) (int) ;int (* next_idx ) (int) ;struct kcqe** kcq; } ;
struct cnic_local {struct kcqe** completed_kcq; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_3, struct kcq_info *VAR_4)
{
 struct cnic_local *VAR_5 = VAR_3->cnic_priv;
 u16 VAR_6, VAR_7, VAR_8, VAR_9;
 struct kcqe *VAR_10;
 int VAR_11 = 0, VAR_12 = 0;

 VAR_6 = VAR_7 = VAR_9 = VAR_4->sw_prod_idx;
 VAR_7 &= VAR_2;
 VAR_8 = *VAR_4->hw_prod_idx_ptr;
 VAR_8 = VAR_4->hw_idx(VAR_8);

 while ((VAR_6 != VAR_8) && (VAR_11 < VAR_1)) {
  VAR_10 = &VAR_4->kcq[FUNC_1(VAR_7)][FUNC_0(VAR_7)];
  VAR_5->completed_kcq[VAR_11++] = VAR_10;
  VAR_6 = VAR_4->next_idx(VAR_6);
  VAR_7 = VAR_6 & VAR_2;
  if (FUNC_2(!(VAR_10->kcqe_op_flag & VAR_0))) {
   VAR_12 = VAR_11;
   VAR_9 = VAR_6;
  }
 }

 VAR_4->sw_prod_idx = VAR_9;
 return VAR_12;
}
