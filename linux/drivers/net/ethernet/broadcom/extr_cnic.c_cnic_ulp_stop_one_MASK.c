
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ulp_ops {int (* cnic_stop ) (int ) ;} ;
struct cnic_local {int * ulp_flags; int * ulp_handle; int * ulp_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct cnic_local*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cnic_ulp_ops* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct cnic_local *VAR_5, int VAR_6)
{
 struct cnic_ulp_ops *VAR_7;

 if (VAR_6 == VAR_0)
  FUNC_1(VAR_5, VAR_1, ((void*)0));

 FUNC_3(&VAR_4);
 VAR_7 = FUNC_5(VAR_5->ulp_ops[VAR_6],
         FUNC_2(&VAR_4));
 if (!VAR_7) {
  FUNC_4(&VAR_4);
  return;
 }
 FUNC_6(VAR_2, &VAR_5->ulp_flags[VAR_6]);
 FUNC_4(&VAR_4);

 if (FUNC_8(VAR_3, &VAR_5->ulp_flags[VAR_6]))
  VAR_7->cnic_stop(VAR_5->ulp_handle[VAR_6]);

 FUNC_0(VAR_2, &VAR_5->ulp_flags[VAR_6]);
}
