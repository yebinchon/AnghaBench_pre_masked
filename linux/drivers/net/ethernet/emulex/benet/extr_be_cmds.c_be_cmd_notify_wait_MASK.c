
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 struct be_mcc_wrb* FUNC_0 (struct be_adapter*,struct be_mcc_wrb*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_mcc_wrb*,struct be_mcc_wrb*,int) ;
 scalar_t__ FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_7(struct be_adapter *VAR_1,
         struct be_mcc_wrb *VAR_2)
{
 struct be_mcc_wrb *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto unlock;
 }

 if (FUNC_6(VAR_1))
  VAR_4 = FUNC_4(VAR_1);
 else
  VAR_4 = FUNC_3(VAR_1);

 if (!VAR_4)
  FUNC_5(VAR_2, VAR_3, sizeof(*VAR_2));

unlock:
 FUNC_2(VAR_1);
 return VAR_4;
}
