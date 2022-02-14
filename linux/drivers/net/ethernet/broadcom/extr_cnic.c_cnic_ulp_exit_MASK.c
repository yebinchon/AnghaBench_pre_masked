
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ulp_ops {int (* cnic_exit ) (struct cnic_dev*) ;} ;
struct cnic_local {int * ulp_flags; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cnic_ulp_ops* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cnic_dev*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct cnic_ulp_ops*) ;
 int FUNC_6 (struct cnic_ulp_ops*) ;

__attribute__((used)) static void FUNC_7(struct cnic_dev *VAR_3)
{
 int VAR_4;
 struct cnic_local *VAR_5 = VAR_3->cnic_priv;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct cnic_ulp_ops *VAR_6;

  FUNC_1(&VAR_2);
  VAR_6 = FUNC_0(VAR_4);
  if (!VAR_6 || !VAR_6->cnic_exit) {
   FUNC_2(&VAR_2);
   continue;
  }
  FUNC_5(VAR_6);
  FUNC_2(&VAR_2);

  if (FUNC_4(VAR_1, &VAR_5->ulp_flags[VAR_4]))
   VAR_6->cnic_exit(VAR_3);

  FUNC_6(VAR_6);
 }
}
