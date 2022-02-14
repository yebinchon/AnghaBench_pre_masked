
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int last_status_idx; int int_num; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,int ,int) ;
 int FUNC_1 (struct cnic_dev*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct cnic_dev *VAR_3 = (struct cnic_dev *) VAR_2;
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;

 VAR_4->last_status_idx = FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_0, VAR_4->int_num |
  VAR_1 | VAR_4->last_status_idx);
}
