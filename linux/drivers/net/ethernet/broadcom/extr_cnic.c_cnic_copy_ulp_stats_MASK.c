
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ulp_ops {int (* cnic_get_stats ) (int ) ;} ;
struct cnic_local {int * ulp_handle; int * ulp_ops; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cnic_ulp_ops* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_2, int VAR_3)
{
 struct cnic_local *VAR_4 = VAR_2->cnic_priv;
 struct cnic_ulp_ops *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_1);
 VAR_5 = FUNC_3(VAR_4->ulp_ops[VAR_3],
         FUNC_0(&VAR_1));
 if (VAR_5 && VAR_5->cnic_get_stats)
  VAR_6 = VAR_5->cnic_get_stats(VAR_4->ulp_handle[VAR_3]);
 else
  VAR_6 = -VAR_0;
 FUNC_2(&VAR_1);
 return VAR_6;
}
